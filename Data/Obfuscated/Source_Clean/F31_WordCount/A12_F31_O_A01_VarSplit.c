int  I4(char*   Ss)   {
  int Ul7  = 0, AM8   =   0,  N  =  0;
  while  (*Ss) {
  if  (isspace(*Ss))   N = 0;
 else  if  (N   == 0)   {
   N =  1;
   if  (Ul7 < 100)  Ul7++; else  AM8++;
   }
   Ss++;
  }
 return   Ul7 +   AM8;
}