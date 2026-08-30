
#include<bits/stdc++.h>
using namespace std;

int gg(int a, int b)
{

    int c;

    while(a!=0){

        c=b%a;
        b=a;
        a=c;


    }

    return b;
}
int main()
{
    int a[200],i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; }

        cout<<gg(a[0],a[n-1])<<"\n";

    }

    return 0;

}
