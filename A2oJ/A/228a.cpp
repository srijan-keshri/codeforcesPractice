#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,c,b,d;
	cin>>a>>b>>c>>d;
	map<int,int> m;
	int ans=0;
	++m[a];
	++m[b];
	++m[c];
	++m[d];
	for(auto x:m){
		++ans;
		//cout<<x.second;
	}
	cout<<4-ans;
}