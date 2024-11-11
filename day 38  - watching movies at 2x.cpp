#include <stdio.h>

int main() {
    int X, Y;

    // Reading the input values X and Y
    scanf("%d %d", &X, &Y);

    // Calculating the total time spent watching the movie
    int total_time = (Y / 2) + (X - Y);

    // Output the result
    printf("%d\n", total_time);

    return 0;
}

