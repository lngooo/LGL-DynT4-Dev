void y(char  *SXQi,  int   M)  {

 int UolQ7   = 0;
 int  snN6 = (M %  26  + 26)   %  26;
  while  (SXQi[UolQ7] !=  '\0') {
   if   (SXQi[UolQ7]   >= 'a'   && SXQi[UolQ7]  <= 'z')   SXQi[UolQ7]  =   (SXQi[UolQ7]  - 'a'   +   snN6)   %  26  +   'a';
  else  if   (SXQi[UolQ7] >= 'A' &&   SXQi[UolQ7] <= 'Z')  SXQi[UolQ7] =   (SXQi[UolQ7]   -  'A' + snN6)   % 26   +   'A';
   UolQ7++;
   }
}