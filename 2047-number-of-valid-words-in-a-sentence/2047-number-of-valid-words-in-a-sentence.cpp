
class Solution {
public:
    int countValidWords(string sentence) {
        int count = 0;
        int n = sentence.size();
        int start = 0;

        for (int i = 0; i <= n;i++) {
            if (i == n || sentence[i] == ' ') {
                if (start < i) {
                    bool valid = true;
                    int hyphen = 0, punct = 0;

                    for (int j = start; j < i; j++) {
                        char c = sentence[j];

                        if (isdigit(c)) {
                            valid = false;
                            break;
                        }

                        if (c == '-') {
                            hyphen++;

                            if (hyphen > 1 || j == start ||
                                j == i - 1 ||
                                !islower(sentence[j - 1]) ||
                                !islower(sentence[j + 1])) {
                                valid = false;
                                break;
                            }
                        }

                        if (c == '!' || c == '.' || c == ',') {
                            punct++;

                            if (punct > 1 || j != i - 1) {
                                valid = false;
                                break;
                            }
                        }
                    }

                    if (valid)
                        count++;
                }

                start = i + 1;
            }
        }

        return count;
    }
};
