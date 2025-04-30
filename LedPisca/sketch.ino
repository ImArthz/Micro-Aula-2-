int led1 = 8;
int led2 = 9;
int botao1 = 10;
int botao2 = 11;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
}

void loop() {
  if(digitalRead(botao1) == HIGH){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      delay(300);
      digitalWrite(led2, HIGH);
      digitalWrite(led1, LOW);
      delay(300);
  }
  else if(digitalRead(botao2) == HIGH){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  
}