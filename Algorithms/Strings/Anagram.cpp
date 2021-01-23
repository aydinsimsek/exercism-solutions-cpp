#include <bits/stdc++.h>

using namespace std;

int anagram(string s) {
    if(s.length() % 2 != 0)
    {
        return -1;
    }
    string s1 = s.substr(0, s.length()/2);
    string s2 = s.substr(s.length()/2, s.length());
    int len = s2.length();
    for(int i = 0; i < s1.length(); i++)
    {
        int index = s2.find(s1[i]);
        if(index != string::npos)
        {
            s2.erase(index, 1);
            len--;
        }    
    }
    return len; 
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

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
