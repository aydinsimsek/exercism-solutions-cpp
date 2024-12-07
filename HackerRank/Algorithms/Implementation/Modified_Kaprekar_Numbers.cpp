#include <bits/stdc++.h>

using namespace std;

void kaprekarNumbers(int p, int q) {
    vector<int> result;
    for(int i = p; i <= q; i++)
    {
        int digit = 0; 
        int temp = i; 
        long j = pow(i, 2);
        while(temp > 0)
        {
            temp /= 10; 
            digit++;
        }
        long k = pow(10, digit);
        if(i == j / k + j % k)
        {
            result.push_back(i);
        }
    }
    if(result.size() == 0)
    {
        cout << "INVALID RANGE"; 
    }
    else 
    {
        for(auto i : result)
        {
            cout << i << " "; 
        }
    }
}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
