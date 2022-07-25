///// @Jollu
// 2347. Best Poker Hand


#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    string bestHand(vector<int> &ranks, vector<char>& suits) {
        unordered_map<char,int>m1;
        unordered_map<int,int>m;
        for(int i=0;i<5;i++)
            m[ranks[i]]++;
        for(int i=0;i<5;i++)
            m1[suits[i]-'a'];
        if(m1.size()==1)
            return "Flush";
        else if(m.size()==2)
            return "Three of a Kind";
        string x;
        for(auto &i:m)
        {
            if(i.second==3)
                return "Three of a Kind";
            else if(i.second==2)
                x="Pair";
        }
        if(x=="Pair")
            return "Pair";
        else
            return "High Card";

    }
};

int main() {

}