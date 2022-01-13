#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool x=false,y;int result=0;
    for(int i=0;i<=1;++i)
    {   y=false;
        for(int j=0;j<=1;++j)
        {
            if((x||(!y))!=((x&&y)||(x&&(!y))||((!x)&&(!y)))) ++result;
                y=true;
        }
        x=true;
    }
    (result==0)? (printf("LHS=RHS")):(printf("LHS and RHS are not equal"));
    return 0;
}
