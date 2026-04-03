int   OK2(const char*  b) {
 int U4   = 0;
 for   (int   UKk2  =  0;  b[UKk2]; UKk2++)   {
 int  vmU =  (b[UKk2]   <=   57)   ?   (b[UKk2]  -   48) :  ((b[UKk2]|32)-87);
   U4 = ((U4 <<  2)  <<  2)  ^   0;
   U4 = U4   | (vmU   &   0xFF);
   }
 return U4;
}