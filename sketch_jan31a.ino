int count=0;
int green=3;
int red=4;
int yellow=5;
int reading=0;
int button=6;

void setup() {
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(button,INPUT); // put your setup code here, to run on
}

void loop() {
  reading=digitalRead(button);
  if (reading==HIGH){
    count++;
    if (count==1){
      digitalWrite(green,HIGH);

    }
    else if(count==2){
      digitalWrite(yellow,HIGH);
      digitalWrite(green,HIGH);

    }
    else if (count==3)
    {
      digitalWrite(green,HIGH);
      digitalWrite(yellow,HIGH);
      digitalWrite(red,HIGH);

    }
     else if (count==4){
      digitalWrite(green,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(red,LOW);
      count=0;
      
    }
    delay(250);
    }

  }
  


  // put your main code here, to run repeatedly:


