#include <bits/stdc++.h>

using namespace std;

vector<int> stones(int n, int a, int b) {
    vector<int> result;
    int val;
    for(int i = 0; i < n; i++)
    {
        val = a * i + b * (n-1-i);
        result.push_back(val);   
    }
    sort(result.begin(), result.end());
    auto it = unique(result.begin(), result.end());
    result.resize(distance(result.begin(), it));  
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int a;
        cin >> a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int b;
        cin >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = stones(n, a, b);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}
