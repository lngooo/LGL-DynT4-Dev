int T(int  ZGua)   {
 int  hX0 = 0,  yokz8   =  0;
   while  (hX0 != 2)   {
  switch (hX0)  {
  case 0:  ZGua   >>= 1;  hX0   =  (ZGua   >   0)  ?   1 :   2; break;
   case  1:  yokz8++;   hX0  =   0; break;
  }
   }
  return yokz8;
}