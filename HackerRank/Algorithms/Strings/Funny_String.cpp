#include <bits/stdc++.h>

using namespace std;

string funnyString(string s) {
    bool funny = true; 
    vector<int> vec; 
    for(int i = 0; i < s.length()-1; i++)
    {
        vec.push_back(abs(int(s[i])-int(s[i+1]))); 
        if(vec[i] != abs(int(s[s.length()-1-i])-int(s[s.length()-2-i]))) 
        {
            funny = false; 
            break;
        } 
    }
    if(funny) return "Funny";
    else return "Not Funny";
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

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
