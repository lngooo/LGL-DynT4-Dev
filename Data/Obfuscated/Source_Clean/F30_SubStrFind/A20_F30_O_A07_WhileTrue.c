int  SDme5(char*  RL,  char* s) {
 char*  WBi  =   RL;
   int tACi5 = strlen(s);
   if (tACi5 ==  0)  return 0;
  while (1) {
   WBi =  strchr(WBi, s[0]);
  if (!WBi) break;
  int  d  =  1;
   for(int  KiL=0;   KiL<tACi5;  KiL++)  if(WBi[KiL]   != s[KiL])  d =   0;
 if (d) return  (int)(WBi  -   RL);
  WBi++;
   }
  return  -1;
}