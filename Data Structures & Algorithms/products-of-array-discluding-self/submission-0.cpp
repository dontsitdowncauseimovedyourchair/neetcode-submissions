class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());

        prefix.at(0) = 1;
        suffix.at(nums.size() - 1) = 1;

        for (int i = 1; i < nums.size(); ++i) {
            prefix.at(i) = nums.at(i - 1) * prefix.at(i - 1);
            suffix.at(nums.size() - i - 1) = suffix.at(nums.size() - i) * nums.at(nums.size() - i);
        }

        vector<int> ret;

        for (int i = 0; i < nums.size(); ++i) {
             ret.push_back(prefix.at(i) * suffix.at(i));
        }

        return ret;
    }
};
