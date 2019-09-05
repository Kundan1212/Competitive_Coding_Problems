#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int mid,int size){
    int i=0;
    int j=mid;
    int temp[size];
    int k=0;
    while(i<mid&&j<size){
        
        if(arr[i]<arr[j]) temp[k++]=arr[i++];
        
        else temp[k++]=arr[j++];
    }
    
    while(i<mid) temp[k++]=arr[i++];
    
    while(j<size) temp[k++]=arr[j++];
    
    for(i=0,j=0;j<size;i++,j++) arr[i]=temp[j];
    
}

void mergeSort(int *input, int size){
    if(size==1){
        return;
    }
    int mid=size/2;
    mergeSort(input,mid);
    mergeSort(input+mid,size-mid);
    merge(input,mid,size);
}


int main(){
	int size ;
	cin>>size;
	int * input = new int[size];
	for(int i=0;i<size;i++){
		cin>>input[i];
	}
	mergeSort(input,size);
	for(int i=0;i<size;i++) {
		cout<<input[i]<<" ";
	}
	delete [] input;
}
