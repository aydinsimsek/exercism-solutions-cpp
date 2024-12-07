#include <vector>
#include <string>

class Solution
{
    public:
        std::string leftJustify(std::vector<std::string> lineVec, int maxWidth)
        {
            std::string line;
            for(int i = 0; i < lineVec.size()-1; i++)
            {
                line += lineVec[i] + ' ';
            }
            line += lineVec[lineVec.size()-1];
            int padLength = maxWidth - line.length();
            line.insert(line.begin() + line.length(), padLength, ' ');
            return line;
        }

        std::string lineJustify(std::vector<std::string> lineVec, int maxWidth)
        {
            std::string line;
            int totalWordLen = 0;
            for(int i = 0; i < lineVec.size(); i++)
            {
                totalWordLen += lineVec[i].length();
            }
            int spaceSize = maxWidth - totalWordLen;
            int totalGaps = lineVec.size()-1;
            int numSpaces = spaceSize / totalGaps;
            int extraSpaces = spaceSize % totalGaps;
            for(int i = 0; i < lineVec.size()-1; i++)
            {
                line += lineVec[i];
                line.insert(line.begin() + line.length(), numSpaces, ' ');
                if(extraSpaces > 0)
                {
                    line += ' ';
                    extraSpaces--;
                }
            }
            line += lineVec[lineVec.size()-1];
            return line;
        }
        
        std::vector<std::string> fullJustify(std::vector<std::string>& words, int maxWidth)
        {
            std::vector<std::string> res;
            std::vector<std::string> lineVec;
            std::string line;
            int currWidth = 0;
            int i = 0;
            while(i < words.size())
            {
                if(currWidth + words[i].length() <= maxWidth)
                {
                    lineVec.push_back(words[i]);
                    if(i == words.size()-1)
                    {
                        line = leftJustify(lineVec, maxWidth);
                        res.push_back(line);
                    }
                    else
                    {
                        currWidth += words[i].length() + 1;
                    }
                    i++;
                }
                else
                {
                    if(lineVec.size() > 1)
                    {
                        line = lineJustify(lineVec, maxWidth);
                    }
                    else
                    {
                        line = leftJustify(lineVec, maxWidth);
                    }
                    res.push_back(line);
                    lineVec.clear();
                    currWidth = 0;
                }
            }
            return res;
        }
};