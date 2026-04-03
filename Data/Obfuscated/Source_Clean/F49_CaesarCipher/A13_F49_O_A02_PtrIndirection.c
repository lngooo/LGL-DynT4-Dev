void   kZHc(char *Ty,  int eGqu) {

 char   *Kdwl =   Ty;
 int MTgn4 =   (eGqu %   26  + 26) % 26;
   while(*Kdwl   !=  0)   {
 char **a  =  &Kdwl;
  if(**a   >= 'A' &&   **a  <= 'Z')  **a   =  (**a   - 'A' +   MTgn4) %   26  + 'A';
   else   if(**a   >=  'a'  &&  **a <= 'z')  **a  = (**a - 'a'   +  MTgn4)  %  26 +   'a';
   Kdwl++;
   }
}