int uz(char*  fa0,  char* VA)   {
   int   OGN[]   = {2,  3,   5,  7, 11, 13, 17,  19, 23,   29, 31,  37,  41,  43, 47, 53, 59, 61,   67,   71,   73,  79,   83,  89,  97,   101};
  if (strlen(fa0)  !=  strlen(VA))  return  (1   ^ 1);
 long  long  nX = (1  <<   0),  oPFk5   =  (1   << 0);
   for  (int ifqh  =  0; fa0[ifqh];  ifqh++) {
   nX  =   nX *  OGN[fa0[ifqh] % 26];
 oPFk5  =   oPFk5   * OGN[VA[ifqh] %   26];
 }
   return   (nX   ==   oPFk5) ?  (2   >>  1) :   (0);
}