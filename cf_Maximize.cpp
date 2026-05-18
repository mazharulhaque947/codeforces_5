// Maximize?

#include<bits/stdc++.h>
using namespace std;
int gccd(int a,int b)
{

    if(b%a==0){return a;}
    else{ return gccd(b%a,a); }

}
int main()
{
    int a,b,v,c,i,j,k,l,t;

    cin>>t;

    while(t--)
    {
        cin>>a;
        k=0;
        l=0;

        for(i=1;i<a;i++){ if(gccd(i,a)+i>k){ k=gccd(i,a)+i; l=i; } }
        cout<<l<<"\n";
    }

    return 0;
}
