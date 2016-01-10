#include <stdlib.h>
int N;
void callback() {
    static int n = 1;
    if (n <= N)
        printf("%d\n", n++);
}

int main() {
    scanf("%d",&N);
    char *buf;
    /* get N value here */

    buf = malloc(N);  // could be less than N, but N is definitely sufficient
    qsort(buf, N, 1, callback);
}
