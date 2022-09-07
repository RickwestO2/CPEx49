#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	vector<int> ans;
	while(getline(cin,a)&&getline(cin,b)){
		for(int i=0;i<a.length();i++){
			for(int j=0;j<b.length();j++){
				if(a[i]==b[j]){
					ans.push_back(a[i]);
					b.erase(j,1);//important!!
					//cout<<a[i];
					break;
				}
			}
		}
		sort(ans.begin(),ans.end());
		for(int i:ans){
			printf("%c",i);
		}
		ans.clear();
		cout<<endl;
	}
	return 0;
}
