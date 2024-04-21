#include <bits/stdc++.h>

using namespace std;
int main()
{
    
int a,n;
cin>>n;


  map < int, int > mp;
 
  vector < int > arr;
  
  for (int i=0;i<n;i++)
  {
      cin>>a;
      arr.push_back(a);
  }

  for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
  }

  for (auto x: mp) {
      if(x.second>n/3)
      {
          ans.push_back(x.first)
      }
  
  }
  
  
}