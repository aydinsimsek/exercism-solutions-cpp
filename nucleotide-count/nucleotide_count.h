#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <string>
#include <map> 
using namespace std; 

namespace nucleotide_count {
	class counter
	{
	private: 
		string s; 
	public: 
		counter(string strand); 
		map <char, int> nucleotide_counts() const;  
		int count(char c) const;   
	};
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H