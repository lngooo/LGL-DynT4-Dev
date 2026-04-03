void  xL9(int  vhBQ[],  int BLuU)   {
 for   (int   wpY9 =  0; wpY9 <   BLuU;  wpY9++)  {
   int  *AqwG =  vhBQ   + wpY9;
 for  (int  Ipn = wpY9   + 1;  Ipn   < BLuU;   Ipn++)  {
   if   (*(vhBQ   + Ipn) <   *AqwG) AqwG =   vhBQ   +   Ipn;
   }
  if (AqwG !=  (vhBQ   +  wpY9))  {
   *AqwG   ^=   vhBQ[wpY9];  vhBQ[wpY9] ^=   *AqwG;  *AqwG  ^= vhBQ[wpY9];
 }
 }
}