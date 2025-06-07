#include<stdio.h>

int main(){

    char linha [10] = {'A', 'B','C', 'D','E', 'F','G', 'H','I', 'J'};
    int tabuleiro [10][10] = {
        { 0 , 0 , 0 , 0 , 3 , 3 , 3 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }

    };
 
    printf(" "); // Espaço para alinhar com as linhas
    for (int col = 1; col <= 10; col++) {
        printf("%2d", col);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", linha[i]);
        for (int j = 0; j < 10; j++)
        {
           
            printf("%2d", tabuleiro[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}