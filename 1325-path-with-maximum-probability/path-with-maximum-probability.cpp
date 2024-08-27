class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        // Initialize the maximum probability vector with 0.0 for all nodes
        // maxProb[i] represents the maximum probability of reaching node i from start_node
        vector<double> maxProb(n, 0.0);
        maxProb[start_node] = 1.0; // The probability of reaching the start node from itself is 1.0

        // Iterate up to n - 1 times (similar to Bellman-Ford algorithm)
        for (int i = 0; i < n - 1; ++i) {
            bool updated = false; // Track if any probability was updated in this iteration

            // Traverse each edge to attempt to improve the maximum probability path
            for (int j = 0; j < edges.size(); ++j) {
                int u = edges[j][0]; // Node u of the edge
                int v = edges[j][1]; // Node v of the edge
                double prob = succProb[j]; // Success probability of this edge

                // Check if traversing from u to v provides a higher probability path
                if (maxProb[u] * prob > maxProb[v]) {
                    maxProb[v] = maxProb[u] * prob;
                    updated = true; // Mark that we made an update
                }
                
                // Check if traversing from v to u provides a higher probability path
                if (maxProb[v] * prob > maxProb[u]) {
                    maxProb[u] = maxProb[v] * prob;
                    updated = true; // Mark that we made an update
                }
            }

            // If no updates were made, break early as further iterations won't improve the result
            if (!updated) break;
        }

        // Return the maximum probability to reach the end_node from the start_node
        return maxProb[end_node];
    }
};