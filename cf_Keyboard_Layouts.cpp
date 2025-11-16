#include<bits/stdc++.h>

using namespace std;
string a;
string b;

void ck(char c){
    int i,k,m,n;
    m=0;
    k=26;
    if(c>=97){

        for(i=0;i<k;i++){ if(a[i]==c){ cout<<b[i];  break;  }  }

    }
    else if(c>=65){

         for(i=0;i<k;i++){   if(a[i]==c+32){  cout<<(char)toupper(b[i]); break; }    }

    }
    else{

        cout<<c;

    }
}

int main()
{


       int i,n,k,m;
       string d;
       cin>>a>>b>>d;
       m=d.size();
       for(i=0;i<m;i++){ ck(d[i]);  }
       cout<<"\n";

	return 0;

}
