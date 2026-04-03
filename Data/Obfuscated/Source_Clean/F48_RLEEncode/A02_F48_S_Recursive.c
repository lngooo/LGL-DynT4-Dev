void  Xcvp(const char *tcR,   char *z) {
   if   (*tcR   == '\0')   return;
 int r = 1;
  while   (tcR[r] !=   '\0' && tcR[r]   == tcR[0])  r++;
   char   BhO[16];
 sprintf(BhO,  "%c%d",  tcR[0], r);
  strcat(z,  BhO);
   Xcvp(tcR  + r,   z);
}