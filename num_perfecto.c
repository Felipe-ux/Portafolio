/*===========================================================*/
/* Control1 - Numero perfecto - ICI125 ProgramaciónI	     */
/* Determinar si 1 numero entero es perfecto.                */
/* Para compilar gcc num_perfecto.c -o eje2                  */
/* Para ejecutar ./eje2  						             */
/* Autores: Felipe Leviñir - Nicolas Veas                    */
/* Profesoras: Ana Aguilera - Eliana Providel                */
/*===========================================================*/
#include <stdio.h>
void num_perfecto();
int main(){
    int num;
    printf("Digite un numero:" );
	scanf("%d", &num);
    num_perfecto(num);
    return 0;
}
void num_perfecto(int num){
	int suma;
	for(int i=1; i<num; i++){
		if(num%i == 0){
			suma += i;
		}
	}
	if(suma == num){
		printf("El numero es perfecto");
	}
	else{
		printf("El numero NO es perfecto");
	}
}