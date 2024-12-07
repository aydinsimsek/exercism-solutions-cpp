#include <bits/stdc++.h>

using namespace std;

int makingAnagrams(string s1, string s2) {
    int len2 = s2.length();
    int count = 0; 
    for(int i = 0; i < s1.length(); i++)
    {
        int index = s2.find(s1[i]);
        if(index != string::npos)
        {
            s2.erase(index, 1); 
            count++;
        }
    }
    return s1.length()+len2-2*count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
