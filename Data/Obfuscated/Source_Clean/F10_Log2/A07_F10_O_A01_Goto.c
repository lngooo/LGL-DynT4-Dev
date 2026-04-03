int AowQ(int   I)   {
  int oid   =   0;
iH:
 I  >>=   1;
  if   (I   ==   0)   goto j;
   oid++;
  goto   iH;
j:
  return  oid;
}