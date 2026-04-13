class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mapp;
        for (int i = 0; i < nums.size(); ++i) {
            int dif = target - nums.at(i);
            auto found = mapp.find(dif);
            if (found != mapp.end()) {
                return {found->second, i};
            }
            mapp[nums.at(i)] = i;
        }
    }
};
