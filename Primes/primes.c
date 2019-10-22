#include <stdio.h>

int main(int argc, char* argv[]) {
    int left;
    scanf("%d", &left);
    fprintf(stderr, "%d\n", left);
    int n;
    scanf("%d", &n);
    // Itera sobre todos los números para encontrar y filtrar el primo
    while (n != -1) {
        if (n % left != 0) {
            fprintf(stdout, "%d\n", n);
        }
        scanf("%d", &n);
    }
    printf("%d\n", -1);
}