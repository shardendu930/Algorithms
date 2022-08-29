#include<iostream>
using namespace std;

//Kadane’s algorithm
//time complexity is O(n)

int maxSubarraySum(int *arr, int n){
    int best = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(arr[k],sum+arr[k]);
        best = max(best,sum);
    }
    return best;
}

int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    int max_subarray_sum = maxSubarraySum(a, n);
    cout << "Max subarray Sum = " << max_subarray_sum;
    return 0;
}
