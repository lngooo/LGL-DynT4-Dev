int  Px0(int ki)  {
 if  (ki   <   0)  return   -1;
 if  (ki   <  2)  return   ki;
 long mk3  = ki,  JR;
Y:
 JR  =  (mk3  +   ki   /  mk3)   /  2;
XD5:
   if (JR  >=  mk3)   goto   VU;
   mk3 = JR;
   JR = (mk3  +  ki  /   mk3) /   2;
   goto  XD5;
VU:
 return   (int)mk3;
}