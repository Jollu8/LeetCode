class Solution {
    void merge_sort(vector<int> & vec, int start, int end) {
        if(end - start < 2) return;

        const size_t mid = (end + start) / 2;
        merge_sort(vec, start, mid);
        merge_sort(vec, mid, end);

        vector<int> buff;
        size_t left = start;
        size_t right = mid;
        buff.reserve(end - start);

        while((left < mid) && (right < end)) {
            if(vec[left] > vec[right]) {
                buff.emplace_back(vec[left]);
                ++left;
            }else{
                buff.emplace_back(vec[right]);
                ++right;
            }
        }
        while(left < mid) {
            buff.emplace_back(vec[left]);
            ++left;
        }

        while(right < end) {
            buff.emplace_back(vec[right]);
            ++right;
        }

        std::copy(buff.begin(), buff.end(), vec.begin() + start);
    }
public:
    int findKthLargest(vector<int>& n, int k) {
        merge_sort(n, 0, n.size());
        for(auto i : n) std::cout << i;
        return n[k-1];
    }
};