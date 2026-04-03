void  ze1(const  char  *sB5,   char  *OjWn)   {
  int   cE8 =  0, C   =  0,  BHJ9   =  strlen(sB5);
   while (cE8 < BHJ9)  {
 int  ewt = 1;
  while   (cE8  +   1 <   BHJ9  && sB5[cE8] ==   sB5[cE8+1])   { ewt++; cE8++;   }
 C  +=  sprintf(OjWn   + C,   "%c%d",  sB5[cE8], ewt);
  cE8++;
   }
}