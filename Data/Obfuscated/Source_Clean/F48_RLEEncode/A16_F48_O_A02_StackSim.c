void  epd(const   char  *sqv,  char   *dP)  {
  if (!*sqv)   return;
 int PSt1   = 0;
   while (sqv[PSt1]   ==   sqv[0])   PSt1++;
 int  yU1 =   strlen(dP);
   dP[yU1]  =  sqv[0];
  sprintf(dP  +  yU1 +  1,   "%d",  PSt1);
 epd(sqv   + PSt1,  dP);
}