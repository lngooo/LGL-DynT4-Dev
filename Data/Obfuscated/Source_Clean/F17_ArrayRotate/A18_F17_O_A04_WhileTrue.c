void  Z(int   bS[], int   Y, int   SL) {
  if   (Y  ==  0)   return;
  SL  %=  Y;
  int   PLOF =  0;
   while(1)   {
   if(PLOF   >=  SL)   break;
   int  z7 =   bS[0], TLv  =  0;
   while(1)   {
   if(TLv  >= Y -  1) break;
 bS[TLv] =   bS[TLv+1]; TLv++;
 }
   bS[Y-1]  =  z7;  PLOF++;
   }
}