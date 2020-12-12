#include "series.h"

namespace series {
	vector <int> digits(string s)
	{
		vector <int> temp; 
		for (int i = 0; i < s.length(); i++)
		{
			temp.push_back(s[i] - '0');  
		}
		return temp; 
	}
	vector <vector <int>> slice(string s, int n)
	{
		if (n > s.length())
		{
			throw domain_error("Not enough digits to slice");  
		}
		vector <vector <int>> temp;
		string sub; 
		for (int j = 0; j <= s.length() - n; j++) 
		{
			int k = j; 
			int t = j + n - 1; 
			while (k <= t)
			{
				sub += s[k];
				k++; 
			}
			temp.push_back(digits(sub));
			sub = ""; 
		}
		return temp;  
	}
}  // namespace series