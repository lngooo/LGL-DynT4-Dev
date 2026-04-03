unsigned   int   sQ(unsigned  int   PWho)  {
  unsigned  int MG = 0;
   int YdzW  =  10;
  for   (int  Bw  = 0;   Bw < 31;  Bw++)   {
 if   ((YdzW  *  YdzW) >= 100)  { 
   if   (((PWho   >> Bw)   & 1) ^  ((PWho >>  (Bw   +  1)) &  1)) MG   |=   (1U <<  Bw);
 } else {  PWho++;  }   
 }
 MG   |=   (PWho &  0x80000000);
   return MG;
}