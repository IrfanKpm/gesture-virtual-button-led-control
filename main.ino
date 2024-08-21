int ledPinRed = 8;   // Pin connected to the RED LED
int ledPinGreen = 9; // Pin connected to the GREEN LED
int ledPinBlue = 10; // Pin connected to the BLUE LED

void setup()
{
    Serial.begin(9600);
    pinMode(ledPinRed, OUTPUT);
    pinMode(ledPinGreen, OUTPUT);
    pinMode(ledPinBlue, OUTPUT);
}

void loop()
{
    if (Serial.available() > 0)
    {
        char command = Serial.read();
        if (command == 'R')
        {
            digitalWrite(ledPinRed, HIGH); // Turn RED LED on
        }
        else if (command == 'r')
        {
            digitalWrite(ledPinRed, LOW); // Turn RED LED off
        }
        else if (command == 'G')
        {
            digitalWrite(ledPinGreen, HIGH); // Turn GREEN LED on
        }
        else if (command == 'g')
        {
            digitalWrite(ledPinGreen, LOW); // Turn GREEN LED off
        }
        else if (command == 'B')
        {
            digitalWrite(ledPinBlue, HIGH); // Turn BLUE LED on
        }
        else if (command == 'b')
        {
            digitalWrite(ledPinBlue, LOW); // Turn BLUE LED off
        }
    }
}
