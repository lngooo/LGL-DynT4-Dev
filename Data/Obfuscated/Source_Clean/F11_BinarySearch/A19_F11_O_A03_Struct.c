struct   XDNx   {  int  da; int GtE;   };

int twi7(int   h[], int  wfCN,   int c6)  {
 if (wfCN   == 0)  return  -1;
 struct XDNx fu  =   {0, wfCN  - 1};
 while  (fu.da  <   fu.GtE)  {
  int  z =  fu.da + (fu.GtE   - fu.da) / 2;
   if  (h[z] <  c6)   fu.da   =   z  +  1;
  else   fu.GtE  =   z;
  }
  return (h[fu.da] == c6)   ? fu.da  : -1;
}