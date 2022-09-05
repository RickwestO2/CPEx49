#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long x,y;
	while(cin>>x>>y){
		//cout<<"x: "<<x<<" y: "<<y<<endl;
		if(y>x)x=y-x;
		else x=x-y;
		cout<<x<<endl;
	}
	
	
	return 0;
}
