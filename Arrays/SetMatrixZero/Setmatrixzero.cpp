#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    
        cin>>m>>n;
        
         vector < vector < int >> matrix(m, vector < int > (m, 0));
        
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cin>>matrix[i][j];
            }
        }
        
       for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (matrix[i][j]==0)
           { 
            for (int k=0;k<n;k++)
            {
                if (matrix[i][k]!=0)
                {
                    matrix[i][k]=-1011;
                }
            }
            
        break;
           }
             
        }
        
    }
    
    
     for (int j=0;j<n;j++)
    {
        for (int i=0;i<m;i++)
        {
            if (matrix[i][j]==0)
           { 
            for (int k=0;k<m;k++)
            {
                if (matrix[k][j]!=0)
                {
                    matrix[k][j]=-1011;
                }
            }
            
        break;
           }
             
        }
        
    }
    
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (matrix[i][j]==-1011)
            {
               matrix[i][j]=0;
            }
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

