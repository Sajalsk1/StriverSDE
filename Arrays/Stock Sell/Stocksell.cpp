#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,diff=0,k=0;
    cin>>n;
    
    int A[n];
    int B[n*n];
    
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    for (int i=0;i<n-1;i++)         // 7 6 5 4 3 2 1   4 2 5  1 3 
    {
        
        for(int j=i+1;j<n;j++)
        {
            if(A[j]>A[i])
            {
                
                diff=A[j]-A[i];
                B[k]=diff;
                k++;
            }
        }
    }
    
   int max=INT_MIN;
    
   for (int i=0;i<k;i++)
    {
        
        if(B[i]>max)
        {
            max=B[i];
        }
    }
    
    if(k==0)
    {
        max=0;
    }
    
    cout<<max<<endl;
    
    
    
    
    
}
