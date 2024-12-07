#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <map>
#include <vector>
#include <string>
using namespace std; 

namespace grade_school {
	class school
	{
	private: 
		map <int, vector<string>> m;   
	public:
		void add(string name, int grd);   
		map <int, vector<string>> roster() const;   
		vector<string> grade(int g) const; 
	};
}  // namespace grade_school

#endif // GRADE_SCHOOL_H