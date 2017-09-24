class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.length() - 1, m = b.length() - 1;
        int p = 0;
        string result = "";
        while (n >= 0 || m >= 0)
        {
            int anum = 0,bnum = 0;
            if (n >= 0) anum = a[n] == '0' ? 0 : 1;
            if (m >= 0) bnum = b[m] == '0' ? 0 : 1;
            anum+=bnum + p;
            p=0;
            if (anum >= 2)
                anum -= 2,p=1;
            result.insert(0,to_string(anum));
            m--,n--;
        }
        if (p == 1)
            result.insert(0,to_string(1));
        return result;
    }
};