#include <bits/stdc++.h>

using namespace std;

string timeInWords(int h, int m) {
    vector<string> num = {
        "zero", 
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine"
    };
    if(m <= 30)
    {
        if(m == 0)
        {
            return num[h] + " o' clock";
        }
        else if(m == 1)
        {
            return num[m] + " minute past " + num[h];     
        }
        else if(m == 15)
        {
            return "quarter past " + num[h];
        }
        else if(m == 30)
        {
            return "half past " + num[h];
        }
        return num[m] + " minutes past " + num[h];    
    }
    else
    { 
        if(m == 45)
        {
            return "quarter to " + num[h+1];
        }
        else if(m == 59)
        {
            return num[60-m] + " minute to " + num[h+1];
        }
        return num[60-m] + " minutes to " + num[h+1];
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
