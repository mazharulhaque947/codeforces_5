#include<bits/stdc++.h>
#define int long long
using namespace std;

int pp(int n)
{
   int r,o;
   r=1;
   o=2;

   while(n>0)
   {

       if(n%2==1){r=r*o;}
       n=n/2;
       o=o*o;

   }

    return r;
}


int32_t main()
{

    int n,i,k,t;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cout<<pp(n)-1<<"\n";


    }

    return 0;
}
