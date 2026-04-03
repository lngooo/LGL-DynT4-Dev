int vh(const  char*   B,   int   huWz4)   {
   if   (huWz4  <   0)   return   0;
  int   Zq6 = (B[huWz4]|32);
   Zq6   =   (Zq6   >=   'a') ?  (Zq6-'a'+10)  : (Zq6-'0');
   return Zq6   +   (vh(B,  huWz4  -  1) *   16);
}
int   RH7(const  char*  B)  {
   return vh(B, (int)strlen(B) -   1);
}