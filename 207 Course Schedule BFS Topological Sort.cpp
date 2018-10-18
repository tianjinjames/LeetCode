class Solution {
public:
    vector<unordered_set<int>> BuildGraph(int numCourses, vector<pair<int, int>> courses){
        vector<unordered_set<int>> graph(numCourses);
        for(auto p : courses){
            graph[p.first].emplace(p.second);
        }
        return graph;
    }
    
    vector<int> ComputeDegree(vector<unordered_set<int>> graph){
        vector<int> degree(graph.size());
        for(auto set : graph){
            for(auto course : set){
                degree[course]++;
            }
        }
        
        return degree;
    }
    
    bool canFinish(int numCourses, vector<pair<int, int>>& courses) {
        auto graph = BuildGraph(numCourses, courses);
        auto degree = ComputeDegree(graph);
        queue<int> q;
        
        for(int i = 0; i < degree.size(); i++){
            if(degree[i] == 0)
                q.push(i);
        }
        
        int count = 0;
        
        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            count++;
            for(auto c : graph[cur]){
                degree[c]--;
                if(degree[c] == 0)
                    q.push(c);
            }
        }
        
        return count == numCourses;
    }
};