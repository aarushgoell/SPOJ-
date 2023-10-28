#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	unordered_map<int,int> mpp;
	int n;
	int i = 0;
	while(1){
		cin>>n;
		cout<<endl;
	if(mpp.find(42)!=mpp.end()){
		break;
	}
	mpp[n] = i;
	i++;
	if(n!=42){
		cout<<n;
	}
	}
	
	return 0;
}