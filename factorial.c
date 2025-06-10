#include <stdio.h>

int factn(int n) { 
    int fact1 = 1;
    for(int i = 1; i <= n; i++) {
        fact1 *= i;
    }
    return fact1;
}

int factr(int r) { 
    int fact2 = 1;
    for(int i = 1; i <= r; i++) {
        fact2 *= i;
    }
    return fact2;
}

int factnr(int s) { 
    int fact3 = 1;
    for(int i = 1; i <= s; i++) {
        fact3 *= i;
    }
    return fact3;
}

int main() {
    int n, r, f, res;
    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);
    

    f = n - r;
    res = factn(n) / (factnr(f) * factr(r));
    printf("The value of C(n, r) is = %d\n", res);
    return 0;
}
