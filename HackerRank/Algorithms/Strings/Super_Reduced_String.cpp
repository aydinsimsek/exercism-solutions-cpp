#include <bits/stdc++.h>

using namespace std;

string superReducedString(string s) {
    bool done = false;
    int len = s.length();
    while(!done)
    {
        int i = 0; 
        done = true;
        while(i < len)
        {
            if(s[i] == s[i+1])
            {
                s.erase(i, 2); 
                len -= 2;
                done = false;
            }
            i++;
        }
    }
    if(s.length() == 0)
    {
        return "Empty String";
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
