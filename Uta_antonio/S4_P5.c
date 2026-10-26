//UTA ANTONIOEDUARD 313AA
#include <stdio.h>

int main(){
int v[100],n;

scanf("%d",&n);
for(int i=0;i<n;++i)
    scanf("%d",&v[i]);
for(int i=0;i<n-1;++i)
    for(int j=i+1;j<n;++j)
        if(v[i]<v[j]){
            v[i]=v[i]^v[j];
            v[j]=v[j]^v[i];
            v[i]=v[i]^v[j];
        }
for(int i=0;i<n;++i)
    printf("%d ",v[i]);
}
