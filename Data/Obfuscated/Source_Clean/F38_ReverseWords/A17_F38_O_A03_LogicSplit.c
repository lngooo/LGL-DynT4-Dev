void  QPJt(char   *MALf) {
 char   M3[256]; strcpy(M3, MALf);
   char *cZYP[100];   int aKWq  = 0;
   char  *Kfoe3   =  strtok(M3,   " ");
 do   {
   if(Kfoe3) cZYP[aKWq++]  =  Kfoe3;
  }   while((Kfoe3   =   strtok(NULL, " ")));
   MALf[0]   =   0;
 while(aKWq >   0)   {
  strcat(MALf,   cZYP[--aKWq]);
 if(aKWq  >  0) strcat(MALf,   " ");
  }
}