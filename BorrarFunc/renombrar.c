#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc , char **argv){

    char *f1 = argv[1];
    char *f2 = argv[2];
    char *pwd = getcwd(NULL,0);
    char p1[strlen(f1)+strlen(pwd)+2];

    sprintf(p1,"%s/%s", pwd,f1);
    printf("path1 %s\n",p1);
    link(p1,f2);
    unlink(p1);
}