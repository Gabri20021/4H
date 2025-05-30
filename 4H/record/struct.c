#include <stdio.h>
#include <string.h>
#define N 4

typedef struct data{
    int giorno;
    char mese[20];
    int anno;
}data;

typedef struct persona{
    char cognome[20];
    data nascita;
    int voti[N];
}persona;

int main(){
    persona pippo, topolino;
    int i;
    int anni, media;
    int somma=0;
    printf("inserisci il cognome\n");
    scanf("%s",pippo.cognome);
    printf("inserisci il giorno di nascita\n");
    scanf("%d",&pippo.nascita.giorno);
    printf("inserisci il mese di nascita\n");
    scanf("%s",pippo.nascita.mese);
    printf("inserisci l'anno di nascita\n");
    scanf("%d",&pippo.nascita.anno);
    
    printf("inserisci i voti: ", N);
    for( i=0;i<N;i++)
    {
        scanf("%d",&pippo.voti[i]);
        somma += pippo.voti[i];
    }
    printf("il cognome dello studente è: %s\t", pippo.cognome);
    printf("il giorno di nascita dello studente è: %d\t", pippo.nascita.giorno);
    printf("il mese di nascita dello studente è: %s\t", pippo.nascita.mese);
    printf("l'anno di nascita dello studente è: %d\t", pippo.nascita.anno);
    
     for( i=0;i<N;i++)
    {
    printf("%d\t",pippo.voti[i]);
    }
    printf("\n");
    
    anni = 2025-pippo.nascita.anno;
    printf("eta = %d\t",anni);
    
    media = somma/ N;
    printf("la media è: %d",media);
    }
    