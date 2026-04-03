void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int i=g;i<n;i+=1){int v=a[i],j=i;while(j>=g){if(a[j-g]>v){a[j]=a[j-g];j-=g;}else break;}a[j]=v;}}
}