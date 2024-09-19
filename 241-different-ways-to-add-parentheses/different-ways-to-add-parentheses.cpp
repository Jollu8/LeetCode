class Solution {
public:
     vector<int> diffWaysToCompute(string expression) {
        return solve(expression, 0, expression.size() - 1);
    }

    vector<int> solve(string &expression, int i, int j) {
        
        vector<int> res;
        
        for (int k = i; k <= j; k++) {
            
            char c = expression[k];
            
            if (c == '+' || c == '-' || c == '*') {
                
                vector<int> left = solve(expression, i, k - 1);
                vector<int> right = solve(expression, k + 1, j);
                    
                for (auto l: left) {
                    for (auto r: right) {
                        res.push_back(computeOperation(l, r, c));
                    }
                }
                    
            }
            
        }
        
        if (res.size() == 0) {
            res.push_back(stoi(expression.substr(i, j - i + 1)));
        }
        
        return res;
        
    }

    int computeOperation(int a, int b, char op) {
        if (op == '+') return a + b;
        if (op == '-') return a - b;
        return a * b;
    }
};