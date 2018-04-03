int pushButton2 = 2 ;
int pushButton3 = 3 ;
int pushButton4 = 4 ;
int pushButton5 = 5 ;

void setup() {

  Serial.begin(9600);
  pinMode(pushButton2, INPUT_PULLUP);
  pinMode(pushButton3, INPUT);
  pinMode(pushButton4, INPUT);
  pinMode(pushButton5, INPUT);
  

}

void loop() {

  
  int buttonState2 = digitalRead(pushButton2);
  Serial.print(buttonState2);
   


   int buttonState3 = digitalRead(pushButton3);
   Serial.print(buttonState3);
   

   int buttonState4 = digitalRead(pushButton4);
   Serial.print(buttonState4);
   

   int buttonState5 = digitalRead(pushButton5);
    Serial.print(buttonState5);

 
 Serial.println();
      
      

}
