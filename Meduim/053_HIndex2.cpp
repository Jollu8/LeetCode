class Solution {
public:
    int hIndex(vector<int>& citations) {
                int start=0;
        int n= citations.size();
        int end = n-1;
        
        while(start<=end)
        {
            int mid= start + (end-start)/2;
            
            if(citations[mid]==n-mid)
                return citations[mid];
            
            else if(citations[mid]>n-mid)
                end=mid-1;
            else 
                start = mid+1;
        }
        return n-start;

    }
};
