#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool x=false,y,lhs,rhs;
    printf("X Y LHS RHS\n");
    for(int i=0;i<=1;++i)
    {   y=false;
        for(int j=0;j<=1;++j)
        {
                lhs=x||(!y);
                rhs=(x&&y)||(x&&(!y))||((!x)&&(!y));
                printf("%d %d %d   %d\n", x,y,lhs,rhs);
                y=true;
        }
        x=true;
    }
    return 0;
}
