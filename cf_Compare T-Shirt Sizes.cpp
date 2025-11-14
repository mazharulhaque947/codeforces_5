//Compare T-Shirt Sizes

#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[51],b[51];
    int t,j,i,k,l,n,m;

    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        k=l=0;
        for(i=0;i<strlen(a);i++){
                if(a[i]=='X'){  k++; }
                if(a[i]=='L'){ k++; k=k*1; }
                if(a[i]=='S'){ k++; k=k*-1; } }
         for(i=0;i<strlen(b);i++){
                if(b[i]=='X'){  l++; }
                if(b[i]=='L'){ l++; l=l*1; }
                if(b[i]=='S'){ l++; l=l*-1; } }


       if(k>l){cout<<">\n";}
       else if(l>k){ cout<<"<\n";  }
       else{ cout<<"=\n"; }
    }


    return 0;
}
