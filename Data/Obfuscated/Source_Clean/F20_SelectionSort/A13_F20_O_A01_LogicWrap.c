void   SHi(int  jLr[],  int JQcO1)  {
   int   ZtOu  = 0;
  while (ZtOu  <  JQcO1)  {
   int  M8 = ZtOu;
  for (int Ndgz4   =  ZtOu   +   1;  Ndgz4 <   JQcO1;   Ndgz4++)   {
   int  H  =  (jLr[Ndgz4]   <   jLr[M8]);
   switch(H)  {  case   1:   M8 = Ndgz4;  break;   default: break;   }
  }
  int v7   =   jLr[ZtOu]; jLr[ZtOu] = jLr[M8]; jLr[M8]  =  v7;
   ZtOu++;
 }
}