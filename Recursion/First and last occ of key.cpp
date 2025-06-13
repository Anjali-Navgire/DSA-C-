#include<iostream>
using namespace std;

//n=size of array
//i=starting index
//key
//First occurance of key
int firstocc(int arr[] , int n , int i , int key){
	if(i==n){
		return -1;
		
	}
	if(arr[i]==key){
		return i;
	}
	return firstocc(arr , n , i+1 , key);
}

//Last occurance of key 
int lastocc(int arr[] , int n , int i , int key){
	int restarray=lastocc(arr ,n ,i+1,key);
	if(restarray!=-1){
		return restarray;
	}
	if(arr[i]=key){
		return i;
	}
	return -1;
}

int main(){
	int arr[]={4,2,1,2,5,2,7,5};
	cout<<"First occurance of 2 is : "<<firstocc(arr , 7 , 0 , 2)<<endl;
	cout<<"Last occurance of 2 is : "<<lastocc(arr , 7 , 0 , 2)<<endl;
	return 0;
}
