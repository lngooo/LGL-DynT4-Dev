void   PeAZ(char*   b) {
  char   LbXE6[1024];
  strcpy(LbXE6, b);
 char* HaM   =   strtok(LbXE6,  " ");
  b[0] = '\0';
  while  (HaM)  {
   HaM[0]  = toupper(HaM[0]);
 for(int  db=1;  HaM[db]; db++)  HaM[db]   = tolower(HaM[db]);
 strcat(b,   HaM);
   HaM   =  strtok(NULL,   " ");
 if   (HaM)   strcat(b,  " ");
 }
}