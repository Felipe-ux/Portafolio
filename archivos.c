#include <stdio.h>
#include <string.h>
/*Un programa que pida que ingresen frases y las almacene en el archivo
“frases.txt”. Acabará cuando se pulse Enter sin teclear nada más. Después deberá mostrar
el contenido del archivo.*/
int main(){
   FILE* ficheroU;
   char frase[61];
   int i=0;
       
   ficheroU = fopen("frases.txt", "wt");
   printf("====================================================\n");
   printf(" Diario de vida para escribir y almacenar recuerdos.\n");
   printf("Cuando necesite salir, simplemente pulse \"Enter\".\n");
   do{
      if (i == 0)
         puts("\nEscriba una FRASE:\n(o pulse \"Enter\").\n");
      else
         puts("\nEscriba otra FRASE:\n(o pulse \"Enter\").\n");
      gets(frase);
      fprintf(ficheroU, "%s\n", frase);
      i++;
   }
   while (strcmp(frase, "") != 0);
   printf("Esto es lo que escribiste:\n\n");
   fclose(ficheroU);
   
   ficheroU = fopen("frases.txt", "rt");
   do{
      fgets(frase, 60, ficheroU);
      puts(frase);
   }
   while (!feof(ficheroU));
   printf("....Hasta luego!");
   getchar();
   fclose(ficheroU);
   return 0;
}