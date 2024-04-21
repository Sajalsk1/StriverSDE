#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,count=0,mid;
    cin>>n>>m;
    
   int low=0,high=m*n-1;
    
    int A[n][m];
    
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }
    
     cin>>x;
    
    while(low<=high)
    {
        mid=(low+(high-low)/2);
        
        if(A[mid/m][mid%m]<x)
        {
            low=mid+1;
        }
        
        if(A[mid/m][mid%m]>x)
        {
            high=mid-1;
        }
        
        else if(A[mid/m][mid%m]==x)
        {
            cout<<"True";
            count++;
        }
        
        if(count!=0)
        {
            
            break;
        }
    }
    
    if(count==0)
    {
        cout<<"False";
    }
}