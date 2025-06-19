#include <Arduino.h>

int pins[8] = {13,10,8,12,7,5,2,3};
int modes[8] = {LOW,LOW,LOW,LOW,LOW,LOW,LOW,LOW};

void setup(){
    for(int pin: pins){
        pinMode(pin, OUTPUT);
    }
}

void write_pins(){
    for(int i = 0; i < 8; i++){
        digitalWrite(pins[i], modes[i]);
    }
}


// modes[0] = LOW //13
// modes[1] = HIGH //10
// modes[2] = HIGH //8
// modes[3] = HIGH //12
// modes[4] = HIGH //7
// modes[5] = HIGH //5
// modes[6] = LOW //2
// modes[7] = HIGH //3

void config_display(int digit) {
    if (digit == 0) {
        modes[0] = LOW;  // G
        modes[1] = HIGH; // A
        modes[2] = HIGH; // B
        modes[3] = HIGH; // F
        modes[4] = HIGH; // E
        modes[5] = HIGH; // D
        modes[6] = LOW;  // DP
        modes[7] = HIGH; // C
    }
    if (digit == 1) {
        modes[0] = LOW;
        modes[1] = LOW;
        modes[2] = HIGH;
        modes[3] = LOW;
        modes[4] = LOW;
        modes[5] = LOW;
        modes[6] = LOW;
        modes[7] = HIGH;
    }
    if (digit == 2) {
        modes[0] = HIGH;
        modes[1] = HIGH;
        modes[2] = HIGH;
        modes[3] = LOW;
        modes[4] = HIGH;
        modes[5] = HIGH;
        modes[6] = LOW;
        modes[7] = LOW;
    }
    if (digit == 3) {
        modes[0] = HIGH;
        modes[1] = HIGH;
        modes[2] = HIGH;
        modes[3] = LOW;
        modes[4] = LOW;
        modes[5] = HIGH;
        modes[6] = LOW;
        modes[7] = HIGH;
    }
    if (digit == 4) {
        modes[0] = HIGH;
        modes[1] = LOW;
        modes[2] = HIGH;
        modes[3] = HIGH;
        modes[4] = LOW;
        modes[5] = LOW;
        modes[6] = LOW;
        modes[7] = HIGH;
    }
    if (digit == 5) {
        modes[0] = HIGH;
        modes[1] = HIGH;
        modes[2] = LOW;
        modes[3] = HIGH;
        modes[4] = LOW;
        modes[5] = HIGH;
        modes[6] = LOW;
        modes[7] = HIGH;
    }
    if (digit == 6) {
        modes[0] = HIGH;
        modes[1] = HIGH;
        modes[2] = LOW;
        modes[3] = HIGH;
        modes[4] = HIGH;
        modes[5] = HIGH;
        modes[6] = LOW;
        modes[7] = HIGH;
    }
    if (digit == 7) {
        modes[0] = LOW;
        modes[1] = HIGH;
        modes[2] = HIGH;
        modes[3] = LOW;
        modes[4] = LOW;
        modes[5] = LOW;
        modes[6] = LOW;
        modes[7] = HIGH;
    }
    if (digit == 8) {
        modes[0] = HIGH;
        modes[1] = HIGH;
        modes[2] = HIGH;
        modes[3] = HIGH;
        modes[4] = HIGH;
        modes[5] = HIGH;
        modes[6] = LOW;
        modes[7] = HIGH;
    }
    if (digit == 9) {
        modes[0] = HIGH;
        modes[1] = HIGH;
        modes[2] = HIGH;
        modes[3] = HIGH;
        modes[4] = LOW;
        modes[5] = HIGH;
        modes[6] = LOW;
        modes[7] = HIGH;
    }
}

void loop(){
    // digitalWrite(13, HIGH);
    // delay(500);
    // digitalWrite(13, LOW);
    // delay(500);

    for(int i = 0; i < 10; i++){
        config_display(i);
        write_pins();
        delay(1000);
    }
}