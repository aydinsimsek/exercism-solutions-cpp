#include "pangram.h"

namespace pangram {
	bool is_pangram(string sentence)
	{
		string s = "abcdefghijklmnopqrstuvwxyz"; 
		for (int i = 0; i < sentence.length(); i++)
		{
			sentence[i] = tolower(sentence[i]); 
			size_t j = s.find(sentence[i]);      
			if (j != string::npos) 
			{
				s.erase(j,1);   
			}
		} 
		if (s.length() == 0) 
		{
			return true; 
		}
		else
		{
			return false;    
		}
	}
}  // namespace pangram
