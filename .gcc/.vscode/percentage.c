//Take five subject from user and calculate percentage?
# include <stdio.h>
int main()
{int com,math,eng,mara,che,total,per;
printf("enter marks here\n");
scanf("%d%d%d%d%d",&com,&math,&eng,&mara,&che);
total=com+math+eng+mara+che;
per=total*100/500;
printf("percentage=%d",per);
return 0;
}

