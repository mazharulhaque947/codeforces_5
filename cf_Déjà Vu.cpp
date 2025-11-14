#include<bits/stdc++.h>
#include<string.h>

using namespace std;
bool is_palindrom(string a)
{

    int n = a.size(),i,m;
    bool b=true;
    m=n;
    n=n/2;
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[m-1-i]){ b=false; break;}
    }
    return b;


}

int main()
{

    int i,j,k,l,m,n,t;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(is_palindrom(a)){
          if(a.size()==count(a.begin(),a.end(),'a')){ cout<<"NO\n"; }
           else{   a.insert(0,"a"); cout<<"YES\n"<<a<<"\n";}
        }
        else{

            a.insert(0,"a");

           if( is_palindrom(a) ){ a.erase(0,1); a.insert(a.size(),"a"); }
           cout<<"YES\n"<<a<<"\n";

        }



    }


    return 0;
}
