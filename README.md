# number-guessing game 
a simple number guessing game written in C

the computer randomly chooses a number, and you try to guess it.Choose a difficulty level to change the number range and the number you got.

## features (lol)
-easy - 1-10 , 5 attempts
-mid -1-50 , 10 attempts
-hard - 1-100 ,unlimeted attempts
-hints when your guess is too high or low
-option to play again

## built wih
- C
- stdio.h
-stdlib.h
-time.h
string.h

## run (this requires curl + gcc on the reviewer's machine.)-

### for mac and linux -
curl -O https://raw.githubusercontent.com/nAItiklearn/number-guessing/main/number-guess.c && gcc number-guess.c -o game && ./game
 
### Windows PowerShell
```powershell
curl.exe -o number-guess.c https://raw.githubusercontent.com/nAItiklearn/number-guessing/main/number-guess.c; gcc number-guess.c -o game.exe; .\game.exe