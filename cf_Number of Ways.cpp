#include<bits/stdc++.h>
using namespace std;

int f(int n,int c){
int v;
v=0;
if(n==c){v=1;}
else if(n>c){v=0;}
else{

    v=v+f(n+1,c);
    v=v+f(n+2,c);
    v=v+f(n+3,c);

}

return v;
}

int main()
{
    int n,c;
    cin>>n>>c;
    cout<<f(n,c);

    return 0;
}
