class Solution {

private:
    void dfs(int node,vector<int>&vis,vector<vector<int>>&adjls){
        vis[node] =1;

        for(auto adjnode : adjls[node]){
            if(!vis[adjnode]) {
                dfs(adjnode,vis,adjls);
            }
        }


    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
         vector<vector<int>> adjls(n);
         vector<int> vis(n, 0);


        for(auto it : edges) {

            adjls[it[0]].push_back(it[1]);
            adjls[it[1]].push_back(it[0]);
        }

        int count =0;

        for(int i =0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(i,vis,adjls);
            }
        }

        

        return count;

    }
};
