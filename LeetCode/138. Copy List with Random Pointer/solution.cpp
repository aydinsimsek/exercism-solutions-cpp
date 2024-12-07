#include <unordered_map>

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution 
{
    public:
        Node* copyRandomList(Node* head)
        {
            Node *currNode = head;
            std::unordered_map<Node*, Node*> umap;
            while(currNode != NULL)
            {
                Node *newNode = new Node(currNode->val);
                umap[currNode] = newNode;
                currNode = currNode->next;
            }
            Node *copyHead = umap[head];
            while(head != NULL)
            {
                currNode = umap[head];
                currNode->next = umap[head->next];
                currNode->random = umap[head->random];
                head = head->next;
            }
            return copyHead;
        }
};