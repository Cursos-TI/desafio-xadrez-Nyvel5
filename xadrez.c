#include <stdio.h>

int main() {
     
    //Torre

    printf ("Movimentação da torre:\n");

    for ( int i = 1 ; i <= 5 ; i++ ) {
        
        printf ("Direita\n");
    }

    printf ("Movimentação do bispo:\n");

    int b = 1;
    while ( b <= 5 ) {
        
        printf ("Cima, direita\n");

        b++;
    }

    printf ("Movimentação da rainha:\n");

    int r = 1;
    do {
       printf ("Esquerda\n");
       
       r++;
    } while (r <=  8);

    return 0;
}
