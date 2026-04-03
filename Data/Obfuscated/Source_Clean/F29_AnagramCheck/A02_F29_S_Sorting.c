void FB1(char*   JAxn,  int BwBx7)   {
 for (int   B =  0;  B   <  BwBx7-1; B++) {
   for   (int GnfC9 = 0;  GnfC9   <   BwBx7-B-1; GnfC9++)  {
  if (JAxn[GnfC9] > JAxn[GnfC9+1])   {
   char  WIAN  =   JAxn[GnfC9];
   JAxn[GnfC9]   =   JAxn[GnfC9+1];
   JAxn[GnfC9+1]   =  WIAN;
 }
  }
 }
}

int r(char*   nQso,  char* LKB)   {
 int S   =  strlen(nQso);
  int  ieg =  strlen(LKB);
   if (S   !=   ieg)  return   0;
  char   bsZ[256], SSA[256];
 strcpy(bsZ,  nQso);  strcpy(SSA,   LKB);
 FB1(bsZ,  S);  FB1(SSA, ieg);
   return   strcmp(bsZ,   SSA) == 0;
}