class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxnum = 0;
        int counter=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                counter++;
                maxnum = max(maxnum,counter);
            }
            else{
                counter = 0;
            }
        }
        return maxnum;
    }
};