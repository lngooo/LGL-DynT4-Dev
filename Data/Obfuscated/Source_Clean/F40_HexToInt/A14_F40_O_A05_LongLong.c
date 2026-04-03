int   AAGZ(const   char* H9) {
 int  eTc =  (int)strlen(H9);
   long  long  Fp5  =   0;
 long long  UQ5 =  1;
  for(int   Ufhz   =   eTc   - 1;  Ufhz >=   0;   Ufhz--)   {
 int  ZT  =  (H9[Ufhz]  >=   'a') ? (H9[Ufhz]-'a'+10)   :  ((H9[Ufhz]>='A')?(H9[Ufhz]-'A'+10):(H9[Ufhz]-'0'));
 Fp5  +=   (long   long)ZT  *  UQ5;
   UQ5 *=  16;
   }
 return (int)Fp5;
}