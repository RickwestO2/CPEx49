#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int x,y;
	while(cin>>x>>y){
		int max=0,i=x,j=y;
		if(x>y){i=y,j=x;}
		for(int n=j;n>=i;n--){
			int count=1;
			int temp=n;
			//cout<<temp<<" ";
			while(temp!=1){
				if(temp%2!=0){
					temp=3*temp+1;
				}
				else temp=temp/2;
				
				//cout<<temp<<" ";
				count++;
			}
			if(count>max)max=count;
			//cout<<endl;
		}
		cout<<x<<" "<<y<<" "<<max<<endl;
	}
	return 0;
}
