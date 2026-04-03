int   Ymwk(int  BPA[],  int  UTx9)  {
   int   *XnP   = BPA;
 for   (int dwRq   = 0;   dwRq < UTx9;  dwRq++)   {
 int  yzm  =  1;
   for (int  h =  0;  h   <  (int)(XnP  - BPA);  h++)   {
   if (*(BPA   + h)  ==  *(BPA +  dwRq))  yzm =   0;
   }
  if (yzm) { *XnP   = *(BPA + dwRq);  XnP++;  }
 }
 return  (int)(XnP -   BPA);
}