#include <stack>

class MinStack
{
    private:
        std::stack<int> mainStack;
        std::stack<int> minStack;
    public:
        MinStack() {}
        
        void push(int val)
        {
            if(minStack.empty() || minStack.top() >= val)
            {
                minStack.push(val);
            }
            mainStack.push(val);
        }
        
        void pop()
        {
            if(!minStack.empty() && minStack.top() == mainStack.top())
            {
                minStack.pop();
            }
            mainStack.pop();
        }
        
        int top()
        {
            return mainStack.top();
        }
        
        int getMin()
        {
            return minStack.top();   
        }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */