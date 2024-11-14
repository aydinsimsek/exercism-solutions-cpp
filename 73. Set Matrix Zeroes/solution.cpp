#include <vector>

class Solution
{
    public:
        void setZeroes(std::vector<std::vector<int>>& matrix)
        {
            std::vector<bool> rows(matrix.size(), false);
            std::vector<bool> columns(matrix.size(), false);
            for(int i = 0; i < matrix.size(); i++)
            {
                for(int j = 0; j < matrix[i].size(); j++)
                {
                    if(matrix[i][j] == 0)
                    {
                        rows[i] = true;
                        columns[j] = true;
                    }
                }
            }
            for(int i = 0; i < matrix.size(); i++)
            {
                for(int j = 0; j < matrix[i].size(); j++)
                {
                    if(rows[i] || columns[j])
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
};