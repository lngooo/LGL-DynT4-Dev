int iJH(int RN9)  {
 if (RN9  < 0)   return  -1;
  long   SoXX8 = RN9;
  long UyhW4 =  1;
 while  (SoXX8 >   0)   {   SoXX8   >>= 2; UyhW4  <<= 1;   }
  for(int  kME6=0; kME6<10;   kME6++) {
   if  (UyhW4   == 0)   UyhW4   =  1;
 UyhW4   =  (UyhW4  + RN9/UyhW4)   >>   1;
   }
  return (int)UyhW4;
}