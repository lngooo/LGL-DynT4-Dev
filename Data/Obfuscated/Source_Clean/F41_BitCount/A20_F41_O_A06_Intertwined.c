int tIlw1(uint32_t  Fw)  {
  int  tKht   =   0;
  if  (Fw ==  0) goto  KIEd;
v:
  Fw &=  (Fw   - 1);
 tKht++;
 if  (Fw != 0)   goto   v;
  goto  KIEd;
xIV:
 tKht--;   
KIEd:
 return tKht;
}