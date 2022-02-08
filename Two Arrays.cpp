#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1], arr2[n+1];
		for(int i=1;i<=n;i++){
		    cin>>arr[i];}
		for(int i=1;i<=n;i++){
		    cin>>arr2[i];}
		bool bo=1;
		sort(arr+1,arr+n+1);
		sort(arr2+1,arr2+n+1);
		for(int i=n;i>=1;i--){
		    if(arr[i]!=arr2[i]&&arr[i]!=arr2[i]-1){
			bo=0;
			break;
	    }}
	    if(bo){cout<<"Yes"<<endl;}
		else {cout<<"No"<<endl;}
    }
}
