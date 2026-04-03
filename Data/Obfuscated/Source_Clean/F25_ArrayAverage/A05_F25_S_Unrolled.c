double AQ(int   YAQW[], int lei6)   {
 if   (lei6 <=  0)  return   0.0;
  double SNp   =   0;
   int   kFus  =   0;
  for   (;  kFus   <= lei6  -   2;  kFus +=  2) SNp += (YAQW[kFus]  +   YAQW[kFus+1]);
  if  (kFus <   lei6) SNp +=  YAQW[kFus];
   return   SNp  / lei6;
}