
class ATM {
    vector<long long> atm;
    vector<long long> money {20,50,100,200,500};
public:
    ATM():atm(5) {
        
    }
    
    void deposit(vector<int> b) {
        for(int i = 0; i < 5; ++i){
            atm[i] += b[i];
        }
    }
    
    vector<int> withdraw(int a) {
        vector<int> take(5);
        for(int i = 4; i >= 0; --i){
            take[i] = min(atm[i], a/money[i]);
            a -= take[i]* money[i];
        }
        if(a) return {-1};
        for(int i = 0; i < 5; ++i) {
            atm[i] -= take[i];
        }
        return take;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */