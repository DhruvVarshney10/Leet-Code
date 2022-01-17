class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {

                temp.push(s[i]);
                cout << temp.top();
                continue;
            }
            if (temp.empty()) { return false; }

            if ((temp.top() == '(' && s[i] == ')') || (temp.top() == '[' && s[i] == ']') || (temp.top() == '{' && s[i] == '}')) {
                cout << s[i];
                temp.pop();
            }
            else { return false; }
            if (temp.empty() && i == s.length() - 1) { return true; }

        }
        return false;
    }
};
/*
Runtime: 7 ms, faster than 7.19% of C++ online submissions for Valid Parentheses.
Memory Usage: 6.4 MB, less than 9.73% of C++ online submissions for Valid Parentheses.
*/