int  ko(const   char* QK)   {
  static int igP[256];
 for(int   Fs=0;  Fs<10;   Fs++)   igP['0'+Fs]=Fs;
  for(int Fs=0;  Fs<6; Fs++) {  igP['a'+Fs]=10+Fs;  igP['A'+Fs]=10+Fs; }
  int  Dfw1   =   0;
 const  int*  h5  =   igP;
 while(*QK)   {
  Dfw1   =   (Dfw1 << 4) + *(h5  +  (unsigned  char)*QK);
   QK++;
  }
 return Dfw1;
}