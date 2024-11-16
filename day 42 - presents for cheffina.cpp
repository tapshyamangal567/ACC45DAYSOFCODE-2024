#include <stdio.h>

int minimum_coins(int N) {
    return (N / 5) * 4 + (N % 5);
}

int main() {
    int T, N;
    
    
    scanf("%d", &T);
    

    for (int i = 0; i < T; i++) {
        
        scanf("%d", &N);
        
        
        printf("%d\n", minimum_coins(N));
    }
    
    return 0;
}

