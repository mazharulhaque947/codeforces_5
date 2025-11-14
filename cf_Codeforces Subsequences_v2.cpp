
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[10],n,m,k,l,p,j,i,b[11],w;
    char v[11]="codeforces";
    cin>>n;

    l=0;
    p=-1;
    while(  pow( (l+1),10 )<=n){l++; if(pow( (l+0),10 )==n){p=0;} }
    if(p==-1){

        k=n/pow( (l+0),10 );
        if(k*pow( (l+0),10 )==n){} else{k++;}

       /*p=2;
        for(i=2;i<11;i++){ m=1; while( pow(i,m)<k ){m++;} b[i]=m; if(b[i]>b[p]){p=i;}  }
        for(i=2;i<11;i++){ if(b[i]==b[p]){ p=i;j=b[i]; break; }  }
         for(i=0;i<10;i++){ a[i]=l;} ;

         for(i=0;i<j;i++){ a[i]=a[i]+p-1;  }
         */
         w=0;

         while( (l+w)*(l+w)*l*l*l*l*l*l*l*l<n){w++;}

         if(l*k<2*(l+w)){   for(i=0;i<10;i++){ a[i]=l;} ;

         for(i=0;i<1;i++){ a[i]=k*l;  }    }
         else{

             for(i=0;i<10;i++){ a[i]=l;} ;

         for(i=0;i<2;i++){ a[i]=a[i]+w;  }    }

         }

    }
    else{        for(i=0;i<10;i++){ a[i]=l;}    }

    for(i=0;i<10;i++){
        for(j=0;j<a[i];j++){ cout<<v[i]; }

    }
    cout<<"\n";
    return 0;
}
