#include<stdio.h>
int main(){
    int torre,rainha,bispo;//Variáveis de cada peça


    //Movimento da Torre em For
    printf("Movimento da Torre (5 casas para a direita)\n");

    for ( torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }

    //Movimento da Rainha em do-while
    printf("Movimento da Rainha (8 casas para a esquerda\n");

    rainha = 0;
    
    do{
    printf("Esquerda\n");
    rainha++;
    }while(rainha < 8);

    //Movimento do Bispo em while
    printf("Movimento do bispo (5 casa na diagonal cima-direita\n");
    bispo = 0;
    while (bispo < 5)
    {
        printf("Cima-Direita\n");
        bispo++;
    }
    
    return 0;
}