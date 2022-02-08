#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 int t;
    cin>>t;
    while(t--)
    {
        long long n,one=0,zero=1;
         cin>>n;
         for(int i=0;i<n;i++)
         {
             int x;
             cin>>x;
             if(x==1){
                 one++;}
             else if(x==0){
                 zero=zero*2;}
         }
         cout<<zero*one<<endl;
    }
}