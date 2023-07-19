#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
	long long n; cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	long long right[n],left[n];
	right[n-1]=arr[n-1];
	left[0]=arr[0];
	long long ans=0;
	for(int i=1;i<n;i++)
		left[i]=max(left[i-1],arr[i]);
	for(int i=n-2;i>=0;i--)
		right[i]=max(right[i+1],arr[i]);
	for(int i=0;i<n;i++){
		ans+=(min(left[i],right[i])-arr[i]);
	}
	//for(int i=0;i<n;i++) cout<<right[i]<<" ";
	cout<<ans<<endl;
    return 0;
}