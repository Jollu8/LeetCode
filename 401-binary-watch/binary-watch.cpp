class Solution {
    vector<string> ans;
    vector<int> h{1,2,4,8};
    vector<int> m{1,2,4,8,16,32};

    void bkg(pair<int, int> time, int ind, int turnedOn) {
        if (turnedOn == 0) {

            ans.emplace_back(to_string(time.first) + (time.second < 10
                             ? ":0" + to_string(time.second)
                             : ":" + to_string(time.second)));
            return;
        }

        for(int i = ind; i < 10; ++i) {
            if(i < 4) {
              time.first +=  h[i];
              if(time.first < 12) bkg(time, i+1, turnedOn -1);
              time.first -= h[i];
            }else{
                time.second += m[i -4];
                if(time.second < 60) bkg(time, i+1, turnedOn -1);
                time.second -= m[i-4];
            }
        }
        
    }

public:
    vector<string> readBinaryWatch(int turnedOn) {
        bkg({0,0}, 0, turnedOn);
        return ans;
    }
};