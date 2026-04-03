unsigned  int   P4(unsigned  int wWZ)  {
 unsigned int   tw =  wWZ;
 unsigned   int  r0 =   wWZ   >> 1;

 return   (tw | r0)  &   ~(tw &   r0);
}