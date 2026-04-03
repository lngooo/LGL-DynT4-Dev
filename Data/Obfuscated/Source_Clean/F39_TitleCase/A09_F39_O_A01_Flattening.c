void vt(char*   sw)  {
   int SVn =  1,   dk9   =   0,  lfD  =  1;
   while (SVn !=   0)   {
   switch (SVn)  {
  case 1:   if (sw[dk9]  ==  '\0') SVn  = 0;   else   SVn  =   2;  break;
   case  2:   if  (isspace(sw[dk9]))  {   lfD  = 1;  SVn   =  5;   } else  SVn   = 3;   break;
  case   3:  if   (lfD)  { sw[dk9] =   toupper(sw[dk9]);   lfD =  0;  }  else   sw[dk9]   =   tolower(sw[dk9]);  SVn = 5;  break;
  case 5:   dk9++;  SVn   = 1; break;
   }
  }
}