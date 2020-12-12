#if !defined(SERIES_H)
#define SERIES_H

#include <string>
#include <vector>
#include <stdexcept>
using namespace std; 

namespace series {
	vector <int> digits(string s); 
	vector <vector <int>> slice(string s, int n); 
}  // namespace series

#endif // SERIES_H