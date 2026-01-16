#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int t,i,j,k,l,m,n,o,p;
    cin>>t;
    while(t--)
    {

        cin>>a>>l>>b>>m;

         if(a.size()+l>b.size()+m){ cout<<">\n"; }
        else if(a.size()+l<b.size()+m){ cout<<"<\n"; }
          else{

            o=a.size();
            if(b.size()>o){o=b.size();}

            if(a.size()<o){ for(i=a.size();i<o;i++){a[i]='0';} a[i]='\0'; }
            if(b.size()<o){ for(i=b.size();i<o;i++){b[i]='0';} b[i]='\0'; }

            p=0;
            for(i=0;i<o;i++){ if(a[i]>b[i]){p=1; break;}if(a[i]<b[i]){p=-1; break;} }

            if(p==0){ cout<<"=\n";  }
            else if(p==1){ cout<<">\n";}
            else{ cout<<"<\n";  }
          }


    }

    return 0;
}
