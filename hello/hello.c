<<<<<<< HEAD
#include <stdio.h>

int main(){
    printf("Hello World\n");
=======
#include "./libhello.h"


int main(int argc, char **argv){
    int i = 0;
    for(i = 1; i < argc; i++) {
        printHello(argv[i]);
    }
>>>>>>> e67aaef57789f772e3129b7cc27fe486676bba7a
    return 0;
}