#include "hamming.h"
#include <stdexcept>
 
namespace hamming {
	int compute(string s1, string s2)
	{
		int count = 0; 
		if (s1.length() != s2.length())
		{
			throw domain_error("Error: Length of the strings are not equal!");     
		}
		else
		{
			for (int i = 0; i < s1.length(); i++)
			{
				if (s1[i] != s2[i])
				{
					count++;
				}
			}
		}
		return count; 
	}
}  // namespace hamming
