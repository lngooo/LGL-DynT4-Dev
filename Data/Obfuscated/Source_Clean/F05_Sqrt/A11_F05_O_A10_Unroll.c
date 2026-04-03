int  WLdk(int  hJ)   {
 if  (hJ   <   0) return  -1;
 long vSVG = 0;
 for (;;  vSVG  +=  2)   {
  if  ((vSVG   + 1) * (vSVG  + 1) >  hJ)  return   (int)vSVG;
   if ((vSVG   + 2)   *  (vSVG + 2) >  hJ)   return  (int)(vSVG +  1);
  }
}