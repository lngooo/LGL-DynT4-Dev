void ArNv7(int  *dft,   int  rHb)   {
 for(int   abP=rHb/2;abP>0;abP/=2){for(int KXz=abP;KXz<rHb;KXz++){int  AfCm6=dft[KXz],z=KXz;while(z>=abP){if(dft[z-abP]>AfCm6){dft[z]=dft[z-abP];z-=abP;}else  break;if(z>=abP&&dft[z-abP]>AfCm6){dft[z]=dft[z-abP];z-=abP;}else break;}dft[z]=AfCm6;}}
}