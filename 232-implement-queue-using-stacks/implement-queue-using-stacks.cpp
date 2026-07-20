class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;

    MyQueue() {
    }

    void transfer() {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if(s2.empty())
            transfer();

        int ans = s2.top();
        s2.pop();

        return ans;
    }

    int peek() {
        if(s2.empty())
            transfer();

        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};