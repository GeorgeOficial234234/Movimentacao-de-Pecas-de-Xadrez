#include <stdio.h>
int main(){

    char dir[4][10] = {"Direita", "Esquerda", "Cima", "Baixo"};
    int steps;

    /*
    Torre terá que se mover 5 para direita (for)
    Bispo terá que se mover 5 para cima + direita (while)
    Rainha terá que se mover 8 para direita (do-while)
    */
    
    for(steps = 0; steps < 5; steps++){
        printf("%s\n", dir[0]);
    } printf("Torre se moveu %d casas\n\n", steps);

    steps = 0;

    while(steps < 5){
        printf("%s + %s\n", dir[2], dir[0]);
        steps++;
    } printf("Bispo se moveu %d casas\n\n", steps);

    steps = 0;

    do {
        printf("%s\n", dir[1]);
        steps++;
    } while (steps < 8);
    printf("Rainha se moveu %d casas\n\n", steps);

    steps = 0;

    for (steps; steps < 1; steps++){ 
        while (steps < 2){
            printf("%s\n", dir[3]);
            steps++;
        }
        printf("%s\n", dir[1]);
    } printf("Cavalo se moveu %d casas\n\n", steps);

return 0;
}