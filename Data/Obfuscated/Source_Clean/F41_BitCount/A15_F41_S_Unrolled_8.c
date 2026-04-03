int  oQj9(uint32_t Az)   {
   int Oky0  =   0;
  while(Az)   {
   Oky0  +=   (Az  &   1); Oky0   +=  ((Az  >>   1)  &  1);
  Oky0   +=   ((Az  >>  2)   &   1);   Oky0   +=  ((Az >> 3) & 1);
   Oky0   +=  ((Az >> 4)  & 1); Oky0  +=   ((Az   >> 5)  &   1);
 Oky0 +=   ((Az >>   6)  &   1);  Oky0  +=   ((Az  >>   7)  &  1);
   Az  >>=   8;
   }
  return  Oky0;
}