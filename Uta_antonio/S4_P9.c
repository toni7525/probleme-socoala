//UTA ANTONIOEDUARD 313AA
#include <stdio.h>

int main(){
    int v[100],n,nr,temn=0;

    scanf("%d",&n);
    for(int i=0;i<n;++i){
        temn++;
        scanf("%d",&nr);
        for(int j=0;j<temn-1;j++)
            if(v[j]>nr){
                v[j]=v[j]^nr;
                nr=nr^v[j];
                v[j]=v[j]^nr;
            }
        v[temn-1]=nr;
        printf("\n");
        for(int i=0;i<n;++i)
            printf("%d ",v[i]);
    }
    printf("\n");
    for(int i=0;i<n;++i)
        printf("%d ",v[i]);

    //add elements

    n++;
    scanf("%d",&nr);
    for(int j=0;j<n-1;j++)
        if(v[j]>nr){
            v[j]=v[j]^nr;
            nr=nr^v[j];
            v[j]=v[j]^nr;
        }
    v[n-1]=nr;
    printf("\n");
    for(int i=0;i<n;++i)
        printf("%d ",v[i]);
}
