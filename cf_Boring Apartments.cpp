#include<bits/stdc++.h>

using namespace std;
int count_digits(int a)
{

    int c;
    c=0;

    while(a>0){ a=a/10; c++; }

    return c;
}
int n_th(int n)
{
    n=(n*(n+1))/2;

    return n;
}
int at_num(int a){

    int k=a%10;
    return k;
}
int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=n_th(4)*(at_num(n)-1);
        a=a+(n_th(count_digits(n)));
        cout<<a<<"\n";

    }


    return 0;
}
