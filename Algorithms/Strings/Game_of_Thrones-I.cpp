#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s) {
    sort(s.begin(), s.end());
    bool done = false; 
    int count = 1; 
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
        else 
        {
            if(count % 2 != 0)
            {
                if(s.length() % 2 == 0 || done)
                {
                    return "NO";
                } 
                else
                {
                    done = true;
                }
            } 
            else 
            {
                count = 1;
            }
        }
    }    
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
