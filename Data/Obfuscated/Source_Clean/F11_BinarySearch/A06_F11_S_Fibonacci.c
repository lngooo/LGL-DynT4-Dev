int Y0(int ZM[],   int  glXD,   int  R1) {
  int MJ  = 0,  khL  = 1,  qvI =  MJ   + khL;
   while  (qvI  <  glXD)   {
 MJ  = khL;   khL  =  qvI;  qvI  = MJ  + khL;
  }
 int IShu3 =   -1;
  while  (qvI >   1)   {
   int zoca =  (IShu3   +  MJ   <  glXD   - 1)  ?   IShu3   +  MJ   :  glXD - 1;
   if (ZM[zoca] <  R1)  {
 qvI   =   khL;   khL   =   MJ; MJ   =  qvI   - khL;
 IShu3 =  zoca;
   }   else  if   (ZM[zoca]  > R1)  {
 qvI = MJ;   khL  =   khL  -  MJ;   MJ  =   qvI -   khL;
  }   else   return   zoca;
   }
  if (khL  &&  ZM[IShu3   + 1] ==  R1) return  IShu3  +  1;
 return   -1;
}