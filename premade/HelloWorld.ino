/**
 * Made with Duckuino, an open-source project.
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press("r");
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("notepad"));

  delay(500);
  typeKey(KEY_RETURN);

  delay(750);
  Keyboard.print(F("Hello World!!!"));

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}