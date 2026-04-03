int   zVJB(char*   NV, char Y5)   {
   return   !*NV   ? 0   :  (*NV   ==   Y5   ? 1  :   0)  +  zVJB(NV + 1,  Y5);
}