#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for(int i = 0 ; i < size ; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[10] = {-1,2,34,54,21,-12,35,56,677,-22};
    int key;
    cin >>key;

    int found = linearSearch(arr,10,key);

    if(found != -1) {
        cout <<"Found at index: " <<found;
    }
    else {
        cout <<"Not found";
    }
    return 0;
}