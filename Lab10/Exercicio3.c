#include <stdio.h>

int mul(int a, int b) {
    int a_abs = a > 0 ? a : -a;
    int b_abs = b > 0 ? b : -b;

    if (a_abs < b_abs) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (b == 0) {
        return 0;
    }
    if (b > 0) {
        return a + mul(a, b - 1);
    }
    return -a + mul(a, b + 1);
}

int main() {
    printf("Q3: 5 * 4 = %d\n", mul(5, 4));
    printf("Q3: 5 * (-4) = %d\n", mul(5, -4));
    printf("Q3: (-5) * 4 = %d\n", mul(-5, 4));
    printf("Q3: (-5) * (-4) = %d\n", mul(-5, -4));
    printf("Q3: 7 * 0 = %d\n", mul(7, 0));
    printf("Q3: 0 * 7 = %d\n", mul(0, 7));
    
    return 0;
}