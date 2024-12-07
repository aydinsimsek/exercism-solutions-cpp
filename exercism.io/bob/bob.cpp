#include "bob.h"

namespace bob {
	string hey(string s)
	{
		bool nothing = true;  
		bool capital = true; 
		bool no_letter = true;   
		string lower = "abcdefghijklmnopqrstuvwxyz"; 
		string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
		if (s.length() == 0) 
		{
			return "Fine. Be that way!";    
		}
		for (int i = 0; i < s.length() - 1; i++)
		{
			size_t low = lower.find(s[i]);
			size_t up = upper.find(s[i]);
			if (low != string::npos || up != string::npos)
			{
				no_letter = false; 
			}
		}
		for (int i = s.length() - 1; i >= 0; i--)
		{
			if (s[i] != ' ')
			{
				if (s[i] != '?')
				{
					break; 
				}
				for (int j = i; j >= 0; j--)
				{
					size_t low = lower.find(s[j]); 
					size_t up = upper.find(s[j]); 
					if (low != string::npos || no_letter)   
					{
						return "Sure.";
					}
				}
				return "Calm down, I know what I'm doing!";
			}
		}
		for (int i = 0; i < s.length(); i++) 
		{ 
			if (int(s[i]) >= 33 && int(s[i]) <= 127)  
			{
				nothing = false; 
				size_t low = lower.find(s[i]);
				size_t up = upper.find(s[i]);
				if (up == string::npos && low != string::npos) 
				{
					capital = false;
				}
			}
			if (int(s[i]) == 92)
			{
				nothing = true; 
			}
		}
		if (nothing)
		{
			return "Fine. Be that way!";
		}
		if (capital && !no_letter) 
		{
			return "Whoa, chill out!"; 
		}
		return "Whatever."; 
	}
}  // namespace bob
