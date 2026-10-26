//UTA ANTONIOEDUARD 313AA
#include <stdio.h>

int main(){
    int v[100][100],n;

    scanf("%d",&n);
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            scanf("%d",&v[i][j]);
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)
            printf("%d ",v[i][j]);
        printf("\n");
        }
    printf("\n");
    //ordonare linii
    /*
    for(int i=0;i<n;++i)
        for(int j=0;j<n-1;++j)
            for(int k=j+1;k<n;++k)
            if(v[i][j]<v[i][k]){
                v[i][j]=v[i][j]^v[i][k];
                v[i][k]=v[i][j]^v[i][k];
                v[i][j]=v[i][j]^v[i][k];
            }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)
            printf("%d ",v[i][j]);
        printf("\n");
        }
    */
    printf("\n");
    //ordonare coloane
    /*for(int i=0;i<n;++i)
        for(int j=0;j<n-1;++j)
            for(int k=j+1;k<n;++k)
            if(v[j][i]<v[k][i]){
                v[j][i]=v[j][i]^v[k][i];
                v[k][i]=v[j][i]^v[k][i];
                v[j][i]=v[j][i]^v[k][i];
            }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)
            printf("%d ",v[i][j]);
        printf("\n");
        }
    */
    for(int i=0;i<n;++i)
        for(int j=0;j<n-1;++j)
            for(int k=j+1;k<n;++k)
            if(v[i][j]<v[i][k])
                for(int h=0;h<n;++h){
                    v[h][j]=v[h][k]^v[h][j];
                    v[h][k]=v[h][k]^v[h][j];
                    v[h][j]=v[h][k]^v[h][j];
                }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)
            printf("%d ",v[i][j]);
        printf("\n");
        }
}
