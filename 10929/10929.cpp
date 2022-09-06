#include <bits/stdc++.h>
using namespace std;
int main(){
	string num;
	while(cin>>num){
		if(num[0]=='0'&&num.size()==1)break;
		//cout<<num.size();
		int x=0,y=0;
		for(int i=0;i<num.size();i++){
			if(i%2==0){
				x=x+num[i]-'0';
			}
			else y=y+num[i]-'0';
		}
		if(abs(x-y)%11==0)cout<<num<<" is a multiple of 11."<<endl;
		else cout<<num<<" is not a multiple of 11."<<endl;
	}
}
