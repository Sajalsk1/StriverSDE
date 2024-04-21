#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y,k,temp;
    cin>>n;
    
    int A[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    for (int i=n-1;i>=0;i--)           // 1 2 4 2 3 5 6 
    {
        if(A[i]>A[i-1])
        {
            x=i;
            y=A[i-1];
            break;
        }
    }
    
     if (x==0){
        reverse(A,A+n);
    }
    
   
    
   else if(x!=n-1)
    {
        
        for (int i=x+1;i<n;i++)
    {
        if(A[i]>y)
        {
            k=i;
        }
    }
    
    // cout<<A[k]<<endl;
    
            temp=A[k];
            A[k]=A[x-1];
            A[x-1]=temp;
            
            // cout<<temp<<" "<<A[k]<<endl;
            
        sort(A+k,A+n);
        
    }
    
    else if(x==n-1)
    {
            temp=A[x-1];
            A[x-1]=A[x];
            A[x]=temp;
    }
    
    
    
    
    
   
        
        for (int i=0;i<n;i++)
        {
            cout<<A[i]<<" ";
        }
        
    

    
    
}