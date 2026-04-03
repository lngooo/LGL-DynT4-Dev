void   AXgR(char* Ww,   char* Y) {
  if  (!*Ww) {
   *Y  =  '\0';
 return;
   }
  if  (!isspace((unsigned   char)*Ww))  {
 *Y   =  *Ww;
  AXgR(Ww +   1, Y  +  1);
 }  else   {
   AXgR(Ww   +   1, Y);
 }
}

void   sihz(char*   JLS) {
  AXgR(JLS, JLS);
}