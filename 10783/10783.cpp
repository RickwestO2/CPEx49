#include <bits/stdc++.h>
using namespace std;
int main(){
	int T,c=1;
	cin>>T;
	while(T--){
		int a,b,v=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			if(i%2!=0)v+=i;
		}
		cout<<"Case "<<c<<": "<<v<<endl;
		c++;
	}
	return 0;
}
