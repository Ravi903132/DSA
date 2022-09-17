#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    string name;
    cin>>n;
    while(n-->0)
    {
        cin>>a;
        cin>>name;
       
            if(a==name.length())
            {
                if(name=="Timur" || name=="miurT" || name=="Trumi" || name=="mriTu")
                {
                    cout<<"YES"<<"\n";
                }
                else
                {
                    cout<<"No"<<"\n";
                }
            }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}