#include<bits/stdc++.h>
using namespace std;
double s(int a[])
{

    double b,p;
    p=a[0]+a[1]+a[2];
    p=p/2;
   // if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){  p=a[0]*a[1]*.5; }else
    { p=sqrt(  p*(p-a[0])*(p-a[1])*(p-a[2]) );}
     cout<<p<<"\n";
    return p;

}
int main()
{
    int a[3],b,c,d,g,h,i,j;
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);


    if( a[2]<=a[0]+a[1]){cout<<"Valid\n"; cout<<s(a);}
    else{ cout<<"Invalid\n"; }

    return 0;
}

