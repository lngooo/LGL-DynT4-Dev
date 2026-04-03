void   nao2(int   nyvp6,  char*   D8)  {
  D8[0] =   '\0';
   while(nyvp6   >=  1000) {   strcat(D8,   "M"); nyvp6   -=  1000;  }
 if(nyvp6 >= 900) {   strcat(D8, "CM");   nyvp6 -=  900;   }
  if(nyvp6   >=   500) {   strcat(D8,  "D");   nyvp6 -=   500;  }
  if(nyvp6 >=  400) { strcat(D8,   "CD"); nyvp6  -=  400;  }
   while(nyvp6 >= 100)  {  strcat(D8,   "C");   nyvp6  -= 100;  }
 if(nyvp6  >=  90)  { strcat(D8, "XC");   nyvp6   -=  90;   }
  if(nyvp6  >= 50) {   strcat(D8,  "L"); nyvp6   -= 50; }
   if(nyvp6   >=   40)  { strcat(D8,  "XL");   nyvp6 -=   40;  }
  while(nyvp6 >=   10) { strcat(D8,  "X");   nyvp6  -= 10;  }
   if(nyvp6 >=   9)   {  strcat(D8,   "IX");   nyvp6 -=   9;   }
 if(nyvp6   >=   5) {   strcat(D8,   "V"); nyvp6   -= 5;   }
   if(nyvp6  >= 4)  {  strcat(D8,   "IV"); nyvp6  -=   4; }
   while(nyvp6  >= 1)   {   strcat(D8, "I");   nyvp6 -=  1;   }
}