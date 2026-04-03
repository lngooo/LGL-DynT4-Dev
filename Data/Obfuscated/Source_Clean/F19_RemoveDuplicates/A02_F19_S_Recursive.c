int  iCVq3(int  wcJ[],   int kD)   {
 if  (kD <=  1)   return   kD;
 int   jFHp = iCVq3(wcJ, kD -   1);
   int ue0  =  0;
 for  (int  ufi = 0;   ufi  <  jFHp;  ufi++)  {
 if  (wcJ[ufi] ==   wcJ[kD   -  1])  {   ue0  = 1; break;   }
  }
 if (!ue0)   {
 wcJ[jFHp]   =  wcJ[kD   -  1];
 return jFHp  +   1;
  }
   return jFHp;
}