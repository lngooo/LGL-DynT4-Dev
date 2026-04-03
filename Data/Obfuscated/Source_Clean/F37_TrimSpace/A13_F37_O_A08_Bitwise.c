void  o(char* uWr1)  {
   int  oL   =   0;
   for  (int  ZdNe   =   0;  uWr1[ZdNe]; ZdNe++) {
   unsigned   char  Og   = uWr1[ZdNe];
  int   QJD   = !(Og   ^   32);
  int lU  = !(Og ^  9);
   int   qLvt8  =  !(Og  ^ 10);
   if  (!(QJD  |   lU | qLvt8))  {
   uWr1[oL]   = uWr1[ZdNe];
 oL  = -~oL;  
   }
   }
 uWr1[oL]  =  0;
}