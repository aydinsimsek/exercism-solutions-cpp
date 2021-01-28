#include <bits/stdc++.h>

using namespace std;

int stringConstruction(string s) {
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    return s.length();
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

        int result = stringConstruction(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
