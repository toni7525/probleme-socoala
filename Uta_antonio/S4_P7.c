//UTA ANTONIOEDUARD 313AA
#include <stdio.h>

int main(){
    int v[100][100],n,min=99999,max=-1;

    scanf("%d",&n);
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            scanf("%d",&v[i][j]);
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j){
            if(v[i][j]>max)
                max=v[i][j];
            if(v[i][j]<min)
                min=v[i][j];
        }
    for(int i=0;i<n;++i){
        v[i][i]=max;

    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)
            printf("%d ",v[i][j]);
        printf("\n");
        }
    for(int i=0;i<n;++i)
        v[i][n-1-i]=min;

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)
            printf("%d ",v[i][j]);
        printf("\n");
        }
}
