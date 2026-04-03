void  eC(char*   BM1,   int  sTy)   {
  if (!*BM1) return;
   if  (isspace(*BM1))  {
   eC(BM1 +   1,   1);
 } else {
  *BM1   =   sTy   ? toupper(*BM1) :  tolower(*BM1);
   eC(BM1 +   1,   0);
   }
}

void   Vom2(char*   BM1)   {
   eC(BM1,  1);
}