#include "grade_school.h"

#include <algorithm>
#include <stdexcept> 

namespace grade_school {
	void school::add(string name, int grd)
	{
		m[grd].push_back(name); 
		sort(m[grd].begin(), m[grd].end());  
	}
	map <int, vector<string>> school::roster() const  
	{
		return m; 
	}
	vector<string> school::grade(int g) const
	{	
		vector <string> empty = {}; 
		try 
		{
			return m.at(g);  
		}
		catch (out_of_range)
		{
			return empty;   
		}
	}
}  // namespace grade_school
