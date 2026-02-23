#include<bits/stdc++.h>
using namespace std;

int main()

{

    int a[26],i,j,k,l,m,n,t;
    string b;
    cin>>n;
    cin>>b;
    m=0;

    for(i=0;i<26;i++){a[i]=0;}
    for(i=0;i<2*n-2;i+=1){ j=b[i]; if(j<97){ j=j-65; }else{ j=j-97;} //cout<<j<<" ";
      if(i%2==0){// cout<<"read\n";
 a[j]++; }else{   if(a[j]<=0){ //cout<<"no\n";
m++; }else{//cout<<"yes\n";
a[j]--; } }    }
    cout<<m<<"\n";
    return 0;

}

