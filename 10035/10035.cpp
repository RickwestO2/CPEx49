#include <bits/stdc++.h>
using namespace std;
int main(){
	string x,y;
	while(cin>>x>>y){
	if(x[0]=='0'&&y[0]=='0')break;
	int i=x.size()-1;
	int j=y.size()-1;
	int c=0,ans=0;
	while(i>=0||j>=0){
		int n=x[i]-'0';
		int m=y[j]-'0';
		if(i<0)n=0;
		if(j<0)m=0;
		if((n+m+c)>9){
			ans++;
			c=1;
		}
		else c=0;
		i--;j--;
	}
		if(ans==1)cout<<ans<<" carry operation."<<endl;
		else if(ans>1)cout<<ans<<" carry operations."<<endl;
		else cout<<"No carry operation."<<endl;
	}
	return 0;
}
