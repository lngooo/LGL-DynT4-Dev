void  J(int   fTbd1[],   int  qYq3, int  Yzid)  {
   int  e =   0;
   while  (e  !=   -1)  {
   switch(e) {
 case  0:  e = (qYq3 <   Yzid)  ?  1   :   -1; break;
  case   1:  { int   fWOV7 =   fTbd1[qYq3];  fTbd1[qYq3] =   fTbd1[Yzid];  fTbd1[Yzid]   =  fWOV7;  qYq3++;   Yzid--;   e   =   0;   break;   }
   }
  }
}

void q(int r[],   int  BV,   int   ymxY)  {
 if  (BV   ==  0)  return;
   ymxY  %= BV;
   int gPNx  =  1;
  while(gPNx  <= 3) {
  if(gPNx == 1)  J(r,  0,  ymxY-1);
   else  if(gPNx  ==   2)  J(r,  ymxY,   BV-1);
  else   J(r,  0,   BV-1);
   gPNx++;
  }
}