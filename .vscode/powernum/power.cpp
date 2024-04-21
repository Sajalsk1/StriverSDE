#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,ans=1.0;
    int n,m;
    cin>>n;

    m=n;

    if(m<0)
    {
        m=m*-1;
    }

    while(m>0)
    {
        if(m%2==0)
        {
            x=x*x;
            m=m/2;
        }

        if(m%2==1)
        {
            ans=ans*x;
            m=m-1;
        }
    }

    if(n<0)
    {
        ans=double(1)/double(ans);
    }

    cout<<ans<<endl;
}