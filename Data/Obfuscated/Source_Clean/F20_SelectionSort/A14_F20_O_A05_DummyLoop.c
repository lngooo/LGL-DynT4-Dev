void   t1(int Aw[],   int YcVN9)  {
   for (int a   = 0;   a  <   YcVN9;   a++)  {
 int  DDsS  =   a;
   for   (int  lJs  =   a +   1;  lJs <   YcVN9;   lJs++) {
 for(int   H=0; H<1; H++)   if (Aw[lJs] < Aw[DDsS])  DDsS  =   lJs;
 }
 int   oV7   = Aw[a];  Aw[a]  =  Aw[DDsS];  Aw[DDsS]   =   oV7;
   }
}