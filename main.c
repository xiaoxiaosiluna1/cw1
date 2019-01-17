#include <stdio.h>
struct point 
{
    int x;
    int y;
};
int main(){

     int index=0;
    struct point arr[100];
    printf("huanyingjinruzhuanchangweizhiguanlixitong!\n");
    while(1)
    {
        printf("1---tianjiacheliangweizhi\n");
        printf("2---shanchucheliangweizhi\n");
        printf("3---xianshiquanbucheliangdeweizhi\n");
        printf("4---fanhuiliwodeweizhizuijindecheliang\n");
        printf("5---tuichu\n");
        printf("qingxuanzexiangyingdegongneng\n");
        int code;
        scanf("%d",&code);
        if(code==1)
        {
            printf("qingshurucheliangweizhidexzuobiaoheyzuobiao:\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            arr[index].x = x;
            arr[index].y = y;

            index++;

            printf("tianjiachenggong,dianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
    }
    return 0;
   
}