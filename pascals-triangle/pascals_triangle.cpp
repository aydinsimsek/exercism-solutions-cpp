#include "pascals_triangle.h"

namespace pascals_triangle {
	vector <vector<int>> generate_rows(int n) 
	{
		vector <vector<int>> result; 
		for (int i = 0; i < n; i++)
		{
			vector <int> temp;
			for (int j = 0; j <= i; j++)
			{
				if (j == 0 || i == j)
				{
					temp.push_back(1);  
				}
				else
				{
					temp.push_back(result[i-1][j-1]+result[i-1][j]);  
				}
			}
			result.push_back(temp); 
		}
		return result;   
	}
}  // namespace pascals_triangle
