#include <stdio.h>
int main() 
{
    FILE* file1 = fopen("numeri.txt", "r");
    FILE* file2 = fopen("pari.txt", "w");
    FILE* file3 = fopen("dispari.txt", "w");


    if (file1 == NULL ) 
    {
        perror("Errore durante l'apertura del file");
        return 1;
    }
     
    int po; 
    while (fscanf(file1, "%d", &po) != EOF) 
    {
        if (po % 2 == 0) 
        {
            fprintf(file2, "%d ", po); 
        } 
        else 
        {
            fprintf(file3, "%d ", po); 
        }
    }
    


    fclose(file1);
    fclose(file2);
    fclose(file3);


    return 0;
}