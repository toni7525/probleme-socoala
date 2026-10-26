//UTA ANTONIOEDUARD 313AA
#include <stdio.h>

int main(){
int v[100],n,min=99999,minpos,avg=0;

scanf("%d",&n);
for(int i=0;i<n;++i)
    scanf("%d",&v[i]);
for(int i=0;i<n;++i){
    if(v[i]<min){
        min=v[i];
        minpos=i;
    }
    avg+=v[i];
}
printf("\nmin:%d->%d\n",min,minpos);
    avg/=n;
    for(int i=0;i<n;++i)
        if(v[i]==avg){
            printf("\navg:%d->%d\n",avg,i);
            break;
        }
}
