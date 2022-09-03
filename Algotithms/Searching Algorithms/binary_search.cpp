#include<iostream>
using namespace std;

// algorithm to search data in ascending order arranged array
int binary_search_asc(int *arr, int len, int key){
    int start = 0, mid, end = len - 1;
    while(end >= start){
        mid = start + ((end - start) / 2);
        if(arr[mid] == key) return mid;
        else if(key < arr[mid])  end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

// algorithm to search data in descending order arranged array
int binary_search(int *arr, int len, int key){
    int start = 0, mid, end = len - 1;
    while(end >= start){
        mid = start + ((end - start) / 2);
        if(arr[mid] == key) return mid;
        else if(key > arr[mid])  end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int main(){
    int len, key;
    cout << "Enter length of array : ";
    cin >> len;
    int *arr = new int(len);
    cout << "Enter elements in array : ";
    for(int i = 0; i < len; i++)    cin >> *(arr + i);
    cout << "Enter element to find : ";
    cin >> key;
    int index = binary_search(arr, len, key);
    if(index == -1) cout << "Element not found.";
    else cout << "Element found at index " << index;
}