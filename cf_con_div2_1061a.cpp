#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,t,i,n,m;
    cin>>t;
    while(t--)
    {

        cin>>n;
        a=0;
        while(n>2){

            b=n/3;
            a=a+b;
            //if(n%3>0){b++;}
            b=b+n%3;
            n=b;

        }
        cout<<a<<"\n";

    }

    return 0;
}
