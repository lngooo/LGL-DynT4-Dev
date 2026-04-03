void  CQUT(int SI[],  int   sTY)   {
 for   (int mp   =  1;  mp  < sTY;   mp++)  {
   int  O  =  SI[mp], lLl =   mp   - 1;
   while  (!(lLl <   0)   && (SI[lLl] > O))  {
   SI[lLl +   1]  =   SI[lLl];
  lLl = lLl  -  1;
   }
   SI[lLl +  1] = O;
 }
}