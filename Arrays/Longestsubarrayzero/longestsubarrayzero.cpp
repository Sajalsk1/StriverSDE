#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,max_len=0,sum=0;
    cin>>n;
    
    int A[n];
    
    for (int i=0;i<n;i++) {
        
     cin>>A[i];
     
    }
    
    for (int i=0;i<n;i++)        // 9 -3 3 -1 6 -5
    {
        sum=0;
        
        for (int j=i;j<n;j++)
        {
            sum=sum+A[j];
            if(sum==0) {
                max_len=max(max_len,j-i+1);
            }
        }
    }
    
    cout<<max_len<<endl;
    
    
}