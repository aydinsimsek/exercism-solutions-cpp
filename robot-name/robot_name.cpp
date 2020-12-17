#include "robot_name.h"

namespace robot_name {
	robot::robot()
	{
		result = set_name(); 
	}
	string robot::set_name() 
	{
		string s; 
		char c;
		int r;
		for (int i = 0; i < 5; i++)
		{
			if (i < 2)
			{
				r = rand() % 26;
				c = 'A' + r;
			}
			else
			{
				r = rand() % 10;
				c = '0' + r;
			}
			s += c;
		}
		return s; 
	}
	string robot::name() const 
	{
		return result;   
	}
	void robot::reset()
	{
		result.clear();  
		result = set_name(); 
	}
}  // namespace robot_name
