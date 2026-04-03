void f(int   WZ8[],   int JGQe) {
   int  NmpH = 0,  ijRC;
oyM:
  if   (NmpH   >= JGQe -  1)   goto AT;
  ijRC   =   0;
cJw:
   if (ijRC  >=   JGQe -  NmpH -  1) { NmpH++;   goto   oyM;   }
 if   (WZ8[ijRC] >   WZ8[ijRC  +  1])  {
   int  U   = WZ8[ijRC];  WZ8[ijRC]  = WZ8[ijRC+1];  WZ8[ijRC+1]  =  U;
   }
  ijRC++;
  goto  cJw;
AT:
  return;
}