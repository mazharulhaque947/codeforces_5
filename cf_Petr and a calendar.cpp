#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,k,m,n,d,w;
    cin>>n>>d;
    w=a[n-1];

    w=w-(7+1-d);
    j=w;
    w=w/7;
    if(w*7==j){w++; }else{w=w+2; }
cout<<w<<"\n";
    return 0;
}
