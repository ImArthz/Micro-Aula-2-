int pin1 = 0;
int pin2 = 1;
int pin3 = 2;
int pin4 = 5;
int pin5 = 6;

void setup() {
  // put your setup code here, to run once:
	pinMode(pin1, OUTPUT);
	pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
	pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);

}

void loop() {
 
	digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
}
