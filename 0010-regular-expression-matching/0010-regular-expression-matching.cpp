
class Solution {
public:
    bool isMatch(string s, string p) {
        return solve(s, p, 0, 0);
    }

    bool solve(string& s, string& p, int i, int j) {
        // Pattern is exhausted
        if (j == p.size()) {
            return i == s.size();
        }

        // Check whether current characters match
        bool firstMatch = (i < s.size() &&
                          (s[i] == p[j] || p[j] == '.'));

        // Check whether the next pattern character is '*'
        if (j + 1 < p.size() && p[j + 1] == '*') {
            // Option 1: '*' matches zero occurrences
            // Option 2: '*' matches one or more occurrences
            return solve(s, p, i, j + 2) ||
                   (firstMatch && solve(s, p, i + 1, j));
        }

        // No '*': both current characters must match
        return firstMatch && solve(s, p, i + 1, j + 1);
    }
};
