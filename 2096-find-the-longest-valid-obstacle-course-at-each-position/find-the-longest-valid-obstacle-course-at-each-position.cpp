class Solution {
public:
   vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
       vector<int> q, res;
       for(auto o:obstacles) {
           int idx = upper_bound(q.begin(),q.end(),o) - q.begin();
           if(idx==q.size()) {
               q.push_back(o);
               res.push_back(q.size());
           } else {
               q[idx] = o;
               res.push_back(idx+1);
           }
       }
       return res;
   }
};