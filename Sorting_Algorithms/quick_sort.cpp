#include<bits/stdc++.h>
using namespace std;

int partition(int * arr,int n){

    int pivot = arr[0];
    int c=0;
    
    for(int i=1;i<n;i++){
        if(arr[i]<pivot) c++;
    }

    arr[0]=arr[c];
    arr[c]=pivot;

    int i=0;
    int j=n-1;

    while(i<c && j>c){
        
        if(arr[i]<pivot) i++;
        
        else if(arr[j]>=pivot) j--;
        
        else{
            int temp = arr[i];
            arr[i++]=arr[j];
            arr[j--]=temp;
        }
    }

    return c;
}

void quickSort(int input[], int size) {
	
	if(size<2) return;
	
    int pivot;
    
    pivot=partition(input,size);

	quickSort(input,pivot);
    quickSort(input+pivot+1,size-pivot-1);
}

int main(){
	int size ;
	cin>>size;
	int * input = new int[size];
	for(int i=0;i<size;i++){
		cin>>input[i];
	}
	quickSort(input,size);
	for(int i=0;i<size;i++) {
		cout<<input[i]<<" ";
	}
	delete [] input;
}
