//This is to be a hardcode example of twinkle twinkle little star as
//an example of what the player harp is capable of.

int Distance = 0;  // Record the number of steps we've taken
int i = 0;
int D = 0; //distance variable for the carriage

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
}

void FR() { //retracted moving forward

  digitalWrite(13, HIGH);
  while ( 0 <= Distance && Distance <= D) { //goes distance "D" steps
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH); //Makes stepper motor move 1 step
  delayMicroseconds(100);
  digitalWrite(3, LOW);
  delayMicroseconds(100);
  Distance = Distance + 1;   // record this step
}
  Distance = 0;
}

void BR() { //retracted moving Backward

  digitalWrite(13, HIGH);
  while ( 0 <= Distance && Distance <= D) { //goes distance "D" steps
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH); //Makes stepper moter move 1 step
  delayMicroseconds(100);
  digitalWrite(3, LOW);
  delayMicroseconds(100);
  Distance = Distance + 1;   // record this step
}
Distance = 0;
}


void FD() { //Deployed moving forward

  digitalWrite(13, LOW);
  while ( 0 <= Distance && Distance <= D) { //goes distance "D" steps
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH); //Makes stepper moter move 1 step
  delayMicroseconds(100);
  digitalWrite(3, LOW);
  delayMicroseconds(100);
  Distance = Distance + 1;   // record this step
}
Distance =0;
}

void BD() { //deployed moving Backward
  digitalWrite(13, LOW);
  while ( 0 <= Distance && Distance <= D) { //goes distance "D" steps
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH); //Makes stepper moter move 1 step
  delayMicroseconds(100);
  digitalWrite(3, LOW);
  delayMicroseconds(100);
  Distance = Distance + 1;   // record this step
}
Distance= 0;
}


void loop() {

while( i < 1)
{
i++;
D=2000;
BR();
D = 2500;
BD(); //c
FD(); //c
D = 7800;
BR();
D = 2500;
BD(); //g
FD(); //g
D = 2000;
BR();
D = 2500;
BD(); //a
FD(); //a
delay(200);
D = 2000;
FD(); //g
D = 2500;
delay(300);
FD(); //f
D=2800;
BD(); //f
D=2000;
FR();
D=2500;
FD(); //e
BD();//e
D=2000;
FR();
D=2500;
FD(); //d
BD();//d
D=2000;
FR();
D=2500;
FD(); //c
}}
