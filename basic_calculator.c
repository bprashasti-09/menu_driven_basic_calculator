#include<stdio.h>
    int main()
{
    int a,b,c,operator;
    do{
printf("Enter the 2 numbers\n");
scanf("%d%d",&a,&b);
printf("Enter the operator\n");
printf("1-add\n");
printf("2-sub\n");
printf("3-multiple\n");
printf("4-divide\n");
printf("5-modulas\n");
printf("6-EXIT\n");
scanf("%d",&operator);
switch(operator)
{
    case 1:c=a+b;
    printf("a+b=%d\n",c);
    break;
    case 2:c=a-b;
    printf("a-b=%d\n",c);
    break;
    case 3:c=a*b;
    printf("a*b=%d\n",c);
    break;
    case 4:
    if(b!=0)
    {
        c=a/b;

    printf("a/b=%d\n",c);
    }
    else
    printf("invalid");
    break;
    case 5:
    if(b!=0)
    {
    c=a%b;
    printf("a/b=%d\n",c);
    }
    else
    printf("invalid");
    break;
    case 6:
printf("EXIT");
break;
default:
printf("INVAILD");   
}
}
while(operator!=6);
return 0;
}

