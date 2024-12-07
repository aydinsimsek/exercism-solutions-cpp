#include <vector>

class Solution
{
    public:
        void rotate(std::vector<std::vector<int>>& matrix)
        {
            int size = matrix.size();
            for(int i = 0; i < size-1; i++)
            {
                for(int j = 1; j < size; j++)
                {
                    if(j > i)
                    {
                        int tmp = matrix[i][j];
                        matrix[i][j] = matrix[j][i];
                        matrix[j][i] = tmp;
                    }
                }
            }
            for(int i = 0; i < size; i++)
            {
                for(int j = 0; j < size/2; j++)
                {
                    int tmp = matrix[i][j];
                    matrix[i][j] = matrix[i][size-1-j];
                    matrix[i][size-1-j] = tmp;
                }
            }
        }
};