int   QBOR(int  Ei[],   int  Ti,  int N3, int mk)  {
   if (N3 ==  Ti)  return  mk;
   return   QBOR(Ei,  Ti,   N3   + 1,   (Ei[N3]   >   mk  ?  Ei[N3]   :   mk));
}

int  wLJ(int  VHAF[], int   Ti) {   return   QBOR(VHAF,  Ti,   0,  VHAF[0]);   }