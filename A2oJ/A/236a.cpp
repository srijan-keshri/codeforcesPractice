#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	map<char,int> m;
	cin >>s;
	for(int i=0;i<s.length();i++){
		++m[s[i]];
	}
	int ans=0;
	for(auto x:m){
		++ans;
	}
	if(ans%2==1){
		cout<<"IGNORE HIM!";
	}else{
		cout<<"CHAT WITH HER!";
	}
	
}