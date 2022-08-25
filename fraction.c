#include<stdio.h>
#include<math.h>

int main()
{
    float n,a[10];
    int i;
    scanf("%f",&n);
    int t=n;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    float p=0,ne=0,z=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        p++;
        else if (a[i]<0) {
        ne++;
        }
        else {
        z++;
        }
    }
    
    float np,nn,nz;
    np=p/t;
    nn=ne/t;
    nz=z/t;
    
    printf("%0.6f\n%0.6f\n%0.6f ",np,nn,nz);
    
}
