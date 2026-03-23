
#include<bits/stdc++.h>
using namespace std;

int bb(int a[],int n,int k)
{
    int i,j,l,m,o;
    l=0;
    while(n>0){

        a[l]=n%k;
        n=n/k;
        l++;
    }

    return l;
}

int main()
{

    int a[100],i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
      cin>>n>>k;

       l=bb(a,k,2);
       cout<<l-1<<"\n";
    }

    return 0;
}
