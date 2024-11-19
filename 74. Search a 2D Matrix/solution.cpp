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
            
            int firstRowIdx = 0;
            int lastRowIdx = numRows - 1;
            int rowIdx;

            while(firstRowIdx <= lastRowIdx)
            {
                if(target <= matrix[firstRowIdx][numCols-1])
                {
                    rowIdx = firstRowIdx;
                    break;
                }
                else if(target >= matrix[lastRowIdx][0])
                {
                    rowIdx = lastRowIdx;
                    break;
                }
                else if(target > matrix[firstRowIdx][numCols-1])
                {
                    firstRowIdx++;
                }
                else
                {
                    lastRowIdx--;
                }
            }

            int leftIdx = 0;
            int rightIdx = numCols-1;

            while(leftIdx <= rightIdx)
            {
                int midIdx = leftIdx + (rightIdx - leftIdx) / 2;
                if(target == matrix[rowIdx][midIdx])
                {
                    return true;
                }
                else if(target > matrix[rowIdx][midIdx])
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