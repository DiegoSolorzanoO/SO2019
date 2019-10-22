#include <stdio.h>

// Imprime los números del 2 al 100
int main(int argc, char* argv[]) {
    for (int i = 2; i < 101; i++) {
        printf("%d\n", i);
    }
    // Cuando acaba imprime -1
    printf("%d\n", -1);
}