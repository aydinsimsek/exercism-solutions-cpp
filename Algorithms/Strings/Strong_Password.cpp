#include <bits/stdc++.h>

using namespace std;

int minimumNumber(int n, string password) {
    bool digit = false;
    bool lower = false; 
    bool upper = false; 
    bool special = false; 
    for(int i = 0; i < password.length(); i++)
    {
        if(digit && lower && upper && special)
        {
            if(password.length() >= 6) return 0;
            else return 6-password.length();
        }
        if(isalnum(password[i]))
        {
            if(97 <= int(password[i]) && 122 >= int(password[i])) 
            {
                lower = true;     
            }
            else if(65 <= int(password[i]) && 90 >= int(password[i])) 
            {
                upper = true;     
            }
            else 
            {
                digit = true;
            }
        }
        else
        {
            special = true;
        }
    }
    int count = 0; 
    if(!digit) count++;
    if(!upper) count++;
    if(!lower) count++;
    if(!special) count++;
    if(count + password.length() >= 6) return count;
    else return 6-password.length();        
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
