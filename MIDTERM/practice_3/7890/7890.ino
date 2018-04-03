boolean buttonPressed;
int readPin = 3; 
int val; 

void setup(){
  Serial.begin(9600); 
  pinMode(readPin, INPUT_PULLUP); 
}


void loop(){
  val = digitalRead(readPin); 
  Serial.println(val); 
//if (buttonPressed){
//  println("YES");
//}else{
//  println("NO");
//} 
}

