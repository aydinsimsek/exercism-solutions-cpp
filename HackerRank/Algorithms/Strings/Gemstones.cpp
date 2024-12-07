#include <bits/stdc++.h>

using namespace std;

int gemstones(vector<string> arr) {
    int count = 0; 
    sort(arr[0].begin(), arr[0].end());
    arr[0].erase(unique(arr[0].begin(), arr[0].end()), arr[0].end());
    for(int i = 0; i < arr[0].length(); i++)
    {
        bool gemstone = true; 
        for(int j = 1; j < arr.size(); j++)
        {
            int index = arr[j].find(arr[0][i]);
            if(index == string::npos)
            {
                gemstone = false;
                break;   
            }
        }
        if(gemstone)
        {
            count++;
        }
    }
    return count;     
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
