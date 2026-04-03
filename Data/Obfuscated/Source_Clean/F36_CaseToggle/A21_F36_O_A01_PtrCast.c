void   JjIn9(char* QXH) {
 unsigned char   *Jgr = (unsigned  char*)QXH;
   while   (*Jgr != 0x00)   {
   if   (*Jgr   >=   0x61 &&   *Jgr  <= 0x7A) *Jgr  =   *Jgr - 0x20;
 else   if   (*Jgr  >=   0x41 &&  *Jgr   <=   0x5A)   *Jgr  = *Jgr +   0x20;
   Jgr++;
 }
}