#include <stdio.h>
int main() {
    float a;
    long int b;
    unsigned long int c;
    // Read input values
    scanf("%f %ld %lu", &a, &b, &c);
    // Print the values separated by space
    printf("%f %ld %lu\n",a,b,c);
    return 0;
}
