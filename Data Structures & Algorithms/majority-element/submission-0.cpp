class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int, int> numMap;

         for(int num : nums) {
            numMap[num]++;
         }

         for(auto num : numMap){
            if(num.second > nums.size()/2){
                return num.first;
            }
         }

         
    }
};