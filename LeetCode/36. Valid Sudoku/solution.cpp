#include <vector>

class Solution
{
    public:
        bool isValidSudoku(std::vector<std::vector<char>>& board)
        {
            std::vector<std::vector<bool>> rows(9, std::vector<bool>(9, false));
            std::vector<std::vector<bool>> columns(9, std::vector<bool>(9, false));
            std::vector<std::vector<bool>> subBoxes(9, std::vector<bool>(9, false));

            for(int row = 0; row < 9; row++)
            {
                for(int col = 0; col < 9; col++)
                {
                    if(board[row][col] != '.')
                    {
                        int subBoxIdx = 3 * (row/3) + (col/3);
                        int idx = board[row][col] - '1';
                        if(rows[row][idx] || columns[col][idx] || subBoxes[subBoxIdx][idx])
                        {
                            return false;
                        }
                        rows[row][idx] = true;
                        columns[col][idx] = true;
                        subBoxes[subBoxIdx][idx] = true;
                    }
                }
            }
            return true;
        }
};