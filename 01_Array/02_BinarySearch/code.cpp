#include<bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int n, int key) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == key) {
            cout <<"Found at index: " <<mid <<endl;
            return;
        }

        else if(arr[mid] < key) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    cout <<"Not Found" <<endl;
}

int main() {
    int even[8] = {2,3,4,5,6,7,8,9};
    int odd[5] = {2,3,4,5,6};

    int key1,key2;
    cin >>key1 >>key2;

    binarySearch(even,8,key1);
    binarySearch(odd,5,key2);

    return 0;
}