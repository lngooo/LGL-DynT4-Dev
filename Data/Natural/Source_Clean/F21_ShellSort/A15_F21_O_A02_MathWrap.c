void ShellSort(int *a, int n) {
    int h=1;while(h<n/3)h=(int)(pow(3.0,1.0)*h+1);while(h>=1){for(int i=h;i<n;i++){int v=a[i],j=i;while(j>=h&&a[j-h]>v){a[j]=a[j-h];j-=h;}a[j]=v;}h/=(int)sqrt(9.0);}
}