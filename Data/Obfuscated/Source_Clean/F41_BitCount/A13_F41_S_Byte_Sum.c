int  c(uint8_t  XPd)  {
   int zq =  0;
 for(int  KVvh=0;  KVvh<8;   KVvh++)  {   if((XPd   >>  KVvh) &  1) zq++; }
 return   zq;
}

int   Si3(uint32_t qjgq4)   {
 return c((uint8_t)(qjgq4   &   0xFF)) +   
   c((uint8_t)((qjgq4 >>   8)   & 0xFF))   + 
  c((uint8_t)((qjgq4  >> 16)   &  0xFF))   +  
 c((uint8_t)((qjgq4   >> 24) & 0xFF));
}