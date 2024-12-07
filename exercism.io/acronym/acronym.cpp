#include "acronym.h"

namespace acronym {
	string acronym(string s) 
	{   
		string temp;
		int index;
		for(int i = 0; i < int(s.length()); i++)    
		{
			s[i] = toupper(s[i]);
			if (int(s[i]) == 32 || int(s[i]) == 45)  
			{
				index = i; 
			}
			if (i == 0 || i == index+1) 
			{
				temp.push_back(s[i]); 
			}
		}
		return temp; 
	}
}  // namespace acronym
