#include <stdio.h>
int main(){

    char dir[4][10] = {"Direita", "Esquerda", "Cima", "Baixo"};
    int steps;
    int feets = 0;
    int pes = 0;

    /*
    Torre terá que se mover 5 para direita (for)
    Bispo terá que se mover 5 para cima + direita (while)
    Rainha terá que se mover 8 para direita (do-while)
    */
    
    for(steps=0; steps < 5; steps++){
        printf("%s\n", dir[0]);
    } printf("Torre se moveu %d vezes\n\n", steps);

    while(feets < 5){
        printf("%s + %s\n", dir[2], dir[0]);
        feets++;
    } printf("Bispo se moveu %d vezes\n\n", feets);

    do {
        printf("%s\n", dir[1]);
        pes++;
    } while (pes < 8);
    printf("Rainha se moveu %d vezes\n\n", pes);

return 0;
}