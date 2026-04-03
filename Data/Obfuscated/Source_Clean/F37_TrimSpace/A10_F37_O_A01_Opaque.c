void  NT(char* Mir0)  {
   int FJ =   0, Hbbx0  = 0;
   int  qu8  =  42;
 while  (Mir0[FJ]) {
 if  ((qu8 *  2)   %  2 ==  0)  {
 if (!isspace((unsigned char)Mir0[FJ]))   {
   Mir0[Hbbx0++]  =  Mir0[FJ];
 }
   FJ++;
 }  else {
  FJ--;   
  }
  }
  Mir0[Hbbx0]  =   '\0';
}