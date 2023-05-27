#include<bits/stdc++.h>
#include<string>
using namespace std;
string s,temp;
int a[305];
int main(){
	int i=0;
	while(cin>>temp){
		a[i]=temp.size();
		i++;
	}
	cout<<a[0];
	for(int i=1;i<300;i++){
		if(a[i]) cout<<','<<a[i];
	}
	return 0;
}
//bash!
