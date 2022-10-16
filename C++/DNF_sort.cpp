#include <iostream>
using namespace std;

/*
    Nitin Garg
    Date Modified: 15th oct 2022
*/

// Dutch National Flag (DNF) sort is a sorting technique for sorting array having only values 0,1,2

void swap(int *arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void DNFSort(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++;
            mid++;
        } else if(arr[mid]==1){
            mid++;
        } else{
            swap(arr,mid,high);
            high--;
        }
    }
}

int main(){
    int arr[] = {1,2,0,1,2,0,1,2,1,1,0,0,0,2};
    int n = sizeof(arr)/sizeof(int);
    DNFSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}