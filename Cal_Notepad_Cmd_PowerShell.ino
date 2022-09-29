#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);

// Launching Calculator
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);

  DigiKeyboard.delay(500);

  DigiKeyboard.print("calc");

  DigiKeyboard.sendKeyStroke(KEY_ENTER);


// Launching CMD with Admin Priv
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);

  DigiKeyboard.delay(500);

  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

// Launching PowerShell ISE with Admin Priv

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);

  DigiKeyboard.delay(500);

  DigiKeyboard.print("PowerShell ISE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);


// Launching Notpad and Leaving a message
  DigiKeyboard.delay(2000);

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


