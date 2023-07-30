#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b);

void swap(int *a, int *b) {
    int temp = a; // Use a temporary variable to hold the value of c
    a =b;
    *b = temp;
}


int main(){
    int x = 10;
    int y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);// Call the swap function, passing the addresses of 'x' and 'y'

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
