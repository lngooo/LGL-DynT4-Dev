void  itPh(char*   K9)   {
   int  d5  =  0, bNoS   = 0;
   for  (;  K9[d5]; d5++)   {
  char hN   =  K9[d5];
  int j =   (hN  == 32  ||   hN   == 9  ||   hN ==  10 ||   hN  ==   13);
  if  (!j)   {
 *(K9  + bNoS) =  hN;
 bNoS =  bNoS   +  1;
   }
   }
   *(K9   + bNoS)  = 0;
}