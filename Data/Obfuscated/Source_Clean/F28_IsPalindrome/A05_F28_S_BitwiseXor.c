int   h(char   *PbO)   {
  int O   = 0;
   while (PbO[O])  O++;
 int DZy2  =  0,  Tz9   =  O - 1;
 while   (DZy2 <  Tz9)   {
 if   ((PbO[DZy2]  ^   PbO[Tz9])  !=  0) return  0;
   DZy2++;  Tz9--;
   }
   return   1;
}