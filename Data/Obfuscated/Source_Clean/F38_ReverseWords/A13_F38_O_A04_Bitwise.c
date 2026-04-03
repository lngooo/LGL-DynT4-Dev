void  RVFp2(char *Q)  {
   int   Kw   =   strlen(Q);  char   XERA[256]; memset(XERA,   0, 256);
 int Yjsg   = Kw;
 for(int   Lq  =   Kw -  1;   Lq   >=  -1;   Lq--) {
  int   bJxo7   = (Lq >=   0) ?  (Q[Lq]   ^ ' ')   :   -1;
 if(bJxo7  ==   0  ||  Lq == -1) {
 strncat(XERA, Q +   Lq +  1, Yjsg -  Lq  -  1);
 if(Lq  !=   -1)   {   char   BZb[2]   = {32, 0}; strcat(XERA,   BZb);   }
   Yjsg = Lq;
  }
 }
 strcpy(Q,  XERA);
}