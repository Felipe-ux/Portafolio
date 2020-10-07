/*===========================================================*/
/* Control1 - Numero abundante - ICI125 ProgramaciónI	     */
/* Determinar si 1 numero entero es abundante.               */
/* Para compilar gcc num_abundante.c -o eje6                 */
/* Para ejecutar ./eje6							             */
/* Autores: Felipe Leviñir - Nicolas Veas                    */
/* Profesoras: Ana Aguilera - Eliana Providel                */
/*===========================================================*/
#include <stdio.h>
int num_abundante();
int main(){
    int num;
    while(num>0){
        printf("\n\nINGRESE UN NUMERO ENTERO O INGRESE 0 PARA SALIR\n\n");
        printf("Introduzca un numero: \n");
        scanf("%d", &num);
        if(num>0){
            if(num_abundante(num) > num){
                printf("\nEl numero es abundante \n");
            }
            else{
                printf("\nEl numero NO es abuntate \n");
            }
        }
        if(num==0){
            printf("SALIO!!\n");
            break;
        }
    }
    return 0;
}
int num_abundante(int num){
    int sum=0;
    for(int i=1; i<=num/2; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum;
}