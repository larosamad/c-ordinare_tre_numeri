//Dati tre numeri interi a, b, c, come input stampi a video la sequenza dei tre numeri in ordine crescente
#include <stdio.h>

int main (void) {
    int a, b, c;

    printf("Inserisci il primo numero ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero ");
    scanf("%d", &b);
    printf("Inserisci il terzo numero ");
    scanf("%d", &c);

    if((a>b) && (a>c)){
        if(b>c)
            printf("La sequenza è %d %d %d", c, b, a);
        else
            printf("La sequenza è %d %d %d", b, c, a);
    } else if(b>c){
        if(a>c)
            printf("La sequenza è %d %d %d", c, a, b);
        else
            printf("La sequenza è %d %d %d", a, c, b);
    } else{
        if(a>b)
            printf("La sequenza è %d %d %d", b, a, c);
        else
            printf("La sequenza è %d %d %d", a, b, c);
    }
    
    // versione basic
    // if (a<b) {    
    //     if (a<c){
    //         if (b<c)
    //             printf("La sequenza è %d, %d, %d", a, b, c);
    //         else
    //             printf("La sequenza è %d, %d, %d", a, c, b);
    //             } 
    //     else
    //         printf("La sequenza è %d, %d, %d", c, a, b);
    //         }
    // else {
    //     if (a<c)
    //         printf("La sequenza è %d, %d, %d", b, a, c);
    //     else {
    //         if (b<c)
    //         printf("La sequenza è %d, %d, %d", b, c, a);
    //         else 
    //         printf("La sequenza è %d, %d, %d", c, b, a);
    //         }
    //     }
    return 0;
}
