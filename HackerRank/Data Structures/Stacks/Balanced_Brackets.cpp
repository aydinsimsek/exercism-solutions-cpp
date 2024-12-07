#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s){
    stack<char> stk;
    map <char, char> m = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
    for(auto i = 0; i < s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {    
            stk.push(m.at(s[i]));
        }
        else 
        {
            if(stk.empty() || s[i] != stk.top())
            {
                return "NO";
            }
            else 
            {
                stk.pop();
            }
        }
    }
    if(!stk.empty())
    {
        return "NO";
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
