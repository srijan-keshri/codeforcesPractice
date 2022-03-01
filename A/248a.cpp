#include<bits/stdc++.h>
using namespace std;
 
const int N=0;
// void init_code(){
// 	#ifndef ONLINE_JUDGE
	
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
	
// 	#endif
// }
int main(){
	
	int n;
	cin>>n;
	vector<int> l(n);
	vector<int> r(n);
	int ll=0,rr=0;
	for(int i=0;i<n;i++){
		cin>>l[i];
		cin>>r[i];
		ll+=l[i];
		rr+=r[i];
	}
	int t=0;
	if(2*ll>n){
		//open the left 
		t+=n-ll;
	}
	else{
		t+=ll;
	}

	if(2*rr>n){
		//open the right 
		t+=n-rr;
	}
	else{
t+=rr;
	}
	cout<<t;

	return 0;
}
