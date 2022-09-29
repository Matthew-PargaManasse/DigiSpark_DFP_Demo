#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);

// Launching Crome Web Browser
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);

  DigiKeyboard.delay(650);

 // DigiKeyboard.print("chrome");

 // DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //DigiKeyboard.delay(1000);

  DigiKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(4000);
 // DigiKeyboard.sendKeyStroke(KEY_F11);
 // DigiKeyboard.sendKeyStroke(KEY_F);

  //DigiKeyboard.sendKeyStroke(KEY_SPACE);


// Launching Notepad message
  DigiKeyboard.delay(5000);

  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);

  DigiKeyboard.delay(500);

  DigiKeyboard.print("notepad");

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(1000);

  DigiKeyboard.print("This is why you should never plug a USB that isn't yours, into any computer.");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("///////////////////Look at me, this is my computer now.////////////////////////////");

  DigiKeyboard.delay(4000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("You should remove me, NOW!!! ");
  DigiKeyboard.delay(4000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("Why haven't you removed me?!");
  DigiKeyboard.delay(4000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Signed, Your friendly hacker.");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("                              -LithoBreakerGB");
  DigiKeyboard.delay(4000);

DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Neo?? ");
  DigiKeyboard.delay(4000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Follow the white rabbit.");
  DigiKeyboard.delay(400000);

}


