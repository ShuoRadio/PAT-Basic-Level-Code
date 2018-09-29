#include<cstdio>
#include<cstring>
#include<iostream>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    int n;
    int num[100000]={0};
    scanf("%d",&n);
    int ans;
    for(int i=1;i<=n;i++){
        ans=(int)(i/2.0)+(int)(i/3.0)+(int)(i/5.0);
        num[ans]++;
    }
    int count=0;
    for(int i=0;i<100000;i++){
        if(num[i]!=0) count++;
    }
    printf("%d",count);
    return 0;
}


