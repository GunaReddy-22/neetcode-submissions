class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
    int maxSum = nums[0];
    int currSum = nums[0];
    
    for(int i=1;i<n;i++){
        if(currSum + nums[i] <nums[i] ){
            currSum=nums[i];
        }
        else{
            currSum =  currSum + nums[i];
        }

        if (currSum  > maxSum ){
            maxSum = currSum; 
        } 
    }

    return maxSum;

    }
};
