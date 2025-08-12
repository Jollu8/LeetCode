class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
       
        int n=garbage.size();

        int p=0;
        int m=0;
        int g=0;

        int p_travel_cost=0;
        int m_travel_cost=0;
        int g_travel_cost=0;

        int temp=0;
        int temp1=0;
        int temp2=0;

        for(int i=0;i<n;i++) 
        {


             for(auto it:garbage[i])
            {
                if(it == 'P' )
                { 
                   p++;
                   temp=i;

                }
                 if(it == 'G' )
                { 
                   g++;
                   temp1=i;
                }
                 if(it == 'M' )
                { 
                   m++;
                   temp2=i;
                }
            }




        }
        
       
    
      for(int l=0;l<temp;l++){
          p_travel_cost += travel[l];
      }

     
      for(int l=0;l<temp1;l++){
          m_travel_cost += travel[l];
      }

        
     
      for(int l=0;l<temp2;l++){
          g_travel_cost += travel[l];
      }

      

        return (p+p_travel_cost)+(m+m_travel_cost)+(g+g_travel_cost);
    }
};