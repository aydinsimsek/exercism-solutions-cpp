#include "matching_brackets.h"

namespace matching_brackets {
	bool check(string s)
	{
		vector <char> v;    
		for (size_t i = 0; i < s.length(); i++)
		{
			if (s[i] == '{' || s[i] == '(' || s[i] == '[')
			{
				v.insert(v.begin(), s[i]); 
			}
			else if (s[i] == '}' && (v.size() == 0 || v[0] != '{')) 
			{
				return false;
			}
			else if (s[i] == ')' && (v.size() == 0 || v[0] != '('))
			{
				return false; 
			}
			else if (s[i] == ']' && (v.size() == 0 || v[0] != '['))
			{
				return false; 
			}
			else if ((s[i] == '}' && v[0] == '{') || (s[i] == ')' && v[0] == '(') || (s[i] == ']' && v[0] == '['))
			{
				v.erase(v.begin());
			}
		}
		if (v.size() != 0)
		{
			return false; 
		}
		return true;   
	}
}  // namespace matching_brackets