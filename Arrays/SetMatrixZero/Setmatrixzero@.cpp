#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,first=1;
    cin>>m>>n;
    
    int matrix[m][n];
    
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    
    for (int i=0;i<n;i++)
    {
        if(matrix[i][0]==0)
        {
            first=0;
        }
        
        for (int j=1;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    
    for (int i=m-1;i>=0;i--)
    {
        for (int j=n-1;j>=0;j--)
        {
            if(matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
        }
        
        if(first==0)
        {
            matrix[i][0]=0;
        }
    }
    
    
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    
    
    
}