#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <string>
#include <vector> 
using namespace std; 

namespace anagram {
	class anagram
	{
	private:
		string word; 
		vector <string> vec;   
		string temp1, temp2;  
	public: 
		anagram(string s);
		vector <string> matches(vector <string> v);   
	};
}  // namespace anagram

#endif // ANAGRAM_H