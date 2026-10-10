class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& g) {
        int n = g.size(), a = 0, b = 0;

        for (int k = 1; k <= n*n; k++) {
            int c = 0;
            for (auto r : g)
                for (int x : r)
                    if (x == k) c++;

            if (c == 2) a = k;
            if (c == 0) b = k;
        }
        return {a, b};
    }
};