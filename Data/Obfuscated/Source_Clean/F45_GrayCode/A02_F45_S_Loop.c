unsigned   int   i(unsigned int   oGw)   {
  unsigned   int  RGG  =  0;
   for  (int rUqO  =   0;  rUqO <   31; rUqO++) {
   if  (((oGw >>  rUqO)   & 1)   ^   ((oGw >> (rUqO   +   1))   &  1))  {
 RGG   |=  (1U  << rUqO);
   }
   }
   RGG   |=   (oGw   & 0x80000000); 
  return  RGG;
}