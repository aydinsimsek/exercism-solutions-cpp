#include "protein_translation.h" 

namespace protein_translation {
	vector <string> proteins(string codon)
	{
		vector <string> s;   
		for (int i = 0; i < codon.length(); i = i + 3)
		{	
			string c; 
			c.push_back(codon[i]);
			c.push_back(codon[i + 1]);
			c.push_back(codon[i + 2]);
			if (c == "AUG")
			{
				s.push_back("Methionine");
			}
			else if (c == "UUU" || c == "UUC")
			{
				s.push_back("Phenylalanine");
			}
			else if (c == "UUA" || c == "UUG")
			{
				s.push_back("Leucine");
			}
			else if (c == "UCU" || c == "UCC" || c == "UCA" || c == "UCG") 
			{
				s.push_back("Serine");
			}
			else if (c == "UAU" || c == "UAC")
			{
				s.push_back("Tyrosine");
			}
			else if (c == "UGU" || c == "UGC")
			{
				s.push_back("Cysteine");
			}
			else if (c == "UGG")
			{
				s.push_back("Tryptophan");
 			}
			else if (c == "UAA" || c == "UAG" || c == "UGA")
			{
				return s;  
			}
		}
		return s;   
	}
}  // namespace protein_translation
