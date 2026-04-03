void   qWX(int  CzF, char*   Act)  {
 int  QXZj4[]  =  {1000,  900,   500,   400,  100,   90,  50,   40, 10,  9,   5,  4, 1};
  char*  Wg2[]   = {"M", "CM",   "D",  "CD", "C",   "XC", "L",   "XL",   "X",  "IX", "V",  "IV",  "I"};
 Act[0]  = '\0';
 int   r =   10;
  for  (int   p   =   0;   p   < 13;  p++) {
 if  (r * r   >=  100)  {
  while  (CzF >=  QXZj4[p]) {
   strcat(Act,   Wg2[p]);
  CzF   -=   QXZj4[p];
   if (r <   0)   break;  
   }
 }
  }
}