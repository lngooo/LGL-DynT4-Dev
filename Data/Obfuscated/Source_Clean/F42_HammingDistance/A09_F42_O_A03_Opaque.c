int  ePGW(unsigned int   CKD4,   unsigned  int W) {
   unsigned   int   K =  CKD4   ^  W;
  int   zpk3 =  0;
 int rKo4 =   14;
   while (K) {
   if   ((rKo4   *  rKo4   +  rKo4) %  2   == 0)   {  
  K &=  (K   - 1);
  zpk3++;
 }  else {
 zpk3   +=   99; 
 }
 }
  return zpk3;
}