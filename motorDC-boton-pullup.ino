// Definición de pines para los LEDs, Botones y motor
int motor = 3;// Pin digital para el Motor
int button1 = 6;// Pin digital para el boton 1
int button2 = 7;// Pin digital para el boton 2
int ledON = 4;// Pin digital para los LEDs
int ledOFF = 5;// Pin digital para los LEDs
void setup()
{
  pinMode(motor,OUTPUT);// Configura el pin como salida
  pinMode(ledON,OUTPUT);// Configura el pin como salida
  pinMode(ledOFF,OUTPUT);// Configura el pin como salida
  pinMode(button1,INPUT_PULLUP);// Configura el pin como salida
  pinMode(button2,INPUT_PULLUP);// Configura el pin como salida
  digitalWrite(ledON,LOW); // Inicialmente apagado
  digitalWrite(ledOFF, HIGH); // Inicialmente prendido
}

void loop()
{
  int datoB1 = digitalRead(button1);// Verifica si el botón 1 ha cambiado de estado
  int datoB2 = digitalRead(button2);// Verifica si el botón 2 ha cambiado de estado
  if (datoB1 == LOW){// verifica que el boton 1 este presionado
    delay(20);
    digitalWrite(motor, HIGH);// enciende el motor
    digitalWrite(ledON,HIGH);// enciende el LED 
    digitalWrite(ledOFF, LOW);// apaga el LED
  }
  if (datoB2 == LOW){// verifica que el boton 2 este presionado
    delay(20);
    digitalWrite(motor, LOW);// apaga el motor
    digitalWrite(ledON,LOW);// apaga el LED
    digitalWrite(ledOFF, HIGH);// enciende el LED 
  }
}
