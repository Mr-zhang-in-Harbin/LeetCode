class Solution {
public:
    stack<char> op;
    stack<int> num;
    int Res = 0;
    int temp = 0;
    int mode = 0;//0 for not found numbers
    int calculate(string s) {
        for (int i = 0;i < s.length();i++) {
            if (s[i] >= '0' && s[i] <= '9')
                temp = temp * 10 + s[i] - '0',mode = 1;
            else {
                if (mode == 1) {
                    num.push(temp);
                    if (!op.empty() && op.top() != '(') {
                        int a = num.top();
                        num.pop();
                        int b = num.top();
                        num.pop();
                        if (op.top() == '+')
                            num.push(a + b);
                        else num.push(b - a);
                        op.pop();
                    }
                    temp = 0,mode = 0;
                }
                if (s[i] == ' ')
                    ;
                else if (s[i] == ')') {
                    while (op.top() != '('){
                        int a = num.top();
                        num.pop();
                        int b = num.top();
                        num.pop();
                        if (op.top() == '+')
                            num.push(a + b);
                        else num.push(b -a);
                        op.pop();
                    }
                    op.pop();
                    if (!op.empty() && op.top() != '(') {
                        int a = num.top();
                        num.pop();
                        int b = num.top();
                        num.pop();
                        if (op.top() == '+')
                            num.push(a + b);
                        else num.push(b - a);
                        op.pop();
                    }
                }
                else op.push(s[i]);
                
            }
            //if (!op.empty() && !num.empty())
                //cout<<op.top()<<" "<<num.top()<<endl;
        }
        
        if (mode == 1)
            num.push(temp);
        
       // cout<<num.size()<<" --- "<<op.size()<<endl;
        
        while (!op.empty() && !num.empty()) {
            int a = num.top();
            num.pop();
            int b = num.top();
            num.pop();
            if (op.top() == '+')
                num.push(a + b);
            else num.push(b -a);
                op.pop();
            // if (!op.empty() && !num.empty())
                // cout<<op.top()<<" "<<num.top()<<endl;
        }
        
        Res = num.top();
        
        return Res;
    }
};