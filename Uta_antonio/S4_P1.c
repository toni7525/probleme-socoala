//UTA ANTONIOEDUARD 313AA
#include <stdio.h>
#include <stdbool.h>
int main(){
int v[100],n;

scanf("%d",&n);
for(int i=0;i<n;++i)
    scanf("%d",&v[i]);
bool cres=true,desc=true,cons=true;
for(int i=1;i<n;++i){
    if(v[i-1]!=v[i])
        cons=false;
    if(v[i-1]<v[i])
        desc=false;
    if(v[i-1]>v[i])
        cres=false;
}
if(cres)
printf("\ncrescator\n");
if(desc)
printf("\ndescrescator\n");
if(cons)
printf("\nconstant\n");
if(!cons && !cres && !desc)
printf("\noarecare\n");

}
