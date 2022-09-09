#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	while(cin>>N){
		int value[3500]={0};
		int x,temp=0,NJ=0;
		for(int i=0;i<N;i++){
			cin>>x;
			if(i!=0){
				if(abs(temp-x)>=N)NJ=1;
				else{
					value[abs(temp-x)]++;
					if(value[abs(temp-x)]>1||value[abs(temp-x)]==0)NJ=1;
				}
			}
			temp=x;
		}
		if(NJ)cout<<"Not jolly"<<endl; 
		else cout<<"Jolly"<<endl;
	}
	return 0;
}
