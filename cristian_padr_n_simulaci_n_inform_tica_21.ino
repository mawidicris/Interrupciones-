int val=0; //Variable que almacena el estado del pulsador
int estado=0; //Variable que determina el cambio de estado de las luces LED
int val2=0; //Variable que almacena el anterior estado del pulsador
void setup()
{
  pinMode(9, INPUT); //Pin del pulsador, se define como entrada
  //Pines de las luces LED, se encuentran definidas como salidas
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  val=digitalRead(9); //Lee el estado del pulsador
  if ((val==HIGH)&&(val2==LOW)){ //Se comprueba que el estado del pulsador se encuentre en alto
  	estado=1-estado; //Se cambia el estado de la iluminación
    delay(100);
  }
  val2=val; //Almacena el estado actual del pulsador
  //Se cambia la iluminación dependiendo de la variable estado
  if (estado==1){
  	digitalWrite(8,LOW);
    digitalWrite(10,HIGH);
  }
  else{
  	digitalWrite(10,LOW);
    digitalWrite(8,HIGH);
  }
}