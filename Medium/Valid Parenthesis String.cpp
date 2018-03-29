class Solution {
public:
    bool checkValidString(string s) {
        stack<int> left, star;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '*')
                star.push(i);
            else if (s[i] == '(')
                left.push(i);
            else
            {
                if (left.empty() == false)
                    left.pop();
                else if (star.empty() == false)
                    star.pop();
                else
                    return false;
            }
        }

        while (left.empty() == false && star.empty() == false)
        {
            if (star.top() < left.top())
                return false;
            else
            {
                left.pop();
                star.pop();
            }
        }
        return left.empty() == true;
    }
};