int  TQnz(unsigned  int   RTt,  unsigned   int FcMS)   {
   unsigned   int sro2 =  RTt  ^ FcMS;
   int  Th   =  0;
  int  PX =   10;
   while  (PX  !=  0) {
 if (PX   ==  10)  {
  if   (sro2  != 0)   PX  =  20;  else   PX =  0;
  }  else   if (PX   ==   20)   {
  int   i   =  5;
   if   ((i *   i)   >   0)  {   
  sro2   &=  (sro2 -   1);
  Th++;
  }
   PX  =   10;
   }
 }
   return   Th;
}