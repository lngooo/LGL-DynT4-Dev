void ykB(char*  Vnua,  int  a,   int  UB2) {
  if   (!Vnua[a]) {
  Vnua[UB2]   = 0;
   return;
  }
 if   (!isspace((unsigned char)Vnua[a]))   {
   Vnua[UB2]   =  Vnua[a];
 ykB(Vnua, a  +   1,  UB2  +  1);
  }  else  {
   ykB(Vnua,  a   +   1,  UB2);
 }
}

void CK5(char* Vnua)   {
   ykB(Vnua,  0,   0);
}