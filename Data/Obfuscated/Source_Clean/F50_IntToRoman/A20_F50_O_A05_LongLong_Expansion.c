void   j(int   VLW2, char*  mmZ)   {
  long  long   N   =  VLW2;
 mmZ[0] = '\0';
  while(N  >=  1000LL)  {   strcat(mmZ,   "M");   N   -= 1000; }
   if(N  >= 900LL)   { strcat(mmZ, "CM"); N  -= 900;   }
  if(N >=  500LL)   {   strcat(mmZ, "D");  N   -= 500; }
   if(N >=  400LL)   {  strcat(mmZ,  "CD");  N -=   400;  }
   while(N  >=  100LL)  {  strcat(mmZ, "C");  N  -=  100;   }
 if(N   >=  90LL)  { strcat(mmZ, "XC");  N   -=  90;   }
   if(N   >=   50LL)  {   strcat(mmZ, "L");  N -=  50; }
 if(N >=   40LL)  {  strcat(mmZ,   "XL");  N -=  40;  }
  while(N  >=  10LL)   {   strcat(mmZ, "X"); N -= 10;  }
 if(N >= 9LL)  {  strcat(mmZ, "IX");   N -=  9;   }
   if(N  >=  5LL)   {   strcat(mmZ, "V");  N   -=  5;  }
  if(N   >= 4LL)   { strcat(mmZ,   "IV"); N  -=  4;   }
   while(N   >= 1LL)   { strcat(mmZ,  "I");   N  -=   1;  }
}