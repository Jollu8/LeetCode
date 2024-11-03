class Solution {
public:
    bool rotateString(string s, string goal) {
       int i,k;
    queue<char>q1 ;
    queue<char>q2;
    for(i=0;i<s.length();i++)
        q1.push(s[i]);
    
    for(i=0;i<goal.size();i++)
        q2.push(goal[i]);
    
    k = goal.length();
    
    while(k!=0)
    {
        char ch = q1.front();
        q1.pop();
        q1.push(ch);
        if(q1 == q2)
            return true;
        k--;
    }
    
    return false;
        
    }
};