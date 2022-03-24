#include<bits/stdc++.h>
using namespace std;

const int N=0;
int main(){
	int n,k,l,c,p,d,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	//ammount of drink k*l
	// c*d pieces of lime
	// p is ammount of salt find 
	// np is ammount of salt needed 
	//cout<<n*np<<" "<<p<<" " ;
	if(n>c*d){
		cout<<"0";
	}
	else if(n*np>p){
		cout<<"0";
	}
	else if(nl*n>k*l){
		cout<<"0";
	}
	else{
		float a=c*d;
		a=a/n;
		float b=p;
		float temp1=n*np;
		b=b/temp1;
		float c=k*l;
		float temp2=nl*n;
		c=c/temp2;
		//cout<<a<<" "<<b<<" "<<c<<" ";
		int ans=min({a,b,c});
		cout<<ans;
	}
}