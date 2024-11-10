#include <stdio.h>


int is_cyclic_quadrilateral(int A, int B, int C, int D) {
    
    return (A + C == 180 && B + D == 180);
}

int main() {
    int T;  
    scanf("%d", &T);  
    
    
    for (int i = 0; i < T; i++) {
        int A, B, C, D;
        
        scanf("%d %d %d %d", &A, &B, &C, &D);
        
        
        if (is_cyclic_quadrilateral(A, B, C, D)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}

