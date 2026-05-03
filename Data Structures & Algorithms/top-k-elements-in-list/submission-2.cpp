class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //first -> value, second -> frequency
        map<int, int> counts;
        for (int num : nums) {
            ++counts[num];
        }

        vector<vector<int>> freqs(nums.size() + 1);

        for (const auto& freq : counts) {
            freqs.at(freq.second).push_back(freq.first);
        }

        vector<int> ret;

        for (int i = nums.size(); i > 0; --i) {
            if (freqs.at(i).empty()) {
                continue;
            }

            for (const auto& num : freqs.at(i)) {
                ret.push_back(num) ;
                if (ret.size() >= k) {
                    return ret;
                }
            }
        }

        return ret;
    }
};
