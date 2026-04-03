void gWrf(char   *a4)  {
   int  sB =  0;  while(a4[sB]) sB++;
 for(int   a=0;  a < sB/2; a+=1)  {
   char   bWxw4  =  a4[a];  a4[a]   =   a4[sB-1-a];  a4[sB-1-a] =   bWxw4;
   }
   int   lbQ  = 0;
 while(lbQ  < sB)  {
   int   os  =   lbQ;
 while(a4[os]   != ' ' &&   a4[os] !=  0) os++;
  for(int  MZ=0;  MZ < (os-lbQ)/2; MZ++)  {
 char   kd  =   a4[lbQ+MZ];
 a4[lbQ+MZ] = a4[os-1-MZ];
 a4[os-1-MZ]  = kd;
  }
  lbQ =  os +   1;
  }
}