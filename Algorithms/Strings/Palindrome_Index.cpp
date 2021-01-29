#include <bits/stdc++.h>

using namespace std;

int palindromeIndex(string s) {
    for(int i = 0; i < s.length(); i++)
    {
        int j = s.length()-1-i;
        if(s[i] != s[j])
        {
            int index1 = i; 
            int index2 = j; 
            bool first = true; 
            bool second = true; 
            while(i < j)
            {
                if(s[i+1] == s[j])
                {
                    i++;
                    j--;    
                }
                else 
                {
                    first = false; 
                    break;
                }
            }
            if(first) return index1; 
            i = index1; 
            j = index2;
            while(i < j)
            {
                if(s[j-1] == s[i])
                {
                    i++;
                    j--;
                }
                else 
                {
                    second = false; 
                    break;
                }
            }
            if(second) return index2; 
            else return -1;
        }
    }
    return -1;
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

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
