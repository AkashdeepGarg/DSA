class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        int i=0,j=0;
        while(j<n){
            mp[nums[j]]++;
            while(i<=j and mp[nums[j]]>k){
                mp[nums[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        
        return ans;
    }
};