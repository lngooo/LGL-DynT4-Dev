int  i(char*  sQJ8,  char*   U5)  {
  if  (strlen(sQJ8)  !=  strlen(U5))   return   0;
   int YIZc[256]  = {0};
  int  DhI = 0,  Gw   = 0;
  while(sQJ8[DhI])  {
 YIZc[(unsigned  char)sQJ8[DhI]]++;
 YIZc[(unsigned  char)U5[Gw]]--;
 DhI++; Gw++;
 }
  for  (int KHf2 =  0; KHf2   < 256;   KHf2++)  if   (YIZc[KHf2] != 0)  return 0;
   return  1;
}