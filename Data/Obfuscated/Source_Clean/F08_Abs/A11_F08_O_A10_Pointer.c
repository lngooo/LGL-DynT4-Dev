int Up(int W)   {
 int   eC[2];
   eC[0] = W;
  eC[1] =  -W;
 return  *(eC   +  (W   <  0));
}