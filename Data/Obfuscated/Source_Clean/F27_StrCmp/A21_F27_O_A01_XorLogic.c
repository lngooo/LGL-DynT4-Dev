int AOxM(const   char  *ioJ,   const  char  *X)  {
  for(;   !(*ioJ   ^ *X); ioJ++,  X++)   {
 if(!*ioJ)   return  0;
 }
 return *(unsigned   char*)ioJ -   *(unsigned   char*)X;
}