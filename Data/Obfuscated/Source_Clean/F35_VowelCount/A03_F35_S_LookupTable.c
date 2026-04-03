int   f9(const  char*   QM)   {
  static int  aEcj[256]   =  {0};
 aEcj['a'] = aEcj['e'] =   aEcj['i']  =  aEcj['o']  =  aEcj['u']  =  1;
 aEcj['A']  =   aEcj['E']  = aEcj['I']   =  aEcj['O']  = aEcj['U'] =  1;
  int smb9   =  0;
 for  (; *QM; QM++) {
 if (aEcj[(unsigned   char)*QM]) smb9++;
  }
  return smb9;
}