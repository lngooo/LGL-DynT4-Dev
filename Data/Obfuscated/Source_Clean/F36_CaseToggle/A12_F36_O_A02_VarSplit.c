void  VZ(char* ReR)   {
   int  En7  =   16,  hqE  = 16;
   while (*ReR)  {
 char FTN =   *ReR;
   if   ((FTN   >=   'a'   &&  FTN   <=   'z')   ||  (FTN   >=   'A'  && FTN   <=  'Z')) {
  *ReR =   FTN   ^  (En7 +   hqE);
   }
 ReR++;
   }
}