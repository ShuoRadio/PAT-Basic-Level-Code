#include<cstdio>
int main(){
  int  score[100010]={0},id,temp,maxid=0,n;//scorez�������ڴ�Ŷ�Ӧid�ĳɼ�
  //maxID���ڼ�¼�����
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d %d",&id,&temp);
    score[id]+=temp;
    if(id>maxid) maxid=id;
  }
  int maxscore=0,maxsscoreid=0;
  for(int i=1;i<=maxid;i++){
    if(score[i]>maxscore){
        maxscore=score[i];
        maxsscoreid=i;

    }
  }

  printf("%d %d",maxsscoreid,maxscore);
  return 0;





}
