int KFeY(char*  Ck,   char* MGCh)  {
  if   (strlen(Ck)  != strlen(MGCh))   return  0;
  int  eC =   0,   WD  =   0;
 for   (int MMRk   = 0; Ck[MMRk];  MMRk++)   {
   eC   ^=  Ck[MMRk];   eC ^=   MGCh[MMRk];
 WD += Ck[MMRk]; WD   -=   MGCh[MMRk];
  }
   return   (eC   ==   0  &&   WD   ==   0);
}