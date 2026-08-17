class Solution {

private:
    bool dfs(int node,int parent,vector<int>&vis,vector<vector<int>>&adjls){

        vis[node] = 1;

        for(auto adjnode : adjls[node]){
            if(!vis[adjnode]) {
                if(dfs(adjnode,node,vis,adjls) == true) return true;
            }
            else if(parent != adjnode) return true;
        }
        return false;
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adjls(n);
        vector<int>vis(n,0);
        queue<int>q;


        for(auto it : edges){
            adjls[it[0]].push_back(it[1]);
            adjls[it[1]].push_back(it[0]);
        }

          
        if(dfs(0,-1,vis,adjls) == true) return false;
            

        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }

        return true;



        





    }
};
