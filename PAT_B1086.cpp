#include<cstdio>
#include<cstring>
#include<iostream>
#include<map>
#include<math.h>
using namespace std;

int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    int ans=a*b;
    if(ans==0) printf("%d",ans);
    else {
         while(ans%10==0) ans=ans/10;
         while(ans!=0){
            printf("%d",ans%10);
            ans=ans/10;
         }

    }
    return 0;
}

