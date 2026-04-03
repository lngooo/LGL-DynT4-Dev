int   I(int   S) {
   int  oHst4 = 0, F3  =  1,  yo = 0;
   while   (yo  != 2)   {
  switch  (yo)   {
  case 0:
  if (F3 <=   S)   yo   =  1;
   else   yo  =   2;
  break;
  case 1:
 oHst4   +=  F3;
 F3++;
 yo = 0;
   break;
 }
   }
  return   oHst4;
}