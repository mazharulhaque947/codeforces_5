#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,n,o,k;
    cin>>n;
    k=sqrt(n);
    while(k>=1){

       if(n%k==0){ break; }
       k--;
    }
    cout<<k<<" "<<n/k;

    return 0;
}
