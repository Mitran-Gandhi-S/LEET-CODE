class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<int,int> map; 
        int ans = 0;

        int left = 0;
        for(int i = 0; i<n; i++){
            map[s[i]]++;
            while(left < i && map[s[i]] > 1){
                map[s[left]]--;
                left++;
            }
            ans = max(ans,i - left + 1);
        }
        return ans;
    }
};