/*===========================================================*/
/* Control1 - Numero compuesto - ICI125 ProgramaciónI	     */
/* Determinar si 1 numero enteros es compuesto.              */
/* Para compilar gcc num_compuesto.c -o eje1                 */
/* Para ejecutar ./eje1							             */
/* Autores: Felipe Leviñir - Nicolas Veas                    */
/* Profesoras: Ana Aguilera - Eliana Providel                */
/*===========================================================*/
#include <stdio.h>
void num_compuesto();
int main(){
    int num;
    while(num > 0){
        printf("Digite un numero mayor o igual a 1 o digite 0 para salir: \n"); 
        scanf("%d", &num);  
        if(num>0)num_compuesto(num);       
    if(num == 0){
        printf("Salio!");
        break;
      }
    }
    return 0; 
}
void num_compuesto(int num){
    int cont=0;  
    for (int i=1; i<=num; i++){
        if (num%i == 0) cont++;  
        } 
    if (cont == 2)  
        printf("El numero no es compuesto.\n");
    else    
        printf("El numero es compuesto.\n");
}