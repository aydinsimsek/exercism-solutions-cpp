#if !defined(ETL_H)
#define ETL_H

#include <map>
#include <string> 
#include <vector> 
using namespace std; 

namespace etl {
	map <char, int> transform(map <int, vector<char>> m);   
}  // namespace etl

#endif // ETL_H