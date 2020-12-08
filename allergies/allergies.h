#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <unordered_set> 
#include <map> 
#include <string>
using namespace std; 

namespace allergies {
	class allergy_test
	{
	private:
		unordered_set <string> item;  
	public: 
		allergy_test(int score); 
		bool is_allergic_to(string s); 
		unordered_set <string> get_allergies(); 
	};
}  // namespace allergies

#endif // ALLERGIES_H