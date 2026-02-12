#include <stdio.h>
#include <string.h>

void torre(char d[], int s, char p[]){
    if (strcmp(d, "Cima + Direita") == 0 ||
        strcmp(d, "Cima + Esquerda") == 0 ||
        strcmp(d, "Baixo + Direita") == 0 ||
        strcmp(d, "Baixo + Esquerda") == 0)
        {
            printf("Torre não se move em diagonais\n");
            return;
        } 
        if (s>0){
            printf("%s \n", d);
            torre(d, s-1, p);
            printf("d");
        }
}

int main(){

    char piece[4][20] = {"a Torre", "o Bispo", "a Rainha", "o Cavalo"};
    char dir[20];
    int steps;

    /*
    Utilizar scanf() para fazer com que as peças se movam de acordo com as coordenadas desejadas;
    ex para verticais e horizontais: W = cima; S = baixo; D = direita; A = esquerda;
    ex para diagonais: Cima = WD, WA; Baixo = SD, SA;
    E declarar o número de casas em outro scanf();
    Utilizar recursividade e funções;
    */

    printf("Demarque uma direção com WASD para %s:\n", piece[0]);
    scanf("%s", dir);
    printf("\n");
    printf("Selecione o número de casas para a Torre:\n");
    scanf("%d", &steps);
    printf("\n");

    if (strcmp(dir, "d") == 0){ //strcmp simplesmente compara a string. Caso fosse ((dir, "d") > 0) verificaria se a string vale "e"
     strcpy(dir, "Direita");
    }
    if (strcmp(dir, "a") == 0){
     strcpy(dir, "Esquerda");
    }
    if (strcmp(dir, "w") == 0){
     strcpy(dir, "Cima");
    }
    if (strcmp(dir, "s") == 0){
     strcpy(dir, "Baixo");
    }
    if (strcmp(dir, "wa") == 0 || strcmp(dir, "aw") == 0){
     strcpy(dir, "Cima + Esquerda");
    }
    if (strcmp(dir, "wd") == 0 || strcmp(dir, "dw") == 0){
     strcpy(dir, "Cima + Direita");
    }
    if (strcmp(dir, "sa") == 0 || strcmp(dir, "as") == 0){
     strcpy(dir, "Baixo + Esquerda");
    }
    if (strcmp(dir, "sd") == 0 || strcmp(dir, "ds") == 0){
     strcpy(dir, "Baixo + Direita");
    }

    torre(dir, steps, piece);

    

return 0;
}