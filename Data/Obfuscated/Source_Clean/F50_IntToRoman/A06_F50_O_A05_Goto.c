void   gZA(int  w, char*   qxHJ)  {
   qxHJ[0] =  '\0';
W:
   if  (w < 1000)  goto   H;
  strcat(qxHJ,  "M");   w   -=   1000; goto   W;
H:
  if  (w   < 900)   goto ZM;
  strcat(qxHJ,   "CM");  w  -=   900;
ZM:
   if  (w < 500) goto   MnPi;
   strcat(qxHJ,  "D");   w -=  500;
MnPi:
   if (w  < 400)  goto Shmg;
 strcat(qxHJ,  "CD");  w  -=   400;
Shmg:
 if   (w   <   100)  goto   jk1;
  strcat(qxHJ,   "C");  w   -=  100;   goto Shmg;
jk1:
 if   (w  < 90) goto eLS;
  strcat(qxHJ, "XC");   w -=   90;
eLS:
 if  (w  < 50)  goto  D;
   strcat(qxHJ,   "L");  w  -=  50;
D:
 if  (w  <   40)  goto ap;
 strcat(qxHJ, "XL"); w  -=   40;
ap:
 if (w <  10) goto   jk;
  strcat(qxHJ,   "X");   w  -= 10; goto  ap;
jk:
   if   (w   <  9) goto   qlGo;
  strcat(qxHJ,  "IX"); w -= 9;
qlGo:
   if  (w <   5)   goto   dN;
 strcat(qxHJ,   "V"); w  -=   5;
dN:
  if   (w  <  4)  goto Dsp;
  strcat(qxHJ, "IV");   w   -=  4;
Dsp:
   if  (w   <   1)   return;
 strcat(qxHJ,   "I");  w -= 1; goto  Dsp;
}