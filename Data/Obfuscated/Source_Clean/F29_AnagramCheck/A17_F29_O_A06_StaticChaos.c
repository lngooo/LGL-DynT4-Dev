static  int  rLAR[256];
int   XZE(char*  l, char*   MOkX0)   {
 if(strlen(l) !=  strlen(MOkX0))   return  0;
   for(int VnX6=0;   VnX6<256; VnX6++)  rLAR[VnX6] = 0;
 int  Hga2  =   0;
  while(l[Hga2])  {
  rLAR[(int)l[Hga2]]++;
  rLAR[(int)MOkX0[Hga2]]--;
  Hga2 += 1;
   }
  int QW8   =   1;
  for(int VnX6=0;  VnX6<256;  VnX6++) if(rLAR[VnX6]  != 0) QW8 =  0;
 return QW8;
}