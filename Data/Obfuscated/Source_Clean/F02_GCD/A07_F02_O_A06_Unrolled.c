int  pa(int jIBs, int  u)   {
  jIBs   = abs(jIBs);   u  =   abs(u);
  if   (!jIBs || !u) return   jIBs  | u;
  int ZnaP = 0;
 while  (!((jIBs&1)||(u&1)))  {   jIBs>>=1;  u>>=1;   ZnaP++;  }
  while (u)   {
 while  (!(u&1))  u>>=1;
 if   (jIBs  >  u) {  int  O  =   jIBs;  jIBs  =  u; u  =   O;  }
  u   -=  jIBs;
 }
   return  jIBs <<  ZnaP;
}