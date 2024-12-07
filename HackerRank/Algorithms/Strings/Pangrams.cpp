#include <bits/stdc++.h>

using namespace std;

string pangrams(string s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    for(int i = 0; i < s.length(); i++)
    {
        if(65 <= int(s[i]) && 90 >= int(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    if(s.length() == 26) return "pangram";
    else return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
