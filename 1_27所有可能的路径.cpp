class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> paths {};
        vector<int> path {};
        int total = graph.size();
        if(total == 0)  return paths;
        dfs(graph, paths, path, 0, total - 1);
        return paths;
    }
private:
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& paths, vector<int> path, int begin, int des)
    {
        path.push_back(begin);
        if(begin == des)
        {
            paths.push_back(path);
            return;
        }
        for(int node : graph[begin])
            dfs(graph, paths, path, node, des);
    }
};
