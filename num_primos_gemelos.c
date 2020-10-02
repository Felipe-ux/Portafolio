/*=============================================================*/
/* Control1 - Numeros primos gemelos - ICI125 ProgramaciónI	   */
/* Determinar si 2 numeros enteros son primos gemelos.         */
/* Para compilar gcc num_primos_gemelos.c -o eje5              */
/* Para ejecutar ./eje5     							       */
/* Autores: Felipe Leviñir - Nicolas Veas                      */
/* Profesoras: Ana Aguilera - Eliana Providel                  */
/*=============================================================*/
#include <stdio.h>
void num_primos_g();
int main(){
    int num1, num2;
    printf("INGRESE ALGUN NUMERO NATURAL O INGRESE 0 PARA SALIR\n");
    while(num1>0 && num2>0){
        printf("Ingrese el primer numero: \n");
        scanf("%d",&num1);
        printf("\nIngrese el segundo numero: \n");
        scanf("%d",&num2);
        num_primos_g(num1, num2);
        if(num2 =0 || num2 ==0){
            printf("SALIO!! \n");
            break;
        }
    }
    return 0;
}
void num_primos_g(int num1, int num2){
    if(num1 > num2 && (num1-num2==2)){
        printf("Los numeros son primos gemelos \n");
    }
    else{
        printf("Los numeros NO son primos gemelos \n");
    }
}