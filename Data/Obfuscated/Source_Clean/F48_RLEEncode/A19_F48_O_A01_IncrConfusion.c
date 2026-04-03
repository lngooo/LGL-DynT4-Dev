void   b(const char   *AK,   char  *ky)  {
 int  eTfw  = -1, pn5 =   0;
 while   (AK[++eTfw])   {
 int  ouRG =   1;
   while (AK[eTfw +  ouRG]  ==  AK[eTfw])  ouRG++;
 ky[pn5++]   =  AK[eTfw];
   pn5  += sprintf(ky +  pn5,  "%d",   ouRG);
   eTfw  += (ouRG -   1);
  }
}