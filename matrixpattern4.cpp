#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int k=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<2*n;j++){
			if((i==j)||(i+j==2*n)){
				cout<<i<<" ";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

