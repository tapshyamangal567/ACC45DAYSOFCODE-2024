#include <stdio.h>
#include <stdlib.h>

int minFlipsToMakeZeroSum(int n, int *arr) {
    int sum = 0;
    
    // Calculate the initial sum of the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    // If the sum is already zero, no flips are needed
    if (sum == 0) {
        return 0;
    }
    
    // If the sum is odd, we cannot make it zero (sum needs to be even to be reduced to zero)
    if (abs(sum) % 2 != 0) {
        return -1;
    }

    // Calculate the minimum number of flips
    int flips = abs(sum) / 2;
    return flips;
}

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Length of array
        
        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d",
