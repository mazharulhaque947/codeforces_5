#include<bits/stdc++.h>

using namespace std;

int mm(int h,int m){ return  60*h+m; }
int dd(int h, int m,int a, int b){  int u=-mm(h,m)+mm(a,b); if(u<0){u=1440+u;} return u; }
void hh(int *p,int *o,int l){ int a,b; a=l/60;b=l-60*a; *p=a; *o=b; }

int main()
{
    int h,m,a,n,b,l,c,d,t,i;

    cin>>t;

    while(t--)
    {

        cin>>n>>h>>m;
        l=1440;
        for(i=0;i<n;i++){  cin>>a>>b; if(  l>dd(h,m,a,b)  ){l=dd(h,m,a,b);} }
        hh(&h,&m,l);
        cout<<h<<" "<<m<<"\n";
    }

    return 0;
}
