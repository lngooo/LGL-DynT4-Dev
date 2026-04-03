int PcQ(char*   J) {
 char   V[512],   SNty[512];
  memset(V, 0,   512);
   strncpy(V, J,   511);
  strcpy(SNty,   V);
  int t0  =   0;
 char*  Ldv1 =   strtok(SNty,   " ");
 while(Ldv1)  { t0++; Ldv1  = strtok(NULL,   " "); }
  return  t0;
}