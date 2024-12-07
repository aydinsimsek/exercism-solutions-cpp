#include <bits/stdc++.h>

using namespace std;

string counterGame(long n) {
    int count = 0;
    while(n != 1)
    {
        float f = log2(n);
        if(f == (int)f) 
        {
            n /= 2;    
        }
        else 
        {
            n -= pow(2, (int)f);
        }
        count++;
    }
    if(count % 2 == 0)
    {
        return "Richard";
    }
    return "Louise";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = counterGame(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
