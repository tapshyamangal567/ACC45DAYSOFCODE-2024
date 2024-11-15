#include <stdio.h>

// Function to calculate total duration for a test case
int calculate_duration(int N, int A, int B) {
    // Number of odd-indexed episodes
    int odd_count = (N + 1) / 2;
    // Number of even-indexed episodes
    int even_count = N / 2;
    // Total duration
    return odd_count * B + even_count * A;
}

int main() {
    int T;
    // Read the number of test cases
    scanf("%d", &T);

    // Process each test case
    for (int i = 0; i < T; i++) {
        int N, A, B;
        // Read N, A, B for this test case
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate and print the result for the current test case
        printf("%d\n", calculate_duration(N, A, B));
    }

    return 0;
}

