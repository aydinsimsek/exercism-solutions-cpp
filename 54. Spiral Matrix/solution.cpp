#include <vector>

class Solution
{
    public:
        std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix)
        {
            if(matrix.size() == 1)
            {
                return matrix[0];
            }
            int left = 0;
            int right =  matrix[0].size()-1;
            int top = 0;
            int bottom = matrix.size()-1;
            int size = (right+1) * (bottom+1);
            std::vector<int> order(size);
            int idx = 0;
            while(idx < size)
            {
                for(int i = left; i <= right && idx < size; i++)
                {
                    order[idx++] = matrix[top][i];
                }
                top++;
                
                for(int i = top; i <= bottom && idx < size; i++)
                {
                    order[idx++] = matrix[i][right];
                }
                right--;
                
                for(int i = right; i >= left && idx < size; i--)
                {
                    order[idx++] = matrix[bottom][i];
                }
                bottom--;
                
                for(int i = bottom; i >= top && idx < size; i--)
                {
                    order[idx++] = matrix[i][left];
                }
                left++;
            }
            return order;
        }
};