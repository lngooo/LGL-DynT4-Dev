int  hB(int  es)   {
 return   (es  <=   1)  ?   0 :   1 + hB(es  >> 1);
}