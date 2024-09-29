#include <Arduino.h>

#define LED 2
#define units 500

void setup() {
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);
}

void dot(){
    digitalWrite(LED, HIGH);
    delay(units);
    digitalWrite(LED, LOW);
    delay(units);
}

void dash(){
    digitalWrite(LED, HIGH);
    delay(3*units);
    digitalWrite(LED, LOW);
    delay(units); 
}

void morseCode (char letter){


    switch (letter){

        case ('M'):
            dash();
            dash();
            delay(2*units);
            break;

        case ('I'):
            dot();
            dot();
            delay(2*units);
            break;
            
        case('S'):
            dot();
            dot();
            delay(2*units);
            break;

        case('P'):
            dot();
            dash();
            dash();
            dot();
            delay(2*units);
        break;

    }    


}

void loop() {

    delay(1000);
    digitalWrite(LED, HIGH);
    delay(2000);
    digitalWrite(LED, LOW);
    delay(5000);

    morseCode('M');
    morseCode('I');
    morseCode('S');
    morseCode('S');
    morseCode('I');
    morseCode('S');
    morseCode('S');
    morseCode('I');
    morseCode('P');
    morseCode('I');

    delay(7*units);



}
