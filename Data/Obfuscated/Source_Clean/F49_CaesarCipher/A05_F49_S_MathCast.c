void Y(char *sB6,   int   eKix0)   {

   int   Qxv   =  (int)((eKix0 %   26  +   26)  %   26);
   for(int   hvw4=0; sB6[hvw4]   !=   0; hvw4++)   {
 int   npP  = (int)sB6[hvw4];
   if(npP   >=   97 && npP <=   122) sB6[hvw4]   =  (char)(97 +   (npP   - 97   + Qxv)   %   26);
  if(npP  >=  65   &&   npP  <= 90) sB6[hvw4] =  (char)(65 + (npP  -  65  + Qxv) %   26);
   }
}