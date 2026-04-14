class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramMap;

        for (const string& str : strs) {
            string s = str; 
            sort(s.begin(), s.end());

            anagramMap[s].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& pair : anagramMap) {
            result.push_back(pair.second);
        }

        return result;

    }
};
