void br(const   char *Pz, char   *to)   {
  int  CF =   0,  TOeS   = 0;
jdA:
 if (!Pz[CF])  goto  meM6;
  int   a =   1;
nnor7:
  if  (Pz[CF+a]   &&  Pz[CF+a] == Pz[CF])   {  a++;   goto  nnor7;   }
  to[TOeS++]   =  Pz[CF];
   TOeS   +=   sprintf(to  +   TOeS,   "%d",   a);
  CF   +=  a;
 goto   jdA;
meM6:
  to[TOeS] =   0;
}