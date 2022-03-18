#include<bits/stdc++.h>
using namespace std;
int main(){
string as;
cin>>as;
int a=0,b=0,c=0;
for(int i=0;i<as.length();i++){
	if(as[i]=='+'){

	}
	else{
		if(as[i]=='1'){
			++a;
		}
		else if(as[i]=='2'){
			++b;
		}
		else{
			++c;
		}
	}
}
//cout<<as<<" ";
string s="";
while(c>0 || b>0 || a>0){
	//cout<<a<<b<<c<<endl;

	if(a>0){
		if(b==0 && c==0){
			if(a>1){
				s+="1+";
			}
			else{
				s+="1";
			}
			--a;
		}
		else{
			s+="1+";
		--a;
		}

	}
	else if(b>0){
		if(c==0){
			if(b>1){
				s+="2+";
			}
			else{
				s+="2";
			}
			--b;

		}
		else{
			s+="2+";
		--b;
		}
		
	}
	else{
		if(c>1){
			s+="3+";
		}
		else{
			s+="3";
		}
		--c;
	}
}
cout<<s;

	return 0;}