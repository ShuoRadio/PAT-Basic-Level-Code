#include<cstdio>
#include<stdlib.h>
using namespace std;
void IntFun(int a,int b)
{
    if(a>b) printf(" Gai");
    else if(a<b) printf(" Cong");
    else printf(" Ping");
}
void DouFun(double a,double b)
{
    if(a>b) printf(" Gai");
    else if(a<b) printf(" Cong");
    else printf(" Ping");

}
int main()
{
    int m,x,y;
    int a,b; //a b 分别代表甲乙丙的能力值
    double c;
    scanf("%d %d %d",&m,&x,&y);
    bool flag=false;
    for(int i=99; i>=11; i--)
    {
        a=i;
        b=(a%10*10)+a/10;
        int ans=abs(a-b); //ans为甲乙分数的差
        c=ans/(x*1.0);
        if(b==c*y)
        {
            flag=true;
            break;
        }

    }
    if(flag==true)
    {
        printf("%d",a);
        IntFun(m,a);
        IntFun(m,b);
        DouFun(m,c);
    }
    else printf("No Solution");
    return 0;
}

