int   xfwX(char*   Btuz, char w)  {
 int   Iszc2  =   0;
 while   (*Btuz)  {

 int  Z1   =   *Btuz ^   w;
  if (!Z1)  {
  Iszc2   =  -~Iszc2;   
  }
   Btuz  = (char*)((size_t)Btuz  +  1);
   }
  return   Iszc2;
}