void blink(int a,int b)
{
    digitalWrite(b, HIGH);
    delay(a);
    digitalWrite(b, LOW);
    delay(a);
}