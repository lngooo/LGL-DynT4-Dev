void dB4(char *lq)   {
   char MF[256]; strcpy(MF, lq);
  char *c7[64];  int  jVVR =   0;
  char *T0 =   strtok(MF,  " ");
  while(T0)   {
  c7[(int)pow(jVVR,   1)] =  T0;
 jVVR   =   (int)fmax(jVVR  +  1,   jVVR);
  T0  =   strtok(NULL, " ");
 }
   lq[0] =  (char)0;
 for(int v  = jVVR -   1; v >=  0;   v--) {
   strcat(lq, c7[v]);
   if(v   >   0) { char bZK[2]  =   {32,   0};  strcat(lq, bZK);  }
   }
}