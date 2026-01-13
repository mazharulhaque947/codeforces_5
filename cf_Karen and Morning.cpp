#include<bits/stdc++.h>
using namespace std;

int is_palindrome(string a)
{

    if(a[0]==a[4]&&a[1]==a[3]){ return 1; }
    else{ return 0; }
}

int main()
{

    string a;
    int n,m,j,i,k,l;

    cin>>a;
    k=0;

    while(true){

       if(1==is_palindrome(a)){break;}

       k++;
       a[4]=a[4]+1;
       if(a[4]==48+10){ a[4]='0'; a[3]=a[3]+1; }
        if(a[3]=='6'){ a[4]=a[3]='0'; a[1]=a[1]+1; }
        if(a[1]==48+10){ a[1]='0'; a[0]=a[0]+1; }
        if(a[0]=='2'&&a[1]=='4'){ a[0]=a[1]='0'; }

        //cout<<a<<"\n";
    }
    cout<<k<<"\n";

    return 0;
}
