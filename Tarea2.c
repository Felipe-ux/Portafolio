/* Arreglos con los valores para los pines del arduino */
int ArraySegundos[] = {2, 3, 4, 5, 6, 7};
int ArrayMinutos[] = {8, 9, 10, 11, 12, 13};
int ArrayHoras[] = {14, 15, 16, 17, 18, 19};
/*  Variables para obtener el largo de los arreglos */
int segSize =sizeof(ArraySegundos) / sizeof(ArraySegundos[0]);
int minSize = sizeof(ArrayMinutos) / sizeof(ArrayMinutos[0]);
int hrSize = sizeof(ArrayHoras) / sizeof(ArrayHoras[0]);
/* Variables que inicializan el reloj*/
//12:20:10 ---> 1100:10100:1010
int segundos = 10;
int minutos = 20;
int horas = 12;

void setup(){
  Serial.begin(9600);
  Serial.println(sizeof(ArraySegundos));
/* Ciclos que recorren los arreglos y activan los pins */  
  for(int i = 0; i< segSize;i++){
    pinMode(ArraySegundos[i], OUTPUT);
  }
  for(int i = 0; i< minSize;i++){
    pinMode(ArrayMinutos[i], OUTPUT);
  }
  for(int i = 0; i< hrSize;i++){
    pinMode(ArrayHoras[i], OUTPUT);
  } 
}
void loop(){
/* Logica del reloj */
    segundos++;
    if(segundos > 59){
      segundos = 0;
      minutos++;
      if(minutos > 59){
        minutos = 0;
        horas++;
        if(horas > 23){
          horas = 0;
        }
      }
    }
    /* LLamado de funciones */
    DisplaySeconds();
    DisplayMinutes();
    DisplayHours();
    delay(1000);
}
/* Funciones para mostrar los numeros binarios a los pines
Para las 3 funciones se recorre el ciclo de forma inversa para obtener 
de forma correcta los numeros binarios */
void DisplayHours(){     
  for(int i = hrSize - 1; i>= 0; i--){          
    int cHora = bitRead(horas, i);
    digitalWrite(ArrayHoras[i], cHora); 
  }  
}

void DisplayMinutes(){     
  for(int i = minSize - 1; i>= 0; i--){
    int cMinuto = bitRead(minutos, i);
    digitalWrite(ArrayMinutos[i], cMinuto); 
  }  
}

void DisplaySeconds(){     
  for(int i = segSize - 1; i>= 0; i--){
    int cSegundo = bitRead(segundos, i);
    digitalWrite(ArraySegundos[i], cSegundo); 
  }  
}