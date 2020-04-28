#define LED 13

bool LED1 = false;
bool LED2 = false;
bool LED3 = false;

void setup(void)
{
  // Inicializa o Serial Console
  Serial.begin(9600);
  while (!Serial)
    ;
  
  // Configura os GPIOs
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LED1);
}

void loop(void)
{
  // Toogle LED1
  LED1 = !LED1;
  digitalWrite(LED, LED1);
  Serial.print(LED1);
  delay(500);
  
  // Toogle LED2
  LED2 = !LED2;
  Serial.print(LED2);
  delay(500);

  // Toogle LED3
  LED3 = !LED3;
  Serial.println(LED3);
  delay(500);
}
