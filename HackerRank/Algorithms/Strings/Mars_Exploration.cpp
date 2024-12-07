#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s) {
    string temp = "";
    int numMessage = s.length()/3;
    int count = 0;
    for(int i = 0; i < numMessage; i++)
    {
        temp += "SOS";
    }
    for(int i = 0; i < temp.length(); i++)
    {
        if(temp[i] != s[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
