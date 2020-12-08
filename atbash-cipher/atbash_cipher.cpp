#include "atbash_cipher.h"

namespace atbash_cipher {
	string plain = "abcdefghijklmnopqrstuvwxyz"; 
	string cipher = "zyxwvutsrqponmlkjihgfedcba"; 
	string atbash_cipher::encode(string e)
	{
		string temp = e;
		size_t len = temp.length(); 
		size_t i = 0; 
		while (i < len)
		{
			if (!isalnum(temp[i]))
			{
				temp.erase(i, 1); 
				len--; 
			}
			else
			{
				i++; 
			}
		}
		for (size_t i = 0; i < temp.length(); i++) 
		{
			temp[i] = tolower(temp[i]);
			size_t s = plain.find(temp[i]);  
			if (s != string::npos)
			{
				temp[i] = cipher[s];
			} 
		}
		for (size_t i = 5; i < temp.length(); i += 6) 
		{
			temp.insert(i, " ");
		}
		return temp;   
	}
	string atbash_cipher::decode(string d)
	{
		string temp = d;
		size_t len = temp.length();
		size_t i = 0;
		while (i < len)
		{
			if (temp[i] == ' ') 
			{
				temp.erase(i, 1);
				len--;
			}
			else
			{
				i++;
			}
		}
		for (size_t i = 0; i < temp.length(); i++)
		{  
			size_t s = cipher.find(temp[i]); 
			if (s != string::npos)
			{
				temp[i] = plain[s]; 
			}
		}
		return temp; 
	}
}  // namespace atbash_cipher
