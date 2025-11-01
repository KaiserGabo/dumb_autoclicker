#include <Mouse.h>

int click_state = 0;
int responseDelay = 10;

void setup() {
  Serial.begin(115200);
  Mouse.begin();
  delay(100);
}

void loop() {
  if (BOOTSEL) {
    click_state = click_state + 1;
    if (click_state <= 1) {
      Serial.println(click_state);
    } else {
      click_state = 0;
      Serial.println(click_state);
      if (Mouse.isPressed(MOUSE_LEFT) || !Mouse.isPressed(MOUSE_LEFT)) {
        Mouse.release(MOUSE_LEFT);
        Serial.println("Not pressed");
        delay(responseDelay);
      }
    }
    while (BOOTSEL) {
      delay(1);
    }
  }
  while (click_state == 1) {
        if (!Mouse.isPressed(MOUSE_LEFT)) {
          Mouse.press(MOUSE_LEFT);
          Serial.println("Pressed");
        }
        delay(responseDelay);
        if (Mouse.isPressed(MOUSE_LEFT)) {
          Mouse.release(MOUSE_LEFT);
          Serial.println("Not pressed");
        }
        delay(responseDelay);
      }
}