class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mapp;
        for(int i = 0; i < strs.size(); ++i) {
            vector<int> freqs(26, 0);
            for (char c : strs.at(i)) {
                freqs.at(c - 'a')++;
            }
            mapp[freqs].push_back(strs.at(i));
        }
        
        vector<vector<string>> ret;
        for (const auto& pair : mapp) {
            ret.push_back(pair.second);
        }
        return ret;
    }
};
