class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {

        int length_arr = arr.size();
        int length_que = queries.size();


        vector<int> vec(length_arr);
        vector<int> result(length_que);

        vec[0] = arr[0];

        for( int i = 1; i<length_arr; ++i){

            vec[i] = vec[i-1] ^ arr[i];

        }

        for (int i = 0; i<length_que; ++i){

            int left = queries[i][0];
            int right = queries[i][1];

            if (left == 0){ result[i] = vec[right]; }
            else{
                result[i] = vec[right] ^ vec[left-1];
            }
        }

        return result;
    }
};