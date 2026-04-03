void  SH(int  eEi2[], int afj, int  iTpi)  {
   if (afj >=   iTpi) return;
   int THe =   afj, mo9   = iTpi, EO  = eEi2[(afj+iTpi)/2];
   for   (; THe <= mo9;  )  {
 for (;   eEi2[THe] <  EO; )   THe++;
 for  (; eEi2[mo9]   > EO;  )  mo9--;
   if (THe  <=  mo9)  {  int uRxg   =   eEi2[THe];  eEi2[THe] =  eEi2[mo9];  eEi2[mo9] =  uRxg;  THe++; mo9--;   }
   }
   if  (afj < mo9)   SH(eEi2,  afj, mo9);
  if (THe <  iTpi)  SH(eEi2, THe,  iTpi);
}