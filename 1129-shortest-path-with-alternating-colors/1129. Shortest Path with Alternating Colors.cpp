class Solution {
public:
     struct Index{
        int pos;
        int clr; // 0:red 1:blue
        int step;
    };
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<int>res(n,-1);
        vector<vector<bool>>RB(n,vector<bool>(2,false)); // mark visited or not

        res[0] = 0;
        RB[0][0] = 1;
        RB[0][1] = 1;
        
        vector<vector<int>> rmp(n); // red edge
        vector<vector<int>> bmp(n); // blue edge

        for(auto v: redEdges){
            rmp[v[0]].push_back(v[1]);
        }
        for(auto v: blueEdges){
            bmp[v[0]].push_back(v[1]);
        }

        queue<Index> q;
        for (auto s : rmp[0]) {
            q.push(Index{s,0,1});   // a red edge to s with 1 step
        }
        for (auto s : bmp[0]) {
            q.push(Index{s,1,1});   // a blue edge to s with 1 step
        }

        while(!q.empty()){
            Index tmp = q.front();
            q.pop();
            if(RB[tmp.pos][tmp.clr]) continue;  // have visited

            RB[tmp.pos][tmp.clr] = true;
            if(tmp.clr == 0){   // next step should be blue
                for (auto s : bmp[tmp.pos]) q.push(Index{s,1,tmp.step+1}); 
            } 
            else{   // next step should be red
                for (auto s : rmp[tmp.pos]) q.push(Index{s,0,tmp.step+1}); 
            }

            if(res[tmp.pos] == -1) res[tmp.pos] = tmp.step;
        }
        return res;
    }
};