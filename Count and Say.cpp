class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        while (--n)
        {
            string temp = "";
            for (int i = 0; i < result.length(); i++)
            {               
                int count = 1;
                while (i + 1 < result.length() && result[i] == result[i+1])
                {
                    count++;
                    i++;
                }
                temp += to_string(count) + result[i];           
            }
            result = temp;
        }
        return result;
    }
};
