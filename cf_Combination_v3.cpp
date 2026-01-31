#include<bits/stdc++.h>
using namespace std;

int c(int a,int b)
{
    if(a<b){return 0;}
    else if(a==b||b==0){return 1;}
    else{ return c(a-1,b-1)+c(a-1,b); }

}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<c(n,k);
    return 0;
}
