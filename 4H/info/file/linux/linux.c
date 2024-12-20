#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int cateto1 = 3;
    int cateto2 = 4;
    int ipotenusa = 5;
    int pid=fork();
    if (pid == 0){
        printf("Perimetro(figlio): %d\n",cateto1+cateto2+ipotenusa);
    }else {
        printf("Area (padre): %d\n",(cateto1 * cateto2) /2);
    }
    return 0;
}