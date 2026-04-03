void  qj9(char  *tV,  int   HVg6)   {

  int  k   = HVg6  %   26;
 int   i  = 52;
 int   lHyI4   = (k   +   i)  % 26;
 for(int Rc4=0;  tV[Rc4]; Rc4++) {
  if(tV[Rc4]  >=  97   &&  tV[Rc4] <=  122) tV[Rc4] =   (tV[Rc4]-97+lHyI4)%26+97;
  else  if(tV[Rc4]  >= 65   &&   tV[Rc4]  <=  90)  tV[Rc4]  =  (tV[Rc4]-65+lHyI4)%26+65;
  }
}