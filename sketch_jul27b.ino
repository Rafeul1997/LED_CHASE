
int L1 = 13;
int L2 = 12;
int L3 = 11;
int L4 = 10;

void setup() {
  // put your setup code here, to run once:

pinMode(L1, OUTPUT);
pinMode(L2, OUTPUT);
pinMode(L3, OUTPUT);
pinMode(L4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
LED1();
LED2();
LED3();
LED4();
LED4();
LED3();
LED2();
LED1();

}






