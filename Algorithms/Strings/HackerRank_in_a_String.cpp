#include <bits/stdc++.h>

using namespace std;

string hackerrankInString(string s) {
    string sub = "hackerrank";
    int j = 0;
    for(int i = 0; i < s.length() && j < sub.length(); i++)
    {
        if(sub[j] == s[i])
        {
            j++;
        }    
    }
    if(j == sub.length())
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
