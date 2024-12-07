#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    int count = 0;
    int temp = n;
    int digit;
    while(temp > 0)
    {
        digit = temp % 10; 
        temp /= 10;
        if(digit != 0 && n % digit == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
