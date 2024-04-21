#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    
    int A[n];
    int B[n+1]={0};
    
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }                           // 1 3 4 5 3 2
    
    for(int i=0;i<n;i++)
    {
        if(B[A[i]]==0)
        {
            B[A[i]]+=1;
        }
        
        else
        {
            ans=A[i];
        }
    }
    
    cout<<ans<<endl;
    
    
    
    
    
}