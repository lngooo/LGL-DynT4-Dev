void M(char* VtZc)  {
  while (*VtZc) {
  int  CSB  =   (*VtZc >=   'a'  &&   *VtZc   <=   'z');
  int X  =   (*VtZc   >=   'A'  && *VtZc  <= 'Z');
  int  Shal   = (CSB  * -32)   +  (X  * 32);
   *VtZc  =   (char)((int)*VtZc +   Shal);
   VtZc++;
   }
}