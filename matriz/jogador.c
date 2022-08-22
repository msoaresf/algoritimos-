/*
01- Criar um algoritmo que possa armazenar as alturas de dez atletas de cinco delegações que 
participarão dos jogos de verão. Imprimir a maior altura de cada delegação.
*/

#include <stdio.h>

int main()
{
    float alturas[5][10],maiorAltura = 0, maioresAlturas[5];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Informe do atleta %d da delegacao %d: ",j,i);
            scanf("%f",&alturas[i][j]);
        }
        printf("\n------------------------------------------------------------------------\n");
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            if (alturas[i][j] > maiorAltura) {
                maiorAltura = alturas[i][j];
            }
        }
        maioresAlturas[i] = maiorAltura;
        maiorAltura = 0;
    }
    
    printf("\n");
    
    for (int i = 0; i < 5; i++) {
        printf("A maior altura da delegacao %d e = %.2f\n",i,maioresAlturas[i]);
    }
    
    
}
