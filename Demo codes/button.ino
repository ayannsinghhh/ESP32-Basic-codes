void Setup()
{
    pinMode(3,INPUT);
    pinMode(2,OUTPUT);
}
void loop()
{
    if(digitalRead(4) == LOW)
    {
        digitalWrite(2,HIGH);
    }
else
{
    digitalWrite(2,LOW);
}
delay(1000);
}  