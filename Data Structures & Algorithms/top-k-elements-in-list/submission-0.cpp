class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> countMap;
        for (int num : nums) {
            countMap[num]++;
        }

        int n = nums.size();
        vector<vector<int>> buckets(n + 1);

        for (auto& pair : countMap) {
            buckets[pair.second].push_back(pair.first);
        }

        vector<int> result;

        for (int i = n; i >= 0; i--) {
            if (!buckets[i].empty()) {
                for (auto& num : buckets[i]) {
                    result.push_back(num);
                    k--;
                }
                if (k <= 0) {
                    return result;
                }
            }
        }

    }
};
