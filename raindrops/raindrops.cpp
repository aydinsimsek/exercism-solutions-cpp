#include "raindrops.h"

namespace raindrops {
	string convert(int num)
	{
		string s; 
		if (num % 3 == 0)
		{
			s.append("Pling");  
		}
		if (num % 5 == 0)
		{
			s.append("Plang");
		}
		if (num % 7 == 0)
		{
			s.append("Plong");
		}
		if (num % 7 != 0 && num % 5 != 0 && num % 3 != 0)
		{
			s = to_string(num); 
		}
		return s; 
	}
}  // namespace raindrops
