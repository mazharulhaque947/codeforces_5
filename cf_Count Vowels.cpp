#include<bits/stdc++.h>

using namespace std;
int v(char q[],int n,int i){
int o;
o=0;
if(q[i]=='a'||q[i]=='e'||q[i]=='i'||q[i]=='o'||q[i]=='u'q[i]=='A'||q[i]=='E'||q[i]=='I'||q[i]=='O'||q[i]=='U'){o=1;}
if(i+1<n){return o+v(q,n,i+1);}
else{return o;}
}
int main()
{
    int n,m,o,l,u;
    char a[2001];
    gets(a);
    n=strlen(a);
    cout<<v(a,n,0);

    return 0;
}
