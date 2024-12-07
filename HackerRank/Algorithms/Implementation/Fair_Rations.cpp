#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void fairRations(vector<int> B) {
    int count = 0;
    int i = 0;
    int len = B.size();
    while(i < len)
    {
        int numOdd = 0; 
        for(int subj = 0; subj < len; subj++)
        {
            if(B[subj] % 2 != 0)
            {
                numOdd++;
            }
        }    
        if(numOdd % 2 != 0)
        {
            cout << "NO" << endl; 
            break;
        }
        if(numOdd == 0)
        {
            cout << count << endl;
            break;
        }
        if(B[i] % 2 != 0)
        {
            B[i]++;
            B[i+1]++;
            count += 2;
        }
        i++;
    }
}

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string B_temp_temp;
    getline(cin, B_temp_temp);

    vector<string> B_temp = split_string(B_temp_temp);

    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        int B_item = stoi(B_temp[i]);

        B[i] = B_item;
    }

    fairRations(B);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
