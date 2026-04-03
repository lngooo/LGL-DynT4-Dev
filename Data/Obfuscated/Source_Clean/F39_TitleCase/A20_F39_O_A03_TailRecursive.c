void  puLl(char*   DL)   {
g0:
 if  (!*DL)  return;
  static  int FZLu = 1;
   if (isspace(*DL)) {
 FZLu  =   1;
   }   else   {
   *DL =  FZLu ?  toupper(*DL)  : tolower(*DL);
   FZLu  =   0;
   }
 DL++;
  goto   g0;
}