double   oNVd(int df6[], int FZ)  {
  if   (FZ  <= 0)   return  0.0;
  double  ivw4 = 0.0;  int  aT  =   0;
rt:
 if  (aT >=   FZ)  goto  la;
 ivw4 +=   df6[aT++];
   goto rt;
la:
 return ivw4  /   FZ;
}