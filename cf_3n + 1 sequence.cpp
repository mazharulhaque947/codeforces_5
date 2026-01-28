#include<bits/stdc++.h>
using namespace std;
int l;

int cc(int n){
    l++;
if(n!=1){ if(n%2==0){n=n/2;} else{ n=n*3+1; } cc(n); }
}

int main()
{
    int n;
    cin>>n;
    l=0;
    cc(n);
    cout<<l<<"\n";

    return 0;
}
