#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 10
int main(){
    int led_verde = 1;
    int led_rosso = 2;
    int led_giallo = 3;
    char scelta;
    while(scelta != 'q' || scelta !='Q')
    printf("scegli cosa vuoi inserire  comando ‘v’ -> 10 lampeggi del led verde ad intervalli di 0.3 sec\n comando ‘r’ -> 10 lampeggi del led rosso ad intervalli di 0.7 sec\n comando ‘g’ -> 10 lampeggi del led giallo ad intervalli di 1.2 sec\n comando ‘q’ -> chiusura del programma");
    scanf("%c",&scelta);
    int pid = fork ();
    if(pid == 0){
        if(scelta == 'v' || scelta == 'V'){
            for(int i=0; i<N;i++){
                printf("led verde :acceso");
                sleep(0.3);
                printf("led verde: spento");
            }
        }
        else if(scelta= 'r'|| scelta== 'R'){
              for(int i=0; i<N;i++){
                printf("led rosso :acceso");
                sleep(0.3);
                printf("led rosso: spento");
                }

        }
         else if(scelta= 'g'|| scelta == 'G'){
              for(int i=0; i<N;i++){
                printf("led giallo :acceso");
                sleep(0.3);
                printf("led giallo: spento");
                }

            }
        }
    }
    }