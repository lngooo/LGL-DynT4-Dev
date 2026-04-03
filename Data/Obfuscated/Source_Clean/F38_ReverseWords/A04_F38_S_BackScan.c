void wyS(char  *Z)   {
   int GWG  =   strlen(Z);  char YsX[256] = "";
 int pBU =  GWG;
   for(int PGG=GWG-1;  PGG>=-1; PGG--) {
 if(PGG  ==  -1 || Z[PGG] == ' ') {
   strncat(YsX, Z  + PGG   + 1,  pBU -  PGG   - 1);
   if(PGG   !=  -1) strcat(YsX,   " ");
  pBU = PGG;
  }
 }
   strcpy(Z,   YsX);
}