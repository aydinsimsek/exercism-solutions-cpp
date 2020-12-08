#include "allergies.h"

map <int, string> m = { {1, "eggs"}, {2, "peanuts"}, {4, "shellfish"}, {8, "strawberries"}, {16, "tomatoes"}, {32, "chocolate"}, {64, "pollen"}, {128, "cats"} }; 

namespace allergies {
	allergy_test::allergy_test(int score)
	{
		for (int i = 128; i >= 1; i /= 2)
		{
			while (score >= i) 
			{
				score -= i; 
				item.insert(m[i]); 
			}
		}
	}
	bool allergy_test::is_allergic_to(string s)
	{ 
		if (item.find(s) != item.end())
		{
			return true; 
		}
		else
		{
			return false; 
		}
	}
	unordered_set <string> allergy_test::get_allergies()
	{
		return item; 
	}
}  // namespace allergies
