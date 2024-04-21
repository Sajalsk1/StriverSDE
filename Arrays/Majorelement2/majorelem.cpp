#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[10]={1,1,1,1,1,2,3,4,4,4};
    
    int ans,x;
        
        int n=sizeof(nums)/sizeof(nums[0]);
        
        x=n/2;
       
        vector <int> B;
        
        for (int i=0;i<n+1;i++)   
        {
            B.push_back(0);
        }
        
        for (int i=0;i<n+1;i++)
        {
           B[nums[i]]+=1;
        }
        
        for (int i=1;i<n+1;i++)
        {
            // if(B[i]>=x)
            // {
            //   cout<<i<<" ";
            // }
            
            cout<<B[i]<<" ";
        }
        
        
}    
