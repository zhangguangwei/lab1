#include <iostream>
#include<stdio.h>
#include<string.h>
#include<ctime>
#include <cstdlib>
#include<fstream>
#include<math.h>

using namespace std;
void simplify()
{
    int i,n;
    printf("请输入命令：");
    char mingling[100];
    for(i=0;i<=100;i++)
    {
        scanf("%c",&mingling[i]);
        if(mingling[i]=='\n')
        {
            break;
        }
    }
    n=i;
    if(mingling[0]!='!')
    {
        printf("您输入的是非法命令！");
        exit(0);
    }

}
void expression()
{
    int i,n,c,ji,ji1,co,guodu,ji2,n2,guodu2,tongji,tong[100],ji3;
    int cou[100];
    char shuru[100];
    int jilu[100];
    int chengji=1;
    printf("请输入表达式：");
    printf("\n");

    for(i=0;i<=100;i++)
    {
        scanf("%c",&shuru[i]);
        if(shuru[i]=='\n')
        {
            break;
        }
    }
    n=i;
    if(shuru[0]=='+'||shuru[0]=='*'||shuru[n]=='+'||shuru[n]=='*')
    {
        printf("您输入的数据不符合规则！");
        exit(0);
    }
for(i=0;i<=n-1;i++)
    {
        if(shuru[i]!='a'&&shuru[i]!='b'&&shuru[i]!='c'&&shuru[i]!='x'&&shuru[i]!='y'&&shuru[i]!='z'&&shuru[i]!='1'&&shuru[i]!='2'&&shuru[i]!='3'&&shuru[i]!='4'&&shuru[i]!='5'&&shuru[i]!='6'&&shuru[i]!='7'&&shuru[i]!='8'&&shuru[i]!='9'&&shuru[i]!='0'&&shuru[i]!='+'&&shuru[i]!='*'&&shuru[i]!='-')
        {
            printf("您输入的数据不符合规则！");
            break;
            exit(0);
        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(shuru[i]=='x'||shuru[i]=='y'||shuru[i]=='z')
        {
            if(shuru[i+1]=='x'||shuru[i+1]=='y'||shuru[i+1]=='z')
            {
                printf("您输入的数据不符合规则！");
                exit(0);
            }
        }
    }

}

int main()
{
    int i,n,c,ji,ji1,co,guodu,ji2,n2,guodu2,tongji,tong[100],ji3;
    int cou[100];
    char shuru[100];
    int jilu[100];
    int chengji=1;
    printf("请输入表达式：");
    printf("\n");

    for(i=0;i<=100;i++)
    {
        scanf("%c",&shuru[i]);
        if(shuru[i]=='\n')
        {
            break;
        }
    }
    n=i;
    if(shuru[0]=='+'||shuru[0]=='*'||shuru[n]=='+'||shuru[n]=='*')
    {
        printf("您输入的数据不符合规则！");
        exit(0);
    }
for(i=0;i<=n-1;i++)
    {
        if(shuru[i]!='a'&&shuru[i]!='b'&&shuru[i]!='c'&&shuru[i]!='x'&&shuru[i]!='y'&&shuru[i]!='z'&&shuru[i]!='1'&&shuru[i]!='2'&&shuru[i]!='3'&&shuru[i]!='4'&&shuru[i]!='5'&&shuru[i]!='6'&&shuru[i]!='7'&&shuru[i]!='8'&&shuru[i]!='9'&&shuru[i]!='0'&&shuru[i]!='+'&&shuru[i]!='*'&&shuru[i]!='-')
        {
            printf("您输入的数据不符合规则！");
            break;
            exit(0);
        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(shuru[i]=='x'||shuru[i]=='y'||shuru[i]=='z')
        {
            if(shuru[i+1]=='x'||shuru[i+1]=='y'||shuru[i+1]=='z')
            {
                printf("您输入的数据不符合规则！");
                exit(0);
            }
        }
    }
    c=0;
    n2=0;
    tongji=1;
    ji3=0;
    for(i=0;i<n;i++)
    {
        if(shuru[i]=='1'||shuru[i]=='2'||shuru[i]=='3'||shuru[i]=='4'||shuru[i]=='5'||shuru[i]=='6'||shuru[i]=='7'||shuru[i]=='8'||shuru[i]=='9'||shuru[i]=='0')
        {
            c=c+1;


            for(ji=i+1;ji<n;ji++)
            {
                if(shuru[ji]=='1'||shuru[ji]=='2'||shuru[ji]=='3'||shuru[ji]=='4'||shuru[ji]=='5'||shuru[ji]=='6'||shuru[ji]=='7'||shuru[ji]=='8'||shuru[ji]=='9'||shuru[ji]=='0')
                {
                    c=c+1;
                }
//                if(shuru[i]!='1'&&shuru[i]!='2'&&shuru[i]!='3'&&shuru[i]!='4'&&shuru[i]!='5'&&shuru[i]!='6'&&shuru[i]!='7'&&shuru[i]!='8'&&shuru[i]!='9'&&shuru[i]!='0'&&shuru[i]!='+'&&shuru[i]!='*')
                else
                {
                    break;
                }
            }

      co=0;
      ji2=i;
      for(ji1=c;ji1>0;ji1--)
      {
          guodu=shuru[ji2]-'0';
          guodu2=pow(10,ji1-1);
          co=co+guodu*guodu2;
          ji2=ji2+1;
      }
      cou[n2]=co;
      n2=n2+1;
      i=i+c-1;
      c=0;
        tongji=tongji*co;
      }

      if(shuru[i]=='x'||shuru[i]=='y'||shuru[i]=='z'||shuru[i]=='*')
      {
          tongji=tongji*1;
      }
      if(shuru[i]=='+'||shuru[i]=='-')
      {
          tong[ji3]=tongji;
          tongji=1;
          ji3=ji3+1;
      }
      if(i==n-1)
      {
          tong[ji3]=tongji;
      }


    }




    int coun,a,b,d,e,f,sum,j,x,y,cheng;
    coun=0;
    a=0;
    b=0;
    char huida,zhi;
    char zhiling[100],mingling[100];
    int coua[100],coub[100],chengj[100];
    for(i=0;i<n;i++)
    {
        if(shuru[i]=='x')
        {
            a=a+1;
        }
        if(shuru[i]=='y')
        {
            b=b+1;
        }
        if(shuru[i]=='+'||shuru[i]=='-')
        {
            coua[coun]=a;
            coub[coun]=b;
            coun=coun+1;
            a=0;
            b=0;

        }

    }
    coua[coun]=a;
    coub[coun]=b;
    f=0;
    sum=0;
for(i=0;i<n;i++)
{
    if(coua[i]==0&&coub[i]==0)
    {
        sum=sum+tong[i];
    }
}


for(i=0;i<coun;i++)
{
    for(j=i+1;j<=coun;j++)
    {
        if(coua[i]==coua[j]&&coub[i]==coub[j])
        {
            tong[i]=tong[i]+tong[j];
            for(e=j;e<=coun;e++)
            {
                tong[e]=tong[e+1];
                if(e+1>coun)
                {
                    tong[e]=0;
                }
            }
        }
    }
}

for(i=0;i<coun;i++)
{
    jilu[i]=i+1;
}
for(i=0;i<coun;i++)
{
    for(j=i+1;j<=coun;j++)
    {
        if(coua[i]==coua[j]&&coub[i]==coub[j])
        {
            jilu[j]=0;
        }
    }
}


for(i=0;i<=coun;i++)
{
    if(jilu[i]!=0&& i!=coun-1)
    {
        if (coub[i]==0)
        {
            printf("%d*x^%d+",tong[i],coua[i]);
        }
        else
        {
            if(coua[i]==0)
            {
                printf("%d*y^%d+",tong[i],coub[i]);
            }
            else
                printf("%d*x^%d*y^%d+",tong[i],coua[i],coub[i]);
        }

    }
    if(jilu[i]!=0&&i==coun-1)
    {
        printf("%d*x^%d*y^%d",tong[i],coua[i],coub[i]);
    }
}
printf("\n");
printf("是否输入命令？\n");
  scanf("%c",&huida);
    printf("2*x^1+1*y^1");
    printf("输入命令：\n");
    zhi = getchar();

    for(i=0;i<100;i++)
    {

        scanf("%c",&zhiling[i]);
        if(zhiling[i]=='\n')
        {
            break;
        }
    }
    n=i;
    cheng=0;




        if(n>14)
        {
            if(zhiling[0]!='!'||zhiling[13]!='!')
            {
                printf("您输入的指令有问题！");
                exit(0);
            }
            else
            {
                if(zhiling[10]=='x')
                {
                    x=zhiling[12]-'0';
                    y=zhiling[23]-'0';
                }
                if(zhiling[10]=='y')
                {
                    x=zhiling[23]-'0';
                    y=zhiling[12]-'0';
                }
                for(i=0;i<=coun;i++)
                {
                    chengji=chengji*tong[i];
                    for(j=0;j<coua[i];j++)
                    {
                        chengji=chengji*x;
                    }
                    for(j=0;j<coub[i];j++)
                    {
                        chengji=chengji*y;
                    }
                    chengj[i]=chengji;
                    cheng=cheng+chengji;
                }
                printf("%d",cheng);
            }
        }
        if(n<14)
        {

            if(zhiling[0]!='!')
            {
                printf("您输入的指令有问题！");
                exit(0);
            }
            else
            {
                if(zhiling[10]=='x')
                {
                    x=zhiling[12]-'0';
                    for(i=0;i<=coun;i++)
                        {
                            if(jilu[i]!=0&& i!=coun-1)
                            {
                                if (coub[i]==0)
                                {
                                    printf("%d*%d^%d+",tong[i],x,coua[i]);
                                }
                                else
                                    {
                                        if(coua[i]==0)
                                        {
                                            printf("%d*y^%d+",tong[i],coub[i]);
                                        }
                                        else
                                            printf("%d*%d^%d*y^%d+",tong[i],x,coua[i],coub[i]);
                                    }
                            }
                        }
                        if(zhiling[10]=='y')
                        {
                            y=zhiling[12]-'0';
                            for(i=0;i<=coun;i++)
                                {
                                    if(jilu[i]!=0&& i!=coun-1)
                                    {
                                        if (coub[i]==0)
                                        {
                                            printf("%d*x^%d+",tong[i],coua[i]);
                                        }
                                        else
                                            {
                                                if(coua[i]==0)
                                                {
                                                    printf("%d*%d^%d+",tong[i],y,coub[i]);
                                                }
                                                else
                                                    printf("%d*x^%d*%d^%d+",tong[i],coua[i],y,coub[i]);
                                            }

                                  }
                                  if(jilu[i]!=0&&i==coun-1)
                                    {
                                        printf("%d*x^%d*y^%d",tong[i],coua[i],coub[i]);
                                    }
                                }
                          }
            }
        }
       }







}
