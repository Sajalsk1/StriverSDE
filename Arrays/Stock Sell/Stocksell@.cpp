#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,profit=0,min,diff,a;
    cin>>n;
    
    vector <int> prices;
    
    for (int i=0;i<n;i++)
    {
        cin>>a;
        prices.push_back(a);
    }
    
    min = prices[0];       
    
    for (int i=1;i<prices.size();i++)    
    {
         if (prices[i]<min)
         {
             min=prices[i];
         }
         
         else
         {
            diff=prices[i]-min;
         }
         
         if (diff>profit)
         {
             profit=diff;
         }
    }
    
   cout<<profit;
}
