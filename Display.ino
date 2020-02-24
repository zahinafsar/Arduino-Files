int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;
char h=LOW;
char l=HIGH;
void setup() {                
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT);  
}
void first(){
  digitalWrite(D1, l);
  digitalWrite(D2, h);
  digitalWrite(D3, h);
  digitalWrite(D4, h); 
}
void second(){
  digitalWrite(D1, h);
  digitalWrite(D2, l);
  digitalWrite(D3, h);
  digitalWrite(D4, h); 
}
void third(){
  digitalWrite(D1, h);
  digitalWrite(D2, h);
  digitalWrite(D3, l);
  digitalWrite(D4, h); 
}
void fourth(){
  digitalWrite(D1, h);
  digitalWrite(D2, h);
  digitalWrite(D3, h);
  digitalWrite(D4, l); 
}
void zero(){
  digitalWrite(pinA, h);   
  digitalWrite(pinB, h);   
  digitalWrite(pinC, h);   
  digitalWrite(pinD, h);   
  digitalWrite(pinE, h);   
  digitalWrite(pinF, h);   
  digitalWrite(pinG, l);
}
void one(){
  digitalWrite(pinA, l);   
  digitalWrite(pinB, h);   
  digitalWrite(pinC, h);   
  digitalWrite(pinD, l);   
  digitalWrite(pinE, l);   
  digitalWrite(pinF, l);   
  digitalWrite(pinG, l);
}
void two(){
  digitalWrite(pinA, h);   
  digitalWrite(pinB, h);   
  digitalWrite(pinC, l);   
  digitalWrite(pinD, h);   
  digitalWrite(pinE, h);   
  digitalWrite(pinF, l);   
  digitalWrite(pinG, h);
}
void three(){
  digitalWrite(pinA, h);   
  digitalWrite(pinB, h);   
  digitalWrite(pinC, h);   
  digitalWrite(pinD, h);   
  digitalWrite(pinE, l);   
  digitalWrite(pinF, l);   
  digitalWrite(pinG, h);
}
void four(){
  digitalWrite(pinA, l);   
  digitalWrite(pinB, h);   
  digitalWrite(pinC, h);   
  digitalWrite(pinD, l);   
  digitalWrite(pinE, l);   
  digitalWrite(pinF, h);   
  digitalWrite(pinG, h);
}
void five(){
  digitalWrite(pinA, h);   
  digitalWrite(pinB, l);   
  digitalWrite(pinC, h);   
  digitalWrite(pinD, h);   
  digitalWrite(pinE, l);   
  digitalWrite(pinF, h);   
  digitalWrite(pinG, h);
}
void six(){ 
  digitalWrite(pinA, h);   
  digitalWrite(pinB, l);   
  digitalWrite(pinC, h);   
  digitalWrite(pinD, h);   
  digitalWrite(pinE, h);   
  digitalWrite(pinF, h);   
  digitalWrite(pinG, h);
}
void seven(){
  digitalWrite(pinA, h);   
  digitalWrite(pinB, h);   
  digitalWrite(pinC, h);   
  digitalWrite(pinD, l);   
  digitalWrite(pinE, l);   
  digitalWrite(pinF, l);   
  digitalWrite(pinG, l);
}
void eight(){
  digitalWrite(pinA, h);   
  digitalWrite(pinB, h);   
  digitalWrite(pinC, h);   
  digitalWrite(pinD, h);   
  digitalWrite(pinE, h);   
  digitalWrite(pinF, h);   
  digitalWrite(pinG, h);
}
void nine(){
  digitalWrite(pinA, h);   
  digitalWrite(pinB, h);   
  digitalWrite(pinC, h);   
  digitalWrite(pinD, h);   
  digitalWrite(pinE, l);   
  digitalWrite(pinF, h);   
  digitalWrite(pinG, h);
}
void loop() {
  fourth();
  zero();
  delay(1000);
  one();
  delay(1000);
  two();
  delay(1000);
  three();
  delay(1000);
  four();
  delay(1000);
  five();
  delay(1000);
  six();
  delay(1000);
  seven();
  delay(1000);
  eight();
  delay(1000);
  nine();
  delay(1000);
  
}
