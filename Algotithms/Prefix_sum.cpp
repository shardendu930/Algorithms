#include<iostream>
using namespace std;

void print_arr(int *, int);
void prefix_sum(int *, int*, int);

// Driver Code
int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)  cin >> arr[i];
    
    int *pref_sum = new int[n];
    prefix_sum(pref_sum, arr, n);

    print_arr(arr, n);
    print_arr(pref_sum, n);
    delete arr;
    delete pref_sum;
    return 0;
}

// calculating prefix sum of an array of size n;
void prefix_sum(int * pref_sum, int *arr, int n){
    for(int i = 0; i < n; i++)
        pref_sum[i] = (i == 0) ? arr[0] : (pref_sum[i - 1] + arr[i]);
}

// printing array (arr) of size n;
void print_arr(int *arr, int n){
    for(int i = 0; i < n; i++)  cout << arr[i] << " ";
    cout << "\n";
}