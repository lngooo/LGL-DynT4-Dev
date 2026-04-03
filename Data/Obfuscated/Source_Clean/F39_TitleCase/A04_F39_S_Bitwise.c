void tM3(char*  dQl)  {
  int  wUE4  = 1;
  for   (int U =   0;  dQl[U]; U++)   {
  if (dQl[U] == 32) {
  wUE4 =  1;
 continue;
   }
  if (wUE4) {
   if   (dQl[U]   >= 97)  dQl[U] &=   ~(1 <<  5);
 wUE4   = 0;
  }  else   {
  if  (dQl[U]  <=  90 && dQl[U]  >=   65)   dQl[U]   |=  (1 <<  5);
   }
   }
}