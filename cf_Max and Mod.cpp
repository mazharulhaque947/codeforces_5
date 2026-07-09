#inclyde<bits/stdc++.h>
using namespace std;
int main()
{
    int a[500],j,k,l,m,n,t,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a[0]=n;
        for(i=1;i<n;i++){a[i]=i;}

        if(n%2==0){cout<<"-1\n";}
        else{for(i=0;i<n;i++){cout<<a[i]<<" ";} cout<<"\n";}
    }

    return 0;
}
