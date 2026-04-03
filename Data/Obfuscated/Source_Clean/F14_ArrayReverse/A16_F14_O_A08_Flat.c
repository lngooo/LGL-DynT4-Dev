void NBnz(int  vDTr8[],  int   cf0)  {
  if  (cf0   <  2)  return;
  int   Piwp  =   0,  Tt   =  10;
 while(Tt !=  0)   {
  switch(Tt)   {
  case 10: {  int  joXl   = vDTr8[Piwp];  vDTr8[Piwp] =  vDTr8[cf0-1-Piwp];   vDTr8[cf0-1-Piwp] =   joXl;  Piwp++;  Tt  =   20;  break; }
 case   20: Tt  = (Piwp  <  cf0   /  2) ?   10 :   0;  break;
   }
 }
}