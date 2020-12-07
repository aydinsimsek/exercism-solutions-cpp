#include "binary_search.h"

#include <algorithm>
#include <stdexcept>
using namespace std; 

namespace binary_search {
	int find(vector <int> v, int key) 
	{
		sort(v.begin(), v.end());
		int first = 0; 
		int last = v.size() - 1; 
		while (first <= last)   
 		{ 
			if (v[(first + last) / 2] == key)
			{
				return (first + last) / 2;
			}
			else if (key < v[(first + last) / 2])
			{
				last = (first + last) / 2 - 1;
			}
			else if (key > v[(first + last) / 2])
			{
				first = (first + last) / 2 + 1;
			}
		}
		throw domain_error("Key is not found"); 
	}
}  // namespace binary_search
