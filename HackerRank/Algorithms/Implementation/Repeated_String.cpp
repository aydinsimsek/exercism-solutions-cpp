#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    long num;
    if(n > long(s.size()))
    {
        num = count(s.begin(), s.end(), 'a'); 
        num *= n / long(s.size());
        int remain = (n-long(s.size())) % long(s.size());
        if(remain != 0)
        {
            for(int i = 0; i < remain; i++)
            {
                if(s[i] == 'a')
                num++;
            } 
        }
    }
    else
    {
        num = count(s.begin(), s.begin()+n, 'a');
    }
    return num;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
