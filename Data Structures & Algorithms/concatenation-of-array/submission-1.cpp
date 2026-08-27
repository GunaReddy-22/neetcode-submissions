class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int ansSize = 2 * nums.size();
        vector<int>ans(ansSize);

        for (int i=0;i<n;i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }

        return ans;
    }
};