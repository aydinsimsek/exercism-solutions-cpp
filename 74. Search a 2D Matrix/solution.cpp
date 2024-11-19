#include <vector>

class Solution
{
    public:
        bool searchMatrix(std::vector<std::vector<int>>& matrix, int target)
        {
            int numRows = matrix.size();
            int numCols = matrix[0].size();
            if(numRows == 1 && numCols == 1)
            {
                if(target == matrix[0][0])
                {
                    return true;
                }
                return false;
            }

            int leftIdx = 0;
            int rightIdx = (numRows * numCols) - 1;

            while(leftIdx <= rightIdx)
            {
                int midIdx = leftIdx + (rightIdx - leftIdx) / 2;
                int rowIdx = midIdx / numCols;
                int colIdx = midIdx % numCols;
                
                if(target == matrix[rowIdx][colIdx])
                {
                    return true;
                }
                else if(target > matrix[rowIdx][colIdx])
                {
                    leftIdx = midIdx + 1;
                }
                else
                {
                    rightIdx = midIdx - 1;
                }
            }
            return false;
        }
};