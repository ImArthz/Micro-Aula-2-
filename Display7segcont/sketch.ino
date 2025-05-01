int pin[] = {0, 1, 2, 3, 4, 5, 6};
int botao1 = 8;
int botao2 = 9;
int contador = 0;

// Dígitos de 0 a 9 em binário (a-g)
byte numeros[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};


void setup() {
  for (int i = 0; i <= 6; i++) {
    pinMode(pin[i], OUTPUT);
  }
  pinMode(botao1, INPUT); // Usando resistor de pull-up interno
  pinMode(botao2, INPUT);
  Serial.begin(9600);
}

void mostrarNumero(int contador) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(pin[i], numeros[contador][i]);
  }
  Serial.print("Contador: ");
  Serial.println(contador);
}

void loop() {
  if (digitalRead(botao1) == HIGH) {  // Botão 1 pressionado (com pull-up: LOW = pressionado)
    contador++;
    if (contador > 9) contador = 0;
    mostrarNumero(contador);
    delay(300);  // Delay simples para debounce
  }

  if (digitalRead(botao2) == HIGH) {  // Botão 2 pressionado
    contador--;
    if (contador < 0) contador = 9;
    mostrarNumero(contador);
    delay(300);  // Delay simples para debounce
  }
}
