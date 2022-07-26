///// @Jollu
// 2335. Minimum Amount of Time to Fill Cups


#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int fillCups(vector<int>& amount) {
    sort(amount.begin() , amount.end());
    int i = 0;
    while(amount[1]!=0){
        amount[1]--;
        amount[2]--;
        i++;
        sort(amount.begin() , amount.end());

    }
    while(amount[0]!=0 && amount[2]!=0){
        amount[0]--;
        amount[2]--;
        i++; sort(amount.begin() , amount.end());
    }
    i+=amount[0];
    i+=amount[2];
    return i;

}

int main() {

}