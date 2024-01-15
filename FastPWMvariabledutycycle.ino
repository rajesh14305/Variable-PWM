
void setup() {
  TCCR1A =0;
  TCCR1B =0;
  TCCR1A |= B10000010;
  TCCR1B |=B00011011;
  TIMSK1 |=B00000010;
  

  ICR1= 4999;
  DDRB|= B00100000;

  OCR1A =332;

  


}

void loop() {
  // put your main code here, to run repeatedly:t
 //OCR1A=map(analogRead(A0),0,1023,249,499);

}
ISR(TIMER1_COMPA_vect)
{
PORTB|=B00100000;
}
