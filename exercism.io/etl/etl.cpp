#include "etl.h"

namespace etl {
	map <char, int> transform(map <int, vector<char>> m) 
	{
		map <char, int> temp;
		for (int i = 0; i <= 10; i++)
		{
			if (m.find(i) != m.end())   
			{
				for (size_t j = 0; j < m[i].size(); j++) 
				{
					m[i][j] = tolower(m[i][j]); 
					temp.insert(pair <char, int>(m[i][j], i));  
 				}
			}
		}
		return temp; 
	}
}  // namespace etl
