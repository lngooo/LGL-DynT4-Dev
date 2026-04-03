long   jF(int  Lo)   {
 long  bbz   = 0,  YeLB  =   1,  yeU7;
   GxwQ:
   if  (Lo  ==  0)  return  bbz;
 if (Lo   ==   1)   return  YeLB;
   yeU7   =  bbz +   YeLB;  bbz   = YeLB;   YeLB =   yeU7;  Lo--;
   goto   GxwQ;
}