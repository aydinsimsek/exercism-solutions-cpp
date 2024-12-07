#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) {
    if((n % 2 != 0 && p == n-1) || p == 1)
    {
        return 0;
    }
    else if(n % 2 == 0 && p == n-1)
    {
        return 1;
    } 
    return n-p <= p-1 ? (n-p)/2 : p/2; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
