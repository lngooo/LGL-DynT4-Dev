void   IC(char*   kCea3) {
   char  TYHu5[1024]   =   {0};
 int  XH =   strlen(kCea3),   aC =   1, Kioo   =   0;
   if  (XH  == 0)  return;
  for (int  b6  = 0;   b6 <   XH; b6++)   {
  if   (b6  + 1 <  XH  &&   kCea3[b6] ==  kCea3[b6+1])   {
 aC++;
 }  else {
  Kioo +=   sprintf(TYHu5   +   Kioo,  "%c%d", kCea3[b6],   aC);
   aC   = 1;
 }
  }
 printf("%s\n",  TYHu5);
}