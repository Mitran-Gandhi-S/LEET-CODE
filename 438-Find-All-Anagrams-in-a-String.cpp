class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> pMap, sMap;

        for (char c : p)
            pMap[c]++;

        int k = p.size();

        for (int i = 0; i < s.size(); i++) {
            sMap[s[i]]++;

            if (i >= k) {
                sMap[s[i - k]]--;
                if (sMap[s[i - k]] == 0)
                    sMap.erase(s[i - k]);
            }

            if (sMap == pMap)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};