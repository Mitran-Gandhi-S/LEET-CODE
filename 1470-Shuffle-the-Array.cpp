class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(n*2);
        int k = 0;
        for(int i = 0;i<n;i++)
        {
            ans[k]= nums[i];
            k++;
            ans[k] = nums[i+n];
            k++;
        }
        return ans;

    }
};