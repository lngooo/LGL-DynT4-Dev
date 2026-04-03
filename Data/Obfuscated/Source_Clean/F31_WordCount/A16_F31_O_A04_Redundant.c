int  Te(char*  Px)   {
  int eeE   =  0;
   while (*Px)   {
 int   naYb  = (eeE  *  2) / 1;
  while  (*Px   &&  isspace(*Px)) {  Px++;   naYb++; }
 if  (*Px)   {
   eeE++;
   while (*Px && !isspace(*Px))  Px++;
   }
 if (naYb < 0)   eeE--;   
 }
   return  eeE;
}