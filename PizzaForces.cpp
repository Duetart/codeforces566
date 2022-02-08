#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
       long long n;
       cin>>n;
       long long x=6;
       cout<<max(x,n+1)/2*5<<endl;
    }
 
    return 0;
}
