
//Physic controller
int infra = 0;
int left = 0;
int rigth = 0;
boolean shoot;

void setup() {
Serial.begin(9600); 
// In this section we put the inputs to the signals that we have in the control
pinMode(8, INPUT); // This is for the left button
pinMode(9, INPUT); // This is for the shoot button
pinMode(10, INPUT);// This is for the right button
pinMode(11, INPUT); // iNFRARROJO
}

void loop() {
  left = digitalRead(9);
  shoot = digitalRead(10);
  rigth = digitalRead(8);
  infra = digitalRead(11);

  if(left == HIGH){
      Serial.println(1);
      delay(500);
      Serial.println(0);
    }else if(rigth == HIGH){
      Serial.println(2);
      delay(500);
      Serial.println(0);
    }else if(shoot == HIGH){
      Serial.println(3);
      delay(500);
    }else if(infra == HIGH){
      Serial.println(4);
      delay(1000);
      Serial.println(0);
      }else{
        //Serial.println(0);
        //delay(500);
        }
}
