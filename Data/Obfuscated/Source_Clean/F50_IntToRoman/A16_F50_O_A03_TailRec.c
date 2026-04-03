void IV(int TcC1,  char*   vF)  {
O:
   if  (TcC1 <=  0) return;
  if  (TcC1  >=   1000)   {   strcat(vF, "M");   TcC1  -=   1000;  goto O; }
  if  (TcC1  >=   900) {   strcat(vF, "CM"); TcC1 -=   900;  goto O; }
 if (TcC1  >=   500) {  strcat(vF, "D"); TcC1   -= 500;   goto  O;  }
   if (TcC1 >=  400)   {   strcat(vF,  "CD");   TcC1  -=   400;   goto   O;   }
   if  (TcC1  >= 100) { strcat(vF, "C"); TcC1   -= 100; goto  O;  }
   if  (TcC1 >=  90)  { strcat(vF,   "XC");   TcC1   -=   90;   goto O;   }
  if  (TcC1 >= 50)   {  strcat(vF,   "L");   TcC1  -=   50; goto O; }
 if (TcC1  >=   40)   {  strcat(vF,   "XL");   TcC1   -= 40; goto O;  }
 if  (TcC1 >= 10)  { strcat(vF,  "X"); TcC1   -=   10;   goto O;   }
  if (TcC1 >=   9)  {   strcat(vF,   "IX"); TcC1  -=   9;   goto   O;  }
 if  (TcC1   >=  5)   { strcat(vF,  "V");   TcC1  -= 5; goto O; }
   if (TcC1 >= 4)   {  strcat(vF,  "IV"); TcC1 -=   4; goto   O;  }
 strcat(vF, "I");  TcC1   -=  1; goto O;
}

void  V(int  TcC1,   char* vF)  {
   vF[0]  =  '\0';
 IV(TcC1,  vF);
}