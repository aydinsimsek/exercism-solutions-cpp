#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H

#include <string>
#include <algorithm>
using namespace std; 

namespace atbash_cipher {
	string encode(string e); 
	string decode(string d);  
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H