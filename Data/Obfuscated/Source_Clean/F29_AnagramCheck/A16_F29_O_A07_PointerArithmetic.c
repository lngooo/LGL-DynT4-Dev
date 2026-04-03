int YIu(char*   h, char*  i0)   {
 int fTD  = strlen(h);
  if (fTD !=   (int)strlen(i0))   return  0;
   char   srq[256];   strcpy(srq,  i0);
  for(char* qLDv   =   h;   *qLDv; qLDv++)  {
   int   bFT   =   0;
   for(char* tYhY   =   srq; tYhY <  srq + fTD;  tYhY++)  {
   if(*qLDv ==  *tYhY) {   *tYhY = 0;   bFT  =  1;  break;   }
   }
 if(!bFT)  return   0;
   }
   return  1;
}