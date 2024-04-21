#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ansd,ansm;
    cin>>n;
    
    int  A[n];
    int  B[n+1]={0};
    
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    for (int i=0;i<n;i++)
    {
        if(B[A[i]]==0)
        {
            B[A[i]]=1;
        }
        
        else if(B[A[i]]==1)
        {
            ansd=A[i];
        }
    }
    
    
    
    for (int i=1;i<=n;i++)
    {
        if(B[i]==0)
        {
            ansm=i;
        }
    }
    
    cout<<ansd<<" "<<ansm<<endl;
    
    
    
    
    
}