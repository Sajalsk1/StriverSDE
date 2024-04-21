#include >bits/stdc++.h>
using namespace std;
int main() {
    
    int m,n;
    cin>>m>>n;
    
    int matrix[m][n];
    
    int R[m];
    int C[n];
    
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }
    
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            if(matrix[i][j]==0) {
                R[i]=0;
                C[i]=0;
            }
        }
    }
    
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if(R[i]==0 || C[j]==0)
            {
                A[i][j]=0;
            }
        }
    }
    
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    
}