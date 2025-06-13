#include<iostream>
using namespace std;
void mergeSort(int arr[] , int l , int mid , int r){
	int n1 = mid-l+1;
	int n2 = r-mid;
	
	int a[n1];
	int b[n2];
	for(int i=0;i<n1;i++){
		a[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++){
		b[i]=arr[mid+l+i];
	}
	int i=0;
	int j=0;
	int k=l;
	while(i<n1 && j<n2){
		if(a[i]<b[j]){
			arr[k]=a[i];
			k++; i++;
		}
		else{
			arr[k]=b[j];
			k++; j++;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<mergeSort[i]<<" "<<endl;
	}
	return 0;
}
