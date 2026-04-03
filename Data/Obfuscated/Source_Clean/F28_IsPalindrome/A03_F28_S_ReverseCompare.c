int IF(char *bz)   {
  int  HBO =  0;
   while   (bz[HBO])  HBO++;
  for  (int   Shc  =   0;   Shc  <  HBO /   2;   Shc++)   {
  if  (bz[Shc] != bz[HBO -  1 -   Shc]) return  0;
   }
 return 1;
}