#include<bits/stdc++.h>
using namespace std;

int nump(int n)
{

    int m;

    m= (n*(n+1))/2;

    return m;

}


int main()
{
    int a,b,i,j,k,t,m,n;

    cin>>t;

    while(t--){

        cin>>a>>b;

        m=a-b;
        if(m<0){ m=m*-1; }

        k=m/2;
        n=k+(m%2);

        cout<<nump(k)+nump(n)<<"\n";

    }

    return 0;
}
