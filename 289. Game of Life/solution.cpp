#include <vector>

class Solution
{
    private:
        void padZeros(std::vector<std::vector<int>>& board)
        {
            int numRows = board.size();
            int numCols = board[0].size();
            std::vector<int> zeroRow(numCols+2, 0);
            board.insert(board.begin(), zeroRow); 
            board.push_back(zeroRow);            
            for(int i = 0; i < numRows+2; i++)
            {
                board[i].insert(board[i].begin(), 0); 
                board[i].insert(board[i].end(), 0);   
            }
        }

        void unpadZeros(std::vector<std::vector<int>>& board)
        {
            board.erase(board.begin());         
            board.erase(board.end()-1);      

            for(int i = 0; i < board.size(); i++)
            {
                board[i].erase(board[i].begin(), board[i].begin()+1); 
                board[i].erase(board[i].end()-1, board[i].end());     
            }
        }

    public:
        void gameOfLife(std::vector<std::vector<int>>& board)
        {
            padZeros(board);
            std::vector<std::vector<int>> nextState = board;
            int count = 0;
            for(int i = 1; i< board.size()-1; i++)
            {
                for(int j = 1; j < board[i].size()-1; j++)
                {
                    count = board[i-1][j-1] + board[i-1][j] + board[i-1][j+1]
                          + board[i][j-1] + board[i][j+1]
                          + board[i+1][j-1] + board[i+1][j] + board[i+1][j+1];

                    if(board[i][j] == 1 && (count < 2 || count > 3))
                    {
                        nextState[i][j] = 0;
                    }
                    if(board[i][j] == 0 && count == 3)
                    {
                        nextState[i][j] = 1;
                    }
                }
            }
            unpadZeros(nextState);
            board = nextState;
        }
};