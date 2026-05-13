#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],i,j,k,l,m,n,t;
    string q;
    cin>>t;
    while(t--)
    {

        cin>>q;
        a[0]=10;
        for(i=0;i<10;i++){a[i+1]=i+1;}
        k=0;
        for(i=0;i<3;i++){ m=q[i]-48-a[q[i+1]-48]; if(m<0){m=m*-1;} k+=m;}
        cout<<k+4<<"\n";
    }
    return 0;
}
