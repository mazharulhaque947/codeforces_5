#include<bits/stdc++.h>
using namespace std;

void s(int n){  if(n>0){cout<<"*";s(n-1);} }
void g(int n){  if(n>0){ cout<<" ";g(n-1);  }  }

void st(int n, int i){
   g(n-i);
   s(2*i-1);
   cout<<"\n";
   if(i<n){ st(n,i+1); }

}

int main()
{
    int n;
    cin>>n;
    st(n,1);

    return 0;
}
