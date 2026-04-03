void  ThtF(char* WlGU)  {
  if   (!WlGU || !*WlGU) return;
  int Yeqb   =   1;
  while (WlGU[Yeqb]  && WlGU[Yeqb]  == WlGU[0])   Yeqb++;
  printf("%c%d",  WlGU[0], Yeqb);
   ThtF(WlGU   +  Yeqb);
}

void   NDL(char* WlGU)   {
   ThtF(WlGU);
   printf("\n");
}