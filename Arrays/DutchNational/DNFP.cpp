#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,a;
    cin>>n;
    
    int low=0,mid=0,high=n-1;
    
    vector <int> v;
    
    for (int i=0;i<n;i++) {       // 2 0 2 1 1 0
        cin>>a; 
        v.push_back(a);
        }
        
    while(mid<=high) {
        
        if(v[mid]==0) {
            
            swap(v[low],v[mid]);
            low++;
            mid++;
            
        }
        
        else if(v[mid]==1) {
             mid++;
        }
        
        else if(v[mid]==2) {
            
            swap(v[mid],v[high]);
            mid++;
            high--;
            
        }
    }
    
    for (int i=0;i<n;i++) {
        cout<<v[i]<<" ";
        }
        
        
}