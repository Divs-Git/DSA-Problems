#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n) {
    for(int i = 0 ; i < n ; i++) {
        cout <<arr[i] <<" ";
    }
    cout <<endl;
}

void reverseArray(int arr[],int n) {
    int start = 0;
    int end = n - 1;
    while(start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printArray(arr,n);
}

int main() {
     int even[10] = {-1,2,34,54,21,-12,35,56,677,-22};
     int odd[5] = {10,20,-10,23,98};
     reverseArray(even,10);
     reverseArray(odd,5);
    return 0;
}