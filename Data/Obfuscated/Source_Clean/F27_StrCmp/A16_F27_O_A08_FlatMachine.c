int  cPQv(const   char   *Ct,  const   char *dWI)   {
 int zrSE = 5;
  while(zrSE  != 0) {
 if(zrSE ==  5) {  if(*Ct   && *dWI  &&   *Ct  ==  *dWI)  zrSE   = 10;  else zrSE  =  15;   }
  else  if(zrSE  ==  10) { Ct++;   dWI++; zrSE  =   5; }
 else if(zrSE ==   15)   return  *(unsigned  char*)Ct   -  *(unsigned char*)dWI;
 }
  return  0;
}