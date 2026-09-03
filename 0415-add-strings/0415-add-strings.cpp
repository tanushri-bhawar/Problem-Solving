class Solution {
public:
    string addStrings(string num1, string num2) {
        string s = "";
        int carry = 0;

        int i = num1.length() - 1;
        int j = num2.length() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int a1 = (i >= 0) ? num1[i] - '0' : 0;
            int a2 = (j >= 0) ? num2[j] - '0' : 0;

            int ans = a1 + a2 + carry;

            s += to_string(ans % 10);
            carry = ans / 10;

            i--;
            j--;
        }

        reverse(s.begin(), s.end());

        return s;
    }
};