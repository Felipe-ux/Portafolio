/*===========================================================*/
/* Control1 - Numero curioso - ICI125 ProgramaciónI	         */
/* Determinar si 1 numero entero es curioso.                 */
/* Para compilar gcc num_curioso.c -o eje8                   */
/* Para ejecutar ./eje8							             */
/* Autores: Felipe Leviñir - Nicolas Veas                    */
/* Profesoras: Ana Aguilera - Eliana Providel                */
/*===========================================================*/
#include <stdio.h> 
int num_curioso();
int main(){
    int num;
    printf("INGRESE UN NUMERO ENTERO O INGRESE 0 PARA SALIR\n");
    while(num>0){
        printf("Introduzca un numero: \n");
        scanf("%d", &num);
        if(num>0){
           if(num_curioso(num) == num){
                printf("Numero curioso\n");
            }
            else{
                printf("NO es curioso\n");
            }
        }
        if(num == 0){
            printf("SALIO!!\n");
            break;
        }
    }
    return 0;
}
int num_curioso(int num){
    int digito,elevado;
    elevado = num*num;
    digito = elevado%(100);
    return digito;
}