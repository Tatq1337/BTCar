
 
int IN1 = 9;  
int IN2 = 8;  
int IN3 = 7;  
int IN4 = 6;  
char command; 

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(Serial.available() > 0){ 
    command = Serial.read(); 
    Stop(); 
    switch(command){
    case 'F':  
      przod();
      break;
    case 'B':  
       tyl();
      break;
    case 'L':  
      lewo();
      break;
    case 'R':
      prawo();
      break;
    }
  } 
}

void przod()
{

  digitalWrite(IN1, HIGH); 
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH); 
  digitalWrite(IN4, LOW);   
}

void tyl()
{
  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW); 
  digitalWrite(IN4, HIGH);  
}

void Stop()
{

  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW); 
  digitalWrite(IN4, LOW);   
}



void prawo()
{
  digitalWrite(IN1, HIGH); 
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW); 
  digitalWrite(IN4, LOW);   
}

void lewo()
{

  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH); 
  digitalWrite(IN4, LOW);  
}
