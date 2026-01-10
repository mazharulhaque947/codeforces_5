#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,k;

    string  a;

    cin>>n;
    cin>>a;

    m=0;

    for(i=0;i<n;i++){

        if( (a[i]-48)%2==0 ){ m=m+(i+1);}

    }

    cout<<m<<"\n";
    return 0;
}
