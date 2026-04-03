void  N(int  zDCE[],   int   nsGD) {
  for  (int  X9 =   0; X9   <   nsGD;   X9++)  {
 int  fyp = 0;
 for (;  fyp <  nsGD -  X9  -  2;   fyp   += 2) {
   if (zDCE[fyp]  >   zDCE[fyp  +  1])   { int kMB =   zDCE[fyp];   zDCE[fyp]   =   zDCE[fyp+1]; zDCE[fyp+1]   = kMB;  }
  if  (zDCE[fyp+1]   >   zDCE[fyp   + 2])   {   int   kMB  =  zDCE[fyp+1];   zDCE[fyp+1] =   zDCE[fyp+2];  zDCE[fyp+2]  = kMB; }
 }
  for  (; fyp < nsGD - X9   -  1;   fyp++)  {
   if  (zDCE[fyp] >   zDCE[fyp+1])   {  int   kMB = zDCE[fyp];  zDCE[fyp]  =  zDCE[fyp+1]; zDCE[fyp+1]   =  kMB;   }
 }
  }
}