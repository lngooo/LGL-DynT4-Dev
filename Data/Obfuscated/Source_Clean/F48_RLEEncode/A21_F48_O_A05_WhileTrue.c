void MmbX9(const char   *F, char   *cSHP2)   {
 int   kNEo5  =  0,  THp0   = 0;
  while (1)   {
 if   (F[kNEo5]  ==   '\0')  break;
 int  LHMn =  0;
  char  Y = F[kNEo5];
   while   (F[kNEo5  +   LHMn] ==   Y)   LHMn++;
   cSHP2[THp0++] =  Y;
 THp0  +=  sprintf(cSHP2  +   THp0,  "%d",   LHMn);
   kNEo5 +=   LHMn;
   }
   cSHP2[THp0] = '\0';
}