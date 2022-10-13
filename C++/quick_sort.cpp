#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void swap(int* a, int* b){int t=*a;*a=*b;*b=t;}//To swap

int partition(int arr[],int low,int high)//This shifts elements by comparing to pivot
{
	int pivot=arr[high];
	int i=(low-1); 
	for (int j=low;j<=high-1;j++){
        if (arr[j]<pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}
void quickSort(int arr[], int low, int high)//This runs the main sorting program
{
	if (low<high) {
		int pi=partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}
int main()
{
	int arr[]={10,7,8,9,1,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	cout<<"Sorted array:\n";
    for (auto itr:arr){
		cout<<itr<<" ";
    }
	cout<<endl;
	return 0;
}