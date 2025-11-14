#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main()
{
    string a[]={"Power","Time","Space ","Soul","Reality","Mind"};
    string b[]={"purple","green","blue","orange","red","yellow"},d;
     int c[6],r[6],i,k,l,m,j,n;
     cin>>n;
     k=0;
     for(i=0;i<n;i++){  cin>>d ; for(j=0;j<6;j++){ if(d.compare(b[j])==0){ c[k]=j; ;k++; break; } } }
     l=0;


     for(i=0;i<6;i++){ m=i; for(j=0;j<k;j++){ if(i==c[j]){ m=-1; break; }   } if(m!=-1){ r[l]=m; l++; } }
     cout<<l<<"\n";
     for(i=0;i<l;i++){ cout<<a[ r[i] ]<<"\n"; }



    return 0;
}
