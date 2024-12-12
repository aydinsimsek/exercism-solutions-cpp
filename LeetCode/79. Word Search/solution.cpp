#include <vector>
#include <string>
#include <utility>

class Solution
{
    private:
        bool isFound = false;
        std::vector<std::pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        void padBoard(std::vector<std::vector<char>> &board, int numRows, int numCols)
        {
            for(int i = 0; i < numRows; i++)
            {
                board[i].insert(board[i].begin(), '*'); 
                board[i].push_back('*');         
            }
            std::vector<char> paddingRow(numCols+2, '*');
            board.insert(board.begin(), paddingRow);
            board.push_back(paddingRow);
        }

        void searchWord(std::vector<std::vector<char>> &board, int rowIdx, int colIdx, std::string &word, int currCharIdx,
                        std::vector<std::vector<bool>> &isVisited)
        {
            isVisited[rowIdx][colIdx] = true;
            if(currCharIdx == word.length()-1)
            {
                isFound = true;
                return;
            }
            for(auto direction : directions)
            {
                int nextRowIdx = rowIdx + direction.first;
                int nextColIdx = colIdx + direction.second;
                if(isVisited[nextRowIdx][nextColIdx] == false && board[nextRowIdx][nextColIdx] == word[currCharIdx+1])
                {
                    searchWord(board, nextRowIdx, nextColIdx, word, currCharIdx+1, isVisited);  
                    if(isFound)
                    {
                        return;
                    }
                }
            }
            isVisited[rowIdx][colIdx] = false;
        }

    public:
        bool exist(std::vector<std::vector<char>>& board, std::string word)
        {
            int numRows = board.size();
            int numCols = board[0].size();
            padBoard(board, numRows, numCols);
            numRows += 2;
            numCols += 2;
            std::vector<std::vector<bool>> isVisited(numRows, std::vector<bool>(numCols, false)); 
            for(int i = 1; i < numRows-1; i++)
            {
                for(int j = 1; j < numCols-1; j++)
                {
                    if(board[i][j] == word[0])
                    {
                        searchWord(board, i, j, word, 0, isVisited);
                        if(isFound)
                        {
                            return true;
                        }
                    }
                }
            }
            return false;
        }
};