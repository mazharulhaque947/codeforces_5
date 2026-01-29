#include<bits/stdc++.h>
using namespace std;
void b(int n){
int u,v;
u=n%2;
n=n/2;
if(n>0){b(n);}

cout<<u<<"";


}
void s(int n){
    int u;
    cin>>u;
    b(u);
    cout<<"\n";
 if(n>1){  s(n-1); }
}
int main()
{
    int t;
    cin>>t;
    s(t);

    return 0;
}
