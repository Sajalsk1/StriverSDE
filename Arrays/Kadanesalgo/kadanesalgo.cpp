#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,maxsum=0,count=0;
    cin>>n;
    
    int A[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    for (int i=0;i<n;i++)
    {
        if(A[i]<0)
        {
            count++;
        }
    }
    
    int nvmax=INT_MIN;
    
    for (int i=0;i<n;i++)
    {
        if(A[i]>nvmax)
        {
            nvmax=A[i];
        }
    }
    
    if(count==n)
    {
        cout<<nvmax<<endl;
    }
    
    else
    {
        
    
    
    for (int i=0;i<n;i++)
    {
        sum=sum+A[i];
        
        if(sum>=maxsum)
        {
            maxsum=sum;
        }
        
        else if(sum<0)
        {
            sum=0;
        }
    }
    
    cout<<maxsum<<endl;
    
    }
}