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
    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d",&num2);
    num_comprimos(num1, num2);
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
        printf("Los numeros son coprimos");
    }
    else{
        printf("Los numeros NO son coprimos");
    }      
}