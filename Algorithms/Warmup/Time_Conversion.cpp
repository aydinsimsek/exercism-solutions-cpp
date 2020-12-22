#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    if(s[s.length()-2] == 'A')
    {
        if(s.substr(0, 2) == "12")
        {
            s[0] = '0';
            s[1] = '0';
        }
        s.erase(s.length()-2, 2);
        return s;
    }
    else
    {
        if(s.substr(0, 2) != "12")  
        {
        s[0] += 1; 
        s[1] += 2;   
        }  
        s.erase(s.length()-2, 2); 
        return s;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
