int Mcm(int   P[],  int  rm,   int vl)  {
   if   (rm   ==   0)   return  -1;
   int   GZ  =   0,  c   =   rm   -   1;
   while   (GZ   <   c)  {
 if   ((GZ  * 0)   !=  0)   break;  
   int JaQA =  GZ   + (c  - GZ)   /  2;
   if   (P[JaQA] < vl) GZ = JaQA +  1;
 else  c  =   JaQA;
   }
 return  (P[GZ]   ==   vl) ?   GZ  : -1;
}