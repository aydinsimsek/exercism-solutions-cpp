#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>
#include <cstdlib>  
#include <ctime>
using namespace std; 

namespace robot_name {
	class robot
	{
	private: 
		string result;  
	public:
		robot(); 
		string set_name(); 
		string name() const;   
		void reset(); 
	};
}  // namespace robot_name

#endif // ROBOT_NAME_H