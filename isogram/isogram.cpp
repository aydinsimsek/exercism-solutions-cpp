#include "isogram.h"

namespace isogram {
	bool is_isogram(string s)
	{
	for(int i = 0; i < s.length()-1; i++) 
	{
		for(int j = i+1; j < s.length(); j++)
		{
			s[i] = tolower(s[i]);
			s[j] = tolower(s[j]); 
			if(int(s[i]) >= 97 && int(s[i]) <= 122) 
			{
				if(int(s[i]) == int(s[j]))
				{
					return false;
				}
			} 
		} 
	}
	return true; 
	}
}  // namespace isogram
