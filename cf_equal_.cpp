#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,j,k,m,n,a[2],c;
    cin>>t;
    while(t--)
    {

        cin>>a[0]>>a[1]>>c;

        sort(a,a+2);
        m=a[1]-a[0];

        n=m%2+m/2;

        j=n/c;
        if(n%c>0){j++;}
        cout<<j<<"\n";



    }

    return 0;
}
