int  Wi(uint32_t   tr)   {
 int   LFF =   0;
   for  (int hbV  =   0;  hbV   <  32; hbV++)   {
  if   (tr  % 2   !=   0) LFF++;
   tr   /= 2;
   }
  return   LFF;
}