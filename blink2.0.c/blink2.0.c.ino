//this is a scuffed copy of blink so that there is a piece of code in our repo.
//Also it works now.

uint8_t jmp = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  jmp = 'A';

  theDelay:
  delay(750);
  if (jmp)
  goto scuffed;
  else 
  goto next;
  exit(15);


  if (false) {
    scuffed:
    digitalWrite(LED_BUILTIN, LOW);
    jmp -= 0x41;
    goto theDelay;
  }
  next:
  delay(0);
}
