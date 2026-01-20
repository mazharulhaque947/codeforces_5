#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[200],b[200],i,j,k,o,l,t,m,n,s,v;
    cin>>t;
    while(t--)
    {

        cin>>n;
        s=0;
        for(i=0;i<n;i++){cin>>a[i];s+=a[i];}
        o=0;
        if(a[0]<0){o=1;}
        m=0;
        l=0;
        k=o;

        for(i=0;i<n;i++){
           v=0;
        if(a[i]<0){v=1;}

        if(v==k){m++;}
         else{ b[l]=m;m=1;l++;k=v; }
          if(i==n-1){ b[l]=m;l++;  }
        }
       /*

            */
            m=0;
            if(l==1){ if(o==0){m=-4;} else{ m=4;}}
            else{

                 i=0;
        if(o==0){ i++;  }
        for(;i<l;i+=2){ if(b[i]>1){m=4; break;} }

            }


        cout<<s+m<<"\n";
    }

    return 0;
}
