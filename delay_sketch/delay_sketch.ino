int relay = 2;
int NCpin = 3;
int NOpin = 4;
int Cpin = 5; //NC
int val=LOW;


void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  pinMode(NCpin, OUTPUT);
  pinMode(NOpin, OUTPUT);
  pinMode(Cpin, INPUT);
  digitalWrite(relay, HIGH);
  digitalWrite(NCpin, HIGH);
  digitalWrite(NOpin, LOW);
}

void loop() {
  val = digitalRead(Cpin);
  Serial.println(val);
  if (val == LOW) {
    digitalWrite(relay, LOW);
    delay(11000);
    digitalWrite(relay, HIGH);
  }
}
