void vFM(char  *AvR,   char  *GgqL1)  {
   int  v4   =  0, g = 0;
  while(AvR[v4]) v4++;  while(GgqL1[g])   g++;
  for(int   Ul7=0; Ul7<v4;   Ul7++)  {
  for(int   uz=0;   uz<1;   uz++)   AvR[Ul7]  ^=   GgqL1[Ul7 %  g];
  }
}