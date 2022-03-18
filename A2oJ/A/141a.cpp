#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	map<char,int> m1,m2;
	for(int i=0;i<s1.length();i++){
		++m1[s1[i]];
	}
	for(int i=0;i<s2.length();i++){
		++m1[s2[i]];
	}
	int flag=1;
	for(int i=0;i<s3.length();i++){
		
		++m2[s3[i]];
	}
	auto it =m2.begin();
	for(auto x:m1){
		if(x.first==it->first){
			if(x.second==it->second){

		}else{
			flag=0;
			break;
		}
		}
		else{
			flag=0;
			break;
		}
		++it;

	}
	if(it!=m2.end()){
		flag=0;
	}

	if(flag){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
    
}