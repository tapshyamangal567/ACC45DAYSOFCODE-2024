#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read the number of test cases
    
    // Process each test case
    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);  // Read the prices of the three items
        
        // Calculate the total cost
        int total_cost = A + B + C;
        
        // Find the minimum price among A, B, and C
        int min_price = A;
        if (B < min_price) min_price = B;
        if (C < min_price) min_price = C;
        
        // Calculate the amount to pay after getting the lowest priced item for free
        int amount_to_pay = total_cost - min_price;
        
        // Output the result for this test case
        printf("%d\n", amount_to_pay);
    }

    return 0;
}

