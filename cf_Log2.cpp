#include<bits/stdc++.h>
using namespace std;
int l(long long n){ if(n==1){return 0;}else{return 1+l(n/2);} }
int main()
{
    long long n;
    cin>>n;
    cout<<l(n);

    return 0;
}
