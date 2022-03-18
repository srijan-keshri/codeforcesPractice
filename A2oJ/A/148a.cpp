#include<bits/stdc++.h>
using namespace std;

const int N=0;
int main(){
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	vector<int> v(d+1,1);
	vector<int> temp={k,l,m,n};
	for(int i=0;i<temp.size();i++){
		for(int j=temp[i];j<=d;j+=temp[i]){
			v[j]=0;
		}
	}
	int sum=0;
	for(int i=1;i<v.size();i++){
		sum+=v[i];
	}
	cout<<d-sum;
	return 0;
}
