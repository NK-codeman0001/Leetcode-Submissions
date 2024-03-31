class Solution {
    vector<vector<int>> G;
    vector<int> ans, seen;
    vector<int> dfs(int u, string &labels) {
        seen[u] = 1;
        vector<int> cnt(26, 0);
        for (int v : G[u]) {
            if (seen[v]) continue;
            auto sub = dfs(v, labels);
            for (int i = 0; i < 26; ++i) cnt[i] += sub[i];
        }
        cnt[labels[u] - 'a']++;
        ans[u] = cnt[labels[u] - 'a'];
        return cnt;
    }
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& E, string labels) {
        G.assign(n, {});
        ans.assign(n, 0);
        seen.assign(n, 0);
        for (auto &e : E) {
            G[e[0]].push_back(e[1]);
            G[e[1]].push_back(e[0]);
        }
        dfs(0, labels);
        return ans;
    }
};