#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2) {
    string result = "NO"; 
    for(int i = 0; i < s1.length(); i++)
    {
        int index = s2.find(s1[i]);
        if(index != string::npos)
        {
            result = "YES";
            break;    
        }
    }
    return result; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
