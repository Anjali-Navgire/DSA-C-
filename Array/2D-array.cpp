#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
	}
	cout<<" \n";
	return 0;
}
