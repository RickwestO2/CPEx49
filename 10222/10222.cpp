#include<bits/stdc++.h>
using namespace std;
int main(){
	string keyboard="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	string line;
	getline(cin,line);
	int i=0;
	while(i!=line.size()){
		if(line[i]==' '){cout<<" ";}
		for(int j=0;j<keyboard.size();j++){
			if(tolower(line[i])==keyboard[j])cout<<keyboard[j-2];
		}
		i++;
	}
	cout<<endl;
	return 0;
}
