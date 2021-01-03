#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm> 
#include <stack>
using namespace std;

int main() {
    stack<int> s1;
    stack<int> s2;
    int query; 
    cin >> query;
    for(int i = 0; i < query; i++)
    {
        int type;
        cin >> type;
        switch(type)
        {
            case 1: 
                int x; 
                cin >> x;
                s1.push(x); 
                break;
            case 2:
                if(s2.empty())
                {
                    while(!s1.empty())
                    {
                        s2.push(s1.top());
                        s1.pop();
                    }
                }
                if(!s2.empty())
                {
                    s2.pop();
                }
                break;
            case 3:
                if(s2.empty())
                {
                    while(!s1.empty())
                    {
                        s2.push(s1.top());
                        s1.pop();
                    }
                }
                cout << s2.top() << endl;
                break;      
        }
    }
    return 0;
}
