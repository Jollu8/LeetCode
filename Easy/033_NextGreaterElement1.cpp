///// @Jollu
// 496. Next Greater Element I



#include <cstdint>
#include <string>
#include <vector>
#include <set>
#include <stack>


using namespace std;

class Solution {
public:

    vector<int> nextGreaterElement(vector<int> &c, vector<int> &a) {
        int n = a.size();
        vector<int> b(*max_element(a.begin(), a.end()) + 1);
        stack<int> s;
        for (int i = n - 1; i >= 0; i--) {
            while (s.size() && s.top() < a[i])
                s.pop();

            if (!s.size()) b[a[i]] = -1;
            else b[a[i]] = s.top();

            s.push(a[i]);
        }
        vector<int> d;

        for (int i = 0; i < c.size(); i++) d.push_back(b[c[i]]);

        return d;
    }
};

int main() {

}