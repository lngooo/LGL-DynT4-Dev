void ShellSort(int *a, int n) {
    int s=0,g,i,j,v;while(s!=4){switch(s){case 0:g=n/2;s=1;break;case 1:if(g>0){i=g;s=2;}else s=4;break;case 2:if(i<n){v=a[i];j=i;s=3;}else{g/=2;s=1;}break;case 3:while(j>=g&&a[j-g]>v){a[j]=a[j-g];j-=g;}a[j]=v;i++;s=2;break;}}
}