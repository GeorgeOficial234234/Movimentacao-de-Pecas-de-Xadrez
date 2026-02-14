#include <stdio.h>
#include <string.h>

int steps;

void posicao(char d[]){
    if (strcmp(d, "d") == 0){ //strcmp simplesmente compara a string. Caso fosse ((dir, "d") > 0) verificaria se a string vale "e"
     strcpy(d, "Direita");
    }
    if (strcmp(d, "a") == 0){
     strcpy(d, "Esquerda");
    }
    if (strcmp(d, "w") == 0){
     strcpy(d, "Cima");
    }
    if (strcmp(d, "s") == 0){
     strcpy(d, "Baixo");
    }
    if (strcmp(d, "wa") == 0 || strcmp(d, "aw") == 0){
     strcpy(d, "Cima + Esquerda");
    }
    if (strcmp(d, "wd") == 0 || strcmp(d, "dw") == 0){
     strcpy(d, "Cima + Direita");
    }
    if (strcmp(d, "sa") == 0 || strcmp(d, "as") == 0){
     strcpy(d, "Baixo + Esquerda");
    }
    if (strcmp(d, "sd") == 0 || strcmp(d, "ds") == 0){
     strcpy(d, "Baixo + Direita");
    }
}

void torre(char d[], int s){
    if (strcmp(d, "Cima + Direita") == 0 ||
        strcmp(d, "Cima + Esquerda") == 0 ||
        strcmp(d, "Baixo + Direita") == 0 ||
        strcmp(d, "Baixo + Esquerda") == 0)
        {
            printf("Torre não se move em diagonais\n\n");
            return;
        }
        if (s>0){
            printf("%s \n", d);
            torre(d, s-1);
        }
        if (s==steps){
            printf("Torre se moveu %d casas para %s \n\n", s, d);
        }
}

void rainha(char d[], int s){
    if (s>0){
            printf("%s \n", d);
            rainha(d, s-1);
        }
        if (s==steps){
            printf("Rainha se moveu %d casas para %s \n\n", s, d);
        }
}

void bispo(char d[], int s){
    if (strcmp(d, "Direita") == 0 ||
        strcmp(d, "Cima") == 0 ||
        strcmp(d, "Baixo") == 0 ||
        strcmp(d, "Esquerda") == 0)
        {
            printf("Bispo não se move em verticais ou horizontais\n\n");
            return;
        }
        if (s>0){
            printf("%s \n", d);
            torre(d, s-1);
        }
        if (s==steps){
            printf("Bispo se moveu %d casas para %s \n\n", s, d);
        }
}

void cavalo(char d[]){
    if (strcmp(d, "Direita") == 0 ||
        strcmp(d, "Cima") == 0 ||
        strcmp(d, "Baixo") == 0 ||
        strcmp(d, "Esquerda") == 0)
        {
            printf("Cavalo não se move em verticais ou horizontais\n\n");
            return;
        } else{
            for(int i = 0; i < 1; i++){
                for(int j=0; j<2; j++){
                    printf("cima");
                }
                printf("direita");
                
            }
        }
    }
}

int main(){

    char dir[20];

    /*
    Utilizar scanf() para fazer com que as peças se movam de acordo com as coordenadas desejadas;
    ex para verticais e horizontais: W = cima; S = baixo; D = direita; A = esquerda;
    ex para diagonais: Cima = WD, WA; Baixo = SD, SA;
    E declarar o número de casas em outro scanf();
    Utilizar recursividade e funções;
    */

    printf("Demarque uma direção com WASD para a Torre:\n");
    scanf("%s", dir);
    printf("\n");
    printf("Selecione o número de casas para a Torre:\n");
    scanf("%d", &steps);
    printf("\n");

    posicao(dir);

    torre(dir, steps);
    

    printf("Demarque uma direção com WASD para a Rainha:\n");
    scanf("%s", dir);
    printf("\n");
    printf("Selecione o número de casas para a Rainha:\n");
    scanf("%d", &steps);
    printf("\n");

    posicao(dir);

    rainha(dir, steps);


    printf("Demarque uma direção com WASD para o Bispo:\n");
    scanf("%s", dir);
    printf("\n");
    printf("Selecione o número de casas para o Bispo:\n");
    scanf("%d", &steps);
    printf("\n");

    posicao(dir);

    bispo(dir, steps);


    printf("Demarque uma direção com WASD para o Cavalo:\n");
    scanf("%s", dir);
    printf("\n");

    posicao(dir);

    cavalo(dir);

return 0;
}