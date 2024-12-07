#include <bits/stdc++.h>

using namespace std;

string isValid(string s) {
    vector<int> vec;
    sort(s.begin(), s.end());
    int num = count(s.begin(), s.end(), s[0]);
    vec.push_back(num);
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] != s[i-1])
        {
            int num = count(s.begin(), s.end(), s[i]);
            vec.push_back(num);
        }
    }
    sort(vec.begin(), vec.end());
    int last = vec.size()-1;
    if(vec[0] == vec[last] || ((vec[last]- vec[0] == 1) && (vec[last] == vec[1] || vec[0] == vec[last-1])) || (vec[0] == 1 && (vec[1] == vec[last])))
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
