class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window_set;
        int left = 0;
        int max_len = 0;

        for (int right = 0; right < s.size(); ++right) {
            char current_char = s[right];

            while (window_set.count(current_char)) {
                window_set.erase(s[left]);
                left++;
            }

            window_set.insert(current_char);

            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};
