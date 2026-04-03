int Blm(const   char*  Es)   {
  int  GGb =   0;
   while(*Es)   {
   int  mqT3 = (*Es  <=   '9')   ?  (*Es - '0')   :   ((*Es|32) -  'a'   +  10);
   GGb   = (GGb << 4);
  GGb = GGb + mqT3;
 Es++;
   }
   return  GGb;
}