#include <stdio.h>
#include <math.h>  // For ceil function

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y, R;
        scanf("%d %d %d", &X, &Y, &R);
        
        // Calculate the number of extra sticks Chef ate
        int extra_sticks = R / 30;
        
        // Total mozzarella sticks Chef ate
        int total_sticks = X + extra_sticks;
        
        // Calculate the number of plates Chef could have ordered
        // We use (total_sticks + Y - 1) / Y to compute the ceiling of total_sticks / Y
        int plates = (total_sticks + Y - 1) / Y;
        
        // Output the result
        printf("%d\n", plates);
    }
    
    return 0;
}

