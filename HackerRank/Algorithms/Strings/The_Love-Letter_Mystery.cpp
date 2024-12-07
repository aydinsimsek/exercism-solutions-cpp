#include <bits/stdc++.h>

using namespace std;

int theLoveLetterMystery(string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != s[s.length()-1-i])
        {
            count += abs(s[i]-s[s.length()-1-i]);
            s[i] = s[s.length()-1-i];    
        }
    } 
    return count;
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

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
