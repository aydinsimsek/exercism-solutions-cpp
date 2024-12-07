#include <unordered_map>
#include <vector>
#include <cstdlib>
#include <ctime> 

class RandomizedSet 
{
    private:
        std::unordered_map<int,int> mp;
        std::vector<int> keys;
    public:
        RandomizedSet()
        {
            std::srand(std::time(0));         
        }
        
        bool insert(int key)
        {
            if(mp.find(key) == mp.end())
            {
                keys.push_back(key);
                mp[key] = keys.size()-1;
                return true;
            }
            return false;
        }
        
        bool remove(int key)
        {
            if(mp.find(key) != mp.end())
            {
                int idx = mp[key];
                int replaceKey = keys.back();
                keys[idx] = replaceKey;
                keys.pop_back();
                mp[replaceKey] = idx;
                mp.erase(key);
                return true;
            }
            return false;
        }
        
        int getRandom()
        {
            return keys[std::rand() % keys.size()];
        }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */