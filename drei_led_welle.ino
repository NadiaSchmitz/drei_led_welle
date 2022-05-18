int led_red = 5;
int led_green = 10;
int led_white = 3;
int button_digital = 7;
int leds[3] = {led_white, led_red, led_green};

void setup() {
  pinMode(led_red,OUTPUT);
  pinMode(led_green,OUTPUT);
  pinMode(led_white, OUTPUT);
  pinMode(button_digital, INPUT_PULLUP);
}

void loop() {
 digitalWrite(led_white, LOW);
 digitalWrite(led_red, LOW);
 digitalWrite(led_green, LOW);
 if (digitalRead(button_digital) == LOW) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(leds[i], HIGH);
      delay(100);
      digitalWrite(leds[i], LOW);
    }
  } 
}
