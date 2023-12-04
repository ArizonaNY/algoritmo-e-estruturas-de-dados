// #include <stdio.h>
// int main (){
//     int x,y;
//     y = 2;
//     int *p1, *p2;
//     p1 = &y
//     x = 1;
//     p2 = p1;
//     (*p1)++;
//     printf("%d%d", x, y);
//     return 0;

// }




// #include <stdio.h>
// int inc (inc numero){
//     return(numero++);

// }
// int main (){
//     int numero =5;
//     numero = inc(numero);
//     printf("%d", numero);

//     return 0;
// }



#include <stdio.h>

int *criar_variavel(){
    int variavel = 5;
    return &variavel;
}
int main(){
    int *ponteiro = criar_varaivel();
    printf ("valor da variavel: %d", *ponteiro);
    return 0;
}