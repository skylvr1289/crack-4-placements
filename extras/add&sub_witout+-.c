#include <stdio.h>

int add(int a, int b) {
     int c;
     c = ((a & b) << 1);
    return b==0?a:add(a^b,c);
}

int sub(int a, int b) // add a with b's 2's complement.
{
    return (add(a, add(~b, 1)));
}

int main() {
    int a, b, res;
    a = 3, b = 1;
    res = sub(a, b);
    printf("%d\n", res);
    return 0;
}
