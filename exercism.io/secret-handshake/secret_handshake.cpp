#include "secret_handshake.h"

namespace secret_handshake {
	map <int, int> m1 = { {16, 10000}, {8, 1000}, {4, 100}, {2, 10}, {1, 1} }; 
	map <int, string> m2 = {{1000, "jump"}, {100, "close your eyes"}, {10, "double blink"}, {1, "wink"} };
	vector <string> commands(int num)
	{
		bool swap = true; 
		vector <string> result;
		int i = 16;
		if (num < 16)
		{
			swap = false;
		}
		while (num > 0)  
		{
			if (num >= i)
			{
				num -= i;
				if (m2.find(m1[i]) != m2.end())
 				{
					result.push_back(m2[m1[i]]);
				}
			}
			i /= 2;  
		}
		if (!swap)
		{
			reverse(result.begin(), result.end()); 
		}
		return result; 
	}
}  // namespace secret_handshake
