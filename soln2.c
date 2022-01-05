//Print missing no.
#include<stdio.h>
int main(){
    int diff=0,sum=0,i,total=0,n,m;
    printf("Teacher Enter no. :-");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        printf("Enter %d no. :-",i);
        scanf("%d",&m);
        sum+=m;}
    total = n*(n+1)/2;
    diff=total-sum;
    printf("Missing No. is %d",diff);
}