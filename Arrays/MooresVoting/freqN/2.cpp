#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    
    int A[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
   int elem=A[0];
    
     for(int i = 1; i < n; i++){
            if (count == 0){
                count++;
                elem = A[i];
            } else if (elem == A[i]){
                count++;
            }else {
                count--;
            }
        }
    
     
    
    cout<<elem;
    
}