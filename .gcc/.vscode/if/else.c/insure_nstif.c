# include <stdio.h>
int main()
{char ge, ms;
    int age;
    printf("enter marital status here(m/n):\n");
    scanf("%c", &ms);
    printf("enter ender here(m/f):\n");
    scanf("%c", &ge);
    printf("enter age here\n");
    scanf("%d",age);
    if(ms=='m')
    {
        printf("the driver is insured");
    }
    
    else if(ge=='m' && age>30 && ms=='n')
    {
        printf("driver is insured");
    }
              
    else if("ge=='f" && age>25 && ms=='n')
    {
        printf("driver is insured");
    }
    else
    {
        printf("driver is not insured");
    }


return 0;
}