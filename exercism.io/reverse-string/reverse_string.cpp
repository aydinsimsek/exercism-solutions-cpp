#include "reverse_string.h"

namespace reverse_string {
	string reverse_string(string s)
	{
		char temp; 
		for (int i = 0; i < s.length() / 2; i++)
		{
			temp = s[s.length() - 1 - i]; 
			s[s.length() - 1 - i] = s[i]; 
			s[i] = temp; 
		}
		return s; 
	}
}  // namespace reverse_string
