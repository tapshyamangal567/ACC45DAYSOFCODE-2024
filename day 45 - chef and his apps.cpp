#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int S, X, Y, Z;
        scanf("%d %d %d %d", &S, &X, &Y, &Z);  // Read S, X, Y, Z for each test case
        
        // Calculate the remaining space after both apps are installed
        int availableSpace = S - (X + Y);
        
        if (availableSpace >= Z) {
            // No need to delete any apps
            printf("0\n");
        } else if ((S - X) >= Z || (S - Y) >= Z) {
            // Need to delete one app
            printf("1\n");
        } else {
            // Need to delete both apps
            printf("2\n");
        }
    }
    
    return 0;
}

