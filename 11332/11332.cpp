#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long n;
	while(cin>>n){
		if(n==0)break;
		unsigned long long num=n;
		int ans=0;
		while(1){
			while(num>0){
				ans=ans+num%10;
				num/=10;
				//cout<<"ans: "<<ans<<" num: "<<num<<endl;
			}
			if(ans<10)break;
			else {num=ans;ans=0;}
			//cout<<"all: "<<ans<<endl;
		}
		cout<<ans<<endl;
			
	}
	return 0;
}
