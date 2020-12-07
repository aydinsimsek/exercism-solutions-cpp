#include "rna_transcription.h"

namespace rna_transcription {
	char to_rna(char nucleotide)
	{
		switch(nucleotide)
		{
		case('A'): 
			return 'U';
		case('C'):
			return 'G';
		case('G'):
			return 'C';
		case('T'):
			return 'A'; 
		}
	}
	string to_rna(string strand)
	{
		for (int i = 0; i < strand.length(); i++) 
		{
			switch(strand[i])
			{
			case('A'): 
				strand[i] = 'U'; 
				break;
			case('C'):
				strand[i] = 'G';
				break;
			case('G'):
				strand[i] = 'C';
				break;
			case('T'):
				strand[i] = 'A'; 
				break;
			}
		}
		return strand; 
	}
}  // namespace rna_transcription
