class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
       long long sum =0;
       for(int i=0; i<chalk.size();i++){
           sum+=chalk[i];
       }

       

       if(k%sum !=0){
           int x = k%sum;
           for(int i=0; i<chalk.size();i++){
               x-=chalk[i];
               if(x<0){
                   return i;
                   break;
               }
           }
       }

       return 0;
    }
};