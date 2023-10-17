#include"DigiKeyboard.h" //Digispark'ın klavye olarak kullanılmasını sağlıyor
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0); //Hangi tuşa basılacağını belirliyoruz boş tuşa bastırmak istediğim için "0" yazdım.
  DigiKeyboard.delay(100);       //Bekleme süresi girilir minisaniye olarak .Saniyenin bine bölünmesiyle elde edilen yeni birim milisaniye olarak adlandırılır. 1000 milisaniye = 1 saniye
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //MOD_GUI_LEFT = sol taraftaki windows tuşuna bas. KEY_R = r tuşuna bas . Burda windows+R 'ye basmaya çalışıyorum.önce basılacak tuş sağ tarafta yazılır.
  DigiKeyboard.delay(100);
  DigiKeyboard.print("notepad.exe"); //yazdırma komutu
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Merhaba Dünya.");
  DigiKeyboard.delay(5000);
}
