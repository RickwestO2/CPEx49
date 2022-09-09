#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	while(N--){
		unsigned long long s,d;
		cin>>s>>d;
		if(s<d){
			cout<<"impossible"<<endl;
			continue;
		}
		
		unsigned long long x=(s+d)/2;
		if((s+d)%2==0&&x>=0)cout<<x<<" "<<x-d<<endl;
		else cout<<"impossible"<<endl;
	}
	return 0;
}
	

