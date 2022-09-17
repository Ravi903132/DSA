#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,a,count=0;
    string x,y;
    cin>>n;
    while(n-->0)
    {
       cin>>a;
       cin>>x;
       cin>>y;
       if(a==x.length() && a==y.length())
       {
           for(int i=0;i<a;i++)
           {
               char c=x.at(i);
               char d=y.at(i);
               if((c==d) || (c=='G' && d=='B') || (c=='B' && d=='G')==true)
               {
                   count++;
               }
           }
       }
       else
       {
           cout<<"NO"<<"\n";
       }
       if(count==a)
       {
           cout<<"YES"<<"\n";
       }
       else
       {
           cout<<"NO"<<"\n";
       }
    }
}