class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for (int i = 1; i <= nums.size(); i++) {
            bool found = false;
            for (int x : nums)
                if (x == i) found = true;
            if (!found) ans.push_back(i);
        }
        return ans;
    }
};
