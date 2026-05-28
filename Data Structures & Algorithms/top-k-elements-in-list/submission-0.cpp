class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        // count frequency
        for(int num : nums){
            mp[num]++;
        }

        // max heap
        priority_queue<pair<int,int>> pq;

        for(auto it : mp){
            pq.push({it.second, it.first});
        }

        vector<int> ans;

        // take top k elements
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};