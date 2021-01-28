#include <bits/stdc++.h>

using namespace std;

int beautifulBinaryString(string b) {
    int step = 0;
    while(b.find("010") != string::npos)
    {
        b[b.find("010")+2] = '1';
        step++;
    }
    return step;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string b;
    getline(cin, b);

    int result = beautifulBinaryString(b);

    fout << result << "\n";

    fout.close();

    return 0;
}
