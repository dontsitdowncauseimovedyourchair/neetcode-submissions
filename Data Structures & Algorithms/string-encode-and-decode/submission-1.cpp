class Solution {
public:

    string encode(vector<string>& strs) {
        int count = 0;
        string ret = to_string(strs.size()) + ".";

        for(int i = 0; i < strs.size(); ++i) {
            ret += to_string(strs.at(i).size()) + "." + strs.at(i);
        }

        cout << "string in question: " << ret << endl;

        return ret;

    }

    size_t getLength(const string& s, size_t& idx) {
        string str = "";
        while (true) {
            if (s.at(idx) == '.') {
                break;
            }
            str += s.at(idx);
            ++idx;
        }
        ++idx;
        return stoi(str);
    }

    vector<string> decode(string s) {
        if (s.size() <= 1) {
            return {};
        }
        vector<string> ret;
        //length of first word
        size_t idx = 0;
        size_t n = getLength(s, idx);
        cout << "n: " << n << endl;
        for (int i = 0; i < n; ++i) {
            int m = getLength(s, idx);
            cout << "m: " << m << endl;
            ret.push_back(s.substr(idx, m));
            idx += m;
        }

        return ret;

    }
};
