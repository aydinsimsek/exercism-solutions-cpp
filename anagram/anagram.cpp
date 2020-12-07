#include "anagram.h"

namespace anagram {
	anagram::anagram(string s) 
	{
		word = s; 
	}
	vector <string> anagram::matches(vector <string> v) 
	{
		size_t w; 
		for (int i = 0; i < v.size(); i++)
		{
			if (word.length() == v[i].length())
			{
				temp1 = v[i]; 
				for (int j = 0; j < v[i].length(); j++)
				{
					v[i][j] = tolower(v[i][j]);
					word[j] = tolower(word[j]);
				}
				temp2= v[i];
				for (int j = 0; j < v[i].length(); j++)
				{
					w = temp2.find(word[j]);
					if (w == string::npos || word == v[i])
					{
						break; 
					}
					else 
					{
						temp2.erase(w, 1);
					}
				}
				if (temp2.length() == 0) 
				{
					vec.push_back(temp1); 
				}
			}
		}
		return vec; 
	}
}  // namespace anagram
