/*===========================================================*/
/* Control1 - Numero feliz o infeliz - ICI125 ProgramaciónI	 */
/* Determinar si 1 numero entero es feliz e infeliz.         */
/* Para compilar gcc num_feliz.c -o eje9                     */
/* Para ejecutar ./eje9							             */
/* Autores: Felipe Leviñir - Nicolas Veas                    */
/* Profesoras: Ana Aguilera - Eliana Providel                */
/*===========================================================*/
#include <stdio.h> 
void num_feliz();
int main(){
    int num;
    printf("INGRESE ALGUN NUMERO NATURAL O INGRESE 0 PARA SALIR\n");
    while(num>0){
        printf("Introduzca un numero: \n");
        scanf("%d", &num);
        if(num>0)num_feliz(num);
        if(num == 0){
            printf("SALIO!!\n");
            break;
        }
    }
    return 0;
}
void num_feliz(int num){
    int n, dig, sum;
    n=num;
/* Bajo el concepto de que se considera feliz si al sacar los cuadrados de sus dígitos de forma repetitiva se llega al número 1 se considera feliz
tambien encontre otra regla que decia que al llegar al numero 89 se encerraba en un bucle y el numero nunca seria feliz */
    while(n!=89 && n!=1){
        sum = 0;
        while(n > 0){
            dig=n%10;
            n=n/10;
            sum=sum+(dig*dig);
        }
        n = sum;
    }
    if(n == 1){
        printf("El numero es feliz\n");
    }
    else{
        printf("El numero es infeliz\n");
    }
}