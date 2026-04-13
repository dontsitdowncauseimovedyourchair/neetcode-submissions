class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

 //       for (int i = 0; i < s.size(); ++i) {
 //           ++map1[s.at(i)];
 //           ++map2[t.at(i)];
 //       }
        
 //       for (auto [key, val] : map1()) {       
 //       }

        for (int i = 0; i < s.size(); ++i) {
            if (s.at(i) != t.at(i)) {
                return false;
            }
        }

        return true;
    }
};
