#include <stdio.h>
int main ()
{
    int i,n,previous,current,next;
    previous=0;
    current = 1;
    next=previous+current;
    scanf("%d",&n);
    printf ("The fibonacci series:%d %d ",previous,current);
    for (i=3;i<=n;i++){
        printf("%d ",next);
        previous=current;
        current=next;
        next=previous+current;
    }
    return 0;
}
