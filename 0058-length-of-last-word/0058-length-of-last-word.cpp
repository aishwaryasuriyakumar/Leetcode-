class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // Step 1: Skip trailing spaces
        while (i >= 0 && s[i] == ' ')
            i--;

        // Step 2: Count the last word's length
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};
