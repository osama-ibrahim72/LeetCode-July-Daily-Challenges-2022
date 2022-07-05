class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx =1;
        int cur =1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                cur++;
                mx=max(mx,cur);
            }
            else if(nums[i]==nums[i-1])
                continue;
            else
                cur =1;
        }
        if (nums.size()==0)mx=0;
        return mx;
    }
};