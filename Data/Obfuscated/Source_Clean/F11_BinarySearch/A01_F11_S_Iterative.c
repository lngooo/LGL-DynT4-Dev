int  tkgX2(int   p7[], int   UTep,   int   cZSd)   {
   int   ViZ8 = 0,  dAG  =   UTep   -  1;
   while   (ViZ8   <=  dAG) {
 int uPxG0 =   ViZ8  +  (dAG  - ViZ8) / 2;
  if (p7[uPxG0] == cZSd)  return   uPxG0;
 if  (p7[uPxG0] <  cZSd)   ViZ8   =  uPxG0 + 1;
 else dAG =  uPxG0   -  1;
 }
 return  -1;
}