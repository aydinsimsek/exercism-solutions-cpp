#include <string>
#include <vector>
#include <unordered_map>

class Solution
{
    private: 
        std::vector<std::string> unpackWords(std::string s)
        {
            std::vector<std::string> res;
            int startIdx = 0;
            while(startIdx < s.length())
            {
                int endIdx = s.find(' ', startIdx+1);
                if(endIdx == std::string::npos)
                {
                    res.push_back(s.substr(startIdx, s.length()-startIdx));
                    break;
                }
                else
                {
                    res.push_back(s.substr(startIdx, endIdx-startIdx));
                }
                startIdx = endIdx+1;
            }
            return res;
        }

    public:
        bool wordPattern(std::string pattern, std::string s)
        {
            std::vector<std::string> words = unpackWords(s);
            if(pattern.length() != words.size())
            {
                return false;
            }
            std::unordered_map<char, std::string> pMap;
            std::unordered_map<std::string, char> sMap;
            for(int i = 0; i < pattern.length(); i++)
            {
                if(pMap.find(pattern[i]) == pMap.end())
                {
                    pMap[pattern[i]] = words[i];
                }
                else if(pMap[pattern[i]] != words[i])
                {
                    return false;
                }
            }
            for(int i = 0; i < words.size(); i++)
            {
                if(sMap.find(words[i]) == sMap.end())
                {
                    sMap[words[i]] = pattern[i];
                }
                else if(sMap[words[i]] != pattern[i])
                {
                    return false;
                }
            }
            return true;
        }
};