#include<bits/stdc++.h>
using namespace std;
vector<int> sieve(int n){
	vector<int> prime(n+1,1);
	for(int i=2;i*i<=n;i++){
		if(prime[i]==1){
			for(int j=i*i;j<=n;j+=i){
				prime[j]=0;
			}
		}
	}
	// cout<<prime.size();
	// for(int i=0;i<prime.size();i++){
	// 	cout<<prime[i]<<" ";
	// }
	return prime;
}
const int N=0;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> ans=sieve(m);
	int flag;
	// for(int i=0;i<ans.size();i++){
	// 	cout<<ans[i]<<" ";
	// }
	for(int i=ans.size()-2;i>=0;i--){
		if(ans[i]){
			flag=i;
			break;
		}
	}
	if(ans.size()>1 && ans[ans.size()-1]==1 && flag==n){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
