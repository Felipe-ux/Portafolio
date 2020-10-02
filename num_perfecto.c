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
    while(num > 1){
		printf("Digite un numero o digite 0 para salir: \n");
		scanf("%d", &num);
		if(num>0)num_perfecto(num);
		if(num == 0){
			printf("Salio!!\n");
			break;
		}
	}
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
		printf("El numero es perfecto\n");
	}
	else{
		printf("El numero NO es perfecto\n");
	}
}