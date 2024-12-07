#include <bits/stdc++.h>

using namespace std;

int maximizingXor(int l, int r) {
    int max = 0; 
    for(int i = l; i <= r; i++)
    {
        for(int j = l; j <= r; j++)
        {
            if(max < (i ^ j))
            {
                max = i ^ j;
            }
        }
    }
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);

    fout << result << "\n";

    fout.close();

    return 0;
}
