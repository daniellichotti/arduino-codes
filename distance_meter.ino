// C++ code
//
int cm = 0; // Declara uma variável global 'cm' para armazenar a distância medida em centímetros.

long readUltrasonicDistance(int triggerPin, int echoPin) // Função que mede a distância usando o sensor ultrassônico.
{
  pinMode(triggerPin, OUTPUT);  // Define o pino de disparo (trigger) como saída.
  digitalWrite(triggerPin, LOW); // Garante que o pino comece em nível baixo.
  delayMicroseconds(2);          // Espera 2 microssegundos para estabilizar o sinal.

  // Envia um pulso HIGH de 10 microssegundos para o trigger, iniciando a medição.
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  pinMode(echoPin, INPUT);       // Define o pino de eco (echo) como entrada para receber o retorno do sinal.

  // Mede o tempo (em microssegundos) que o pino echo fica em nível HIGH,
  // ou seja, o tempo que o som levou para ir e voltar.
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600); // Inicializa a comunicação serial a 9600 bits por segundo para enviar dados ao computador.
}

void loop()
{
  // Calcula a distância em centímetros com base no tempo medido pelo sensor.
  // O valor 0.01723 vem da velocidade do som (340 m/s), ajustado para ida e volta do pulso ultrassônico.
  cm = 0.01723 * readUltrasonicDistance(8, 7);

  Serial.print(cm);      // Envia o valor da distância medido para o monitor serial.
  Serial.println("cm");  // Envia o texto "cm" e pula uma linha.

  delay(1000); // Aguarda 1 segundo antes de fazer uma nova medição.
}
