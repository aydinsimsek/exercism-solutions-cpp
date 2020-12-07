#include "nucleotide_count.h"

#include <stdexcept>
using namespace std; 

namespace nucleotide_count {
	map <char, int> counter::nucleotide_counts() const 
	{
		map <char, int> m; 
		int countA = 0; 
		int countC = 0; 
		int countG = 0;
		int countT = 0; 
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'A')
			{
				countA++; 
			}
			else if (s[i] == 'C')
			{
				countC++; 
			}
			else if (s[i] == 'G')
			{
				countG++;
			}
			else if (s[i] == 'T')
			{
				countT++; 
			}
		}
		m['A'] = countA;
		m['C'] = countC;
		m['G'] = countG;
		m['T'] = countT; 
		return m; 
	}
	int counter::count(char c) const
	{
		if (c != 'A' && c != 'C' && c != 'G' && c != 'T')
		{
			throw invalid_argument("Error: Nucleotide types are A,C,G,T"); 
		}
		int count = 0; 
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == c)
			{
				count++; 
			}
		}
		return count; 
	}
	counter::counter(string strand)
	{
		s = strand;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] != 'A' && s[i] != 'C' && s[i] != 'G' && s[i] != 'T') 
			{
				throw invalid_argument("Error: Nucleotide types are A,C,G,T");
			}
		}
	}
}  // namespace nucleotide_count
