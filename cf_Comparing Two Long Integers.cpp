#include<bits/stdc++.h>

using namespace std;

int main()
{   string a,b;
int n,m,o,p,i,j;

    cin>>a>>b;

    while(a.size()>0){
         if(a[0]=='0'){ a.erase(0,1); }
         else{ break ;}

    }
    while(b.size()>0){
         if(b[0]=='0'){ b.erase(0,1); }
         else{ break ;}

    }
   // cout<<a<<"  "<<b;
    if(a.size() != b.size()){

         if(a.size()>b.size()){ cout<<">\n"; }
         else {  cout<<"<\n"; }

    }
    else{

       m=0;
       //for(i=0;i<a.size();i++){ if(a[i]>b[i]){m=1; break;} else if(b[i]>a[i]){ m=-1; break; } }
        m=a.compare(b);
        if(m==0){ cout<<"=\n"; }
        else if(m>0){   cout<<">\n";  }
        else {  cout<<"<\n"; }
    }

    return 0;
}
