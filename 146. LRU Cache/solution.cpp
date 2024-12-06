#include <unordered_map>

class LRUCache
{
    private:
        struct ListNode
        {
            public:
                int key;
                int val;
                ListNode *prev;
                ListNode *next;
                ListNode(int _key) : key(_key), val(-1), prev(NULL), next(NULL) {}
        };
        ListNode *head = NULL;
        ListNode *tail = NULL;
        std::unordered_map<int, ListNode*> umap;
        int cacheCapacity;

        void updateHead(ListNode *currNode)
        {
            head->prev = currNode;
            currNode->prev = NULL;
            currNode->next = head;
            head = currNode;
        }

        void updateListOrder(ListNode *currNode)
        {
            if(tail == currNode) 
            {
                tail->prev->next = NULL;
                tail = tail->prev;
            }
            else
            {
                currNode->prev->next = currNode->next;
                currNode->next->prev = currNode->prev;
            }
            updateHead(currNode);
        }

    public:
        LRUCache(int capacity)
        {
            cacheCapacity = capacity;
        }
        
        int get(int key)
        {
            if(umap.find(key) != umap.end())
            {
                if(head != umap[key])
                {
                    updateListOrder(umap[key]);
                }
                return umap[key]->val;
            }
            return -1;
        }
        
        void put(int key, int value)
        {
            if(umap.find(key) == umap.end()) 
            {
                ListNode *currNode = new ListNode(key);
                if(umap.size() == 0)
                {
                    head = currNode;
                    tail = currNode;
                }
                else if(umap.size() == 1)
                {
                    ListNode *prevHead = head;
                    updateHead(currNode);
                    tail = prevHead;
                }
                else
                {
                    updateHead(currNode);
                }
                if(umap.size() == cacheCapacity)
                {
                    ListNode *prevTail = tail;
                    tail->prev->next = NULL;
                    tail = tail->prev;
                    umap.erase(prevTail->key);
                    delete(prevTail);
                }
                currNode->val = value;
                umap[key] = currNode;
            }
            else
            {
                if(head != umap[key])
                {
                    updateListOrder(umap[key]);
                }
                umap[key]->val = value;
            }
        }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */