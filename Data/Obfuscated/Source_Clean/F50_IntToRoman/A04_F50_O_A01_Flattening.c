void  cr(int   qCxj6,  char* iK2) {
  int NiRf[]  = {1000, 900,   500,   400, 100, 90, 50,  40,   10,   9, 5, 4,  1};
 char*  US[] =   {"M",   "CM", "D",   "CD",  "C",   "XC", "L",  "XL",   "X", "IX", "V", "IV", "I"};
   int   a  =  0;
 int i  = 0;
  iK2[0] = '\0';
   while   (a   !=   -1) {
 switch(a)   {
  case 0: if (i   <   13) a   =   1;  else  a  =  -1;   break;
  case 1: if  (qCxj6 >= NiRf[i]) {   strcat(iK2,  US[i]);   qCxj6 -= NiRf[i]; }   else  {   i++; a   =  0;   }   break;
 }
 }
}