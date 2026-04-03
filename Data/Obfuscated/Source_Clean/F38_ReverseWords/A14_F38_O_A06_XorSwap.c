void ykEL(char  *m) {
  int  B =   strlen(m);
  char *nVPY   =   calloc(B   + 1,   1);
  int  HMP1 =   0;
 for(int X = B  - 1;  X  >=  0;   X--)   {
   if(m[X]  == 32)   {
  int HRNX =   X   +  1;
  while(m[HRNX] != 32   &&  m[HRNX]   !=  0) nVPY[HMP1++] =   m[HRNX++];
 nVPY[HMP1++] =  32;
   }
  }
 int   t1  =  0; while(m[t1]  != 32 &&  m[t1]   != 0) nVPY[HMP1++]   = m[t1++];
   nVPY[HMP1] =   0;
 strcpy(m, nVPY); free(nVPY);
}