#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n) {
    for(int i = 0 ; i < n ; i++) {
        cout <<arr[i] <<" ";
    }
    cout <<endl;
}

void swapAlternate(int arr[], int n) {
    for(int i = 0 ; i < n-1 ; i+=2) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main() {
    int even[10] = {1,2,3,4,5,6,7,8,9,10};
    int odd[5] = {1,2,3,4,5};

    swapAlternate(even,10);
    swapAlternate(odd,5);

    printArray(even,10);
    printArray(odd,5);
    return 0;
}