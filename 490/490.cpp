#include <bits/stdc++.h>
using namespace std;
int main(){
	string line[101];
	int i=0,M=0;
	string tep;
	while(getline(cin,line[i])&&line[i].length()>0){
		//cout<<line[i]<<endl;
		int temp=line[i].length();
		M=max(M,temp);
		//cout<<M<<endl;
		i++;
	}
	for(int n=0;n<M;n++){
		for(int m=i-1;m>=0;m--){
			if(line[m].length()>n)cout<<line[m][n];
			else cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}
