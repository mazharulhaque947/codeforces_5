#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k,i,j,l;
    string a;
    cin>>n>>k;
    cin>>a;
    if(k-0>n-k){
        l=n-k;
        for(i=0;i<l;i++){cout<<"RIGHT\n";}
        for(i=0;i<n;i++){cout<<"PRINT "<<a[n-1-i]<<"\n";if(i!=n-1){cout<<"LEFT\n";}}
    }
    else{
        l=k-1;
        for(i=0;i<l;i++){cout<<"LEFT\n";}
        for(i=0;i<n;i++){cout<<"PRINT "<<a[i]<<"\n";if(i!=n-1){cout<<"RIGHT\n";}}

    }
    return 0;
}
