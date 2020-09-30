/*===========================================================*/
/* Control1 - Numero semiperfecto - ICI125 ProgramaciónI	 */
/* Determinar si 1 numero enteros es semiperfecto.           */
/* Para compilar gcc num_semiperfecto.c -o eje3              */
/* Para ejecutar ./eje3							             */
/* Autores: Felipe Leviñir - Nicolas Veas                    */
/* Profesoras: Ana Aguilera - Eliana Providel                */
/*===========================================================*/
#include <stdio.h>
int num_semiperf();
int main(){
    int num=0;
    do{
    printf("Introduzca un numero: ");
    scanf("%d", &num);
    }while(num < 0);
    printf("La suma de algunos de sus divisores es: %d\n ",num_semiperf(num));
    return 0;
}
int num_semiperf(int num){
    int sum=0;
    for(int i=1; i<=num/2; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    sum -=1;
    if(num == sum){
        printf("EL numero es semiperfecto \n");
    }    
    else{
        printf("El numero no es semiperfecto \n");
    }
    return sum;
}