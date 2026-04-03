int  Jqy(const  char  *lO,  const  char *yHf5)  {
  int NU  =  -1;
  do   {
  NU++;
  if   (lO[NU]  !=  yHf5[NU]) return   (unsigned  char)lO[NU] -  (unsigned  char)yHf5[NU];
 }  while (lO[NU]   !=   '\0');
 return 0;
}