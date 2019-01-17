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
        if(code==2)
        {
            if(index>0)
            {
                index--;
                printf("shanchuwancheng,dianjihuichejixu\n");
                char xx;
                scanf("%c",&xx);
                scanf("%c",&xx);
            }
            else
            {
                printf("shanchushiban,dianjihuichejixu\n");
                char xx;
                scanf("%c",&xx);
                scanf("%c",&xx);

            }
        }
        if(code==3)
        {
            printf("suoyoucheliangweizhiruxia\n");
            for(int i=0;i <index; i++)
            {
                printf("di%dgecheliangdeweizhiwei(%d,%d)\n",i+1,arr[i].y);
            }
            printf("\ndianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if(code==4)
        {
            printf("qingshurudangqiianweizhizuobiao:\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&x);
            double min = 100000;
            int carID =0;
            for(int i=0;i<index;i++)
            {
                int dx =x-arr[i].x;
                int dy =y-arr[i].y;
                double l = sqrt (dx*dx+dy*dy);
                if(min>l)
                {
                    min = l;
                    carID =l;
                }
            }
            printf("yonghudangqianweizhiyudi%dgechedejuliwei%lf,hezuixiaojuli\n",carID+1,min);
            printf("\ndianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if(code==5)
        {
            printf("yingyongyijingtuichu\n");
            break;
        }
    }
    return 0;
   
}