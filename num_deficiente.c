/*===========================================================*/
/* Control1 - Numero deficiente - ICI125 ProgramaciónI	     */
/* Determinar si 1 numero entero es deficiente.              */
/* Para compilar gcc num_deficiente.c -o eje7                */
/* Para ejecutar ./eje7							             */
/* Autores: Felipe Leviñir - Nicolas Veas                    */
/* Profesoras: Ana Aguilera - Eliana Providel                */
/*===========================================================*/
#include <stdio.h>
int num_deficiente();
int main(){
    int num=0;
    do{
    printf("Introduzca un numero: ");
    scanf("%d", &num);
    }while(num < 0);
    if(num_deficiente(num) < num){
        printf("\nEl numero es deficiente ");
    }else{
        printf("\nEl numero NO es deficiente ");
    }
    return 0;
}
int num_deficiente(int num){
    int sum=0;
    for(int i=1; i<=num/2; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum;
}