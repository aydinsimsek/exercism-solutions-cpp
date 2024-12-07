#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    stack<int> track;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int q; 
        cin >> q; 
        switch(q)
        {
        case 1: 
            int num;
            cin >> num; 
            if(track.empty() || num > track.top())
            {
                track.push(num); 
            }
            else
            {
                track.push(track.top());
            }
            s.push(num);
            break;
        case 2: 
            if(!s.empty())
            {
                s.pop();
                track.pop();
            }
            break;
        case 3: 
            cout << track.top() << endl;
            break;
        }  
    }
    return 0;
}
