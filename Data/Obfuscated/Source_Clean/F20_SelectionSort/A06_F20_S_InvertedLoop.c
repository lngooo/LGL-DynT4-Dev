void  NzUM(int Sei[],  int xAyz)   {
 for  (int c6   = xAyz -   1;  c6 >   0; c6--)  {
 int FT  =  c6;
  for   (int qRoM  =   0;  qRoM <  c6;  qRoM++) {
 if   (Sei[qRoM] >  Sei[FT]) FT =   qRoM;
 }
 int I0   =  Sei[c6];   Sei[c6]  =  Sei[FT];  Sei[FT]  = I0;
 }
}