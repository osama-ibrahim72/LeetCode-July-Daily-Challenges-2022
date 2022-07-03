class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int size=nums.size(), choice1=1, choice2=1;
        for(int i=1; i<size; ++i){
                 if(nums[i]>nums[i-1]) choice1 = choice2 + 1;
            else if(nums[i]<nums[i-1]) choice2 = choice1 + 1;
        }
        return max(choice1 , choice2 );
    }
};
