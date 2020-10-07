/*=======================================================*/
/* Control1 - Numeros coprimos - ICI125 ProgramaciónI	 */
/* Determinar si 2 numeros enteros son coprimos.         */
/* Para compilar gcc num_coprimos.c -o eje4              */
/* Para ejecutar ./eje4							         */
/* Autores: Felipe Leviñir - Nicolas Veas                */
/* Profesoras: Ana Aguilera - Eliana Providel            */
/*=======================================================*/
#include <stdio.h>
void num_comprimos();
int main(){
    int num1, num2;
    while(num1>0 && num2>0){
        printf("\n\n INGRESE ALGUN NUMERO NATURAL O INGRESE EN LAS 2 OPCIONES 0 PARA SALIR \n\n");
        printf("Ingrese el primer numero: \n");
        scanf("%d",&num1);
        if(num1==0){
            printf("\nIngrese el segundo numero: \n");
            scanf("%d",&num2);
            if(num2==0){
                printf("SALIO!! \n");
                break;
            }
        }
        else{
            printf("\nIngrese el segundo numero: \n");
            scanf("%d",&num2);
        }
        while(num1 <= 0){
            printf("Numero 1 invalido, ingreselo nuevamente: \n");
            scanf("%d",&num1);
        }
        while(num2 <= 0){
            printf("Numero 2 invalido, ingreselo nuevamente: \n");
            scanf("%d",&num2);
        }
    num_comprimos(num1, num2);
    }
    return 0;
}
void num_comprimos(int num1, int num2){
    int residuo, mcd;
    do{
        residuo = num1 % num2;
        if(residuo != 0){
            num1 = num2;
            num2 = residuo;
        }
        else{
            mcd = num2;
        }  
    }while(residuo != 0);
    if(mcd == 1){
        printf("Los numeros son coprimos\n");
    }
    else{
        printf("Los numeros NO son coprimos\n");
    }      
}