#include <bits/stdc++.h>

using namespace std;

string caesarCipher(string s, int k) {
    string result = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    reverse(alphabet.begin(), alphabet.begin()+k%26);
    reverse(alphabet.begin()+k%26, alphabet.end());
    reverse(alphabet.begin(), alphabet.end());
    for(int i = 0; i < s.length(); i++)
    {
        if(97 <= int(s[i]) && 122 >= int(s[i]))
        {
            result += alphabet[int(s[i])-97]; 
        }
        else if(65 <= int(s[i]) && 90 >= int(s[i]))
        {
            result += toupper(alphabet[int(s[i])-65]);
        }
        else 
        {
            result += s[i];
        }
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
