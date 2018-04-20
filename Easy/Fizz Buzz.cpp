class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> Res;
        for (int i = 1;i <= n;i++) {
            if (i % 3 == 0)
                if (i % 5 == 0)
                    Res.push_back("FizzBuzz");
                else Res.push_back("Fizz");
            else if (i % 5 == 0)
                Res.push_back("Buzz");
            else Res.push_back(to_string(i));
        }
        return Res;
    }
}; 