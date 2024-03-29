class Solution {
public:
	bool isEularCircuitExist(int v, vector<int>adj[]){
	    // Code here
	      // Iterate over each vertex in the graph
    for(int i = 0; i < v; i++) {
        // Check if the number of edges incident to the current vertex is odd
        if(adj[i].size() % 2 != 0) {
            // If the number of edges incident to the vertex is odd, return false
            // as an Eulerian circuit cannot exist in such a graph
            return false;
        }
    }
    // If the function has not returned false during the iteration, it means
    // all vertices have an even number of incident edges, so return true
    // indicating that an Eulerian circuit exists in the graph
    return true;
	}

};