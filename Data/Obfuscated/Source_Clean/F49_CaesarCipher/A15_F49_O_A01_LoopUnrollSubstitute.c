void  tiF(char   *tj,  int g) {

  int   MZ =   (g %  26  +   26)  % 26;
 for(int   beBy=0;   tj[beBy]; beBy++)  {
   if(tj[beBy] >=  'a'   &&   tj[beBy]   <=  'z') {   tj[beBy]   = (tj[beBy]-'a'+MZ)%26+'a';  continue;   }
 if(tj[beBy] >=  'A'  && tj[beBy]  <= 'Z')  {   tj[beBy]  =  (tj[beBy]-'A'+MZ)%26+'A';   }
 }
}