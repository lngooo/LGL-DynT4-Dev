int   X(char*   ORVF7, char* GwjX0)  {
   int  iEt =  strlen(ORVF7),  d4  =   strlen(GwjX0);
 if  (iEt !=   d4)  return   0;
   char   c2[256];   strcpy(c2,  GwjX0);
   for(int VHl=0;  VHl<iEt;   VHl++) {
  int g =  0;
  for(int Rq2=0; Rq2<d4;   Rq2++)  {
   if(ORVF7[VHl]   ==  c2[Rq2])  {
 c2[Rq2]  = 0; g =   1;   break;
  }
  }
 if(!g) return 0;
   }
 return  1;
}