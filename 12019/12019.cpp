#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	int doo[]={0,10,21,7,4,9,6,11,8,5,10,7,12};
	string week[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	cin>>N;
	while(N--){
		int M,D;
		cin>>M>>D;
		if(D%7<doo[M]%7){
			D=D%7+7;
		}
		//cout<<D<<" "<<doo[M]%7<<endl;
		cout<<week[(D-doo[M]%7)%7]<<endl;
		//cout<<M<<D<<N<<endl;
	}
	return 0;
}
