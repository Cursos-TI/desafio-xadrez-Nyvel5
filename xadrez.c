#include <stdio.h>

void moverTorre ( int t ) {
    if ( t > 0) {
        printf ("Direita\n");
        moverTorre ( t - 1 );
     }
}

void moverBispo ( int b ) {
    if ( b > 0 ) {
        for ( int i = 0 ; i < b ; i++) {
             printf ("Cima, ");

            for ( int j = 1 ; j != 0 ; j--) {
                printf ("Esquerda\n");
            } break;   
        } 
        moverBispo ( b - 1 ) ;
    }
}

void moverRainha ( int r ) {
    if ( r > 0 ) {
        printf ("Direita\n");
        moverRainha ( r - 1 ) ;
    }
}

void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");

        for (int j = 0; j < 1; j++) {
            if(i == 1)printf("Direita\n");
        }
    }
}

int main() {
     
    printf ("Movimentos da Torre:\n");
    moverTorre ( 5 );

    printf ("Movimentos do Bispo:\n");
    moverBispo ( 5 );

    printf ("Movimentos da Rainha:\n");
    moverRainha ( 8 );

    printf ("Movimentos do Cavalo:\n");
    moverCavalo ( );
}