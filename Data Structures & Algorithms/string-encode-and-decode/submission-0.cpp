class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for (const string& s : strs) {
            encoded += to_string(s.size());
            encoded += '#';
            encoded += s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        int n = s.size();

        while (i < n) {
            int j = i;

            while (j < n && s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i));

            j++;

            string original = s.substr(j, len);
            result.push_back(original);

            i = j + len;
        }
        return result;
    }
};
