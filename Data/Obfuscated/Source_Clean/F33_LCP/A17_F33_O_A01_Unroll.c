void  Am4(char **it, int   jh,  char *fHWW)  {
   int  JId  = 0;
 while   (it[0][JId]   &&   it[0][JId+1]) {
 int G   = 1;
   for  (int  M   =   1; M <   jh; M++)   
 if  (it[M][JId]  !=  it[0][JId]   ||  it[M][JId+1] !=  it[0][JId+1])  {  G  =   0;   break;  }
  if  (G)   {  fHWW[JId] =   it[0][JId];   fHWW[JId+1]  = it[0][JId+1];  JId +=  2;   } else break;
 }
 if  (it[0][JId])   {
 int G  =   1;
  for  (int   M  =   1;   M <  jh;   M++)  if (it[M][JId] !=   it[0][JId]) G = 0;
  if  (G) { fHWW[JId] =  it[0][JId];  JId++;  }
  }
   fHWW[JId]   =   '\0';
}