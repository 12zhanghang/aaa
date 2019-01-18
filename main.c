#include <stdio.h>

struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
struct student arr[100];
int index=0;

int main(){
    printf("xueshengchengjiguanlixitong\n");
    while(1)
    {
        printf("1---tian jia xuesheng chengji\n");
        printf("2---shan chu\n");
        printf("3---xsxscj\n");
        printf("4---ye wu1\n");
        printf("5---yewu2\n");
        printf("6---yewu3\n");
        printf("7---yewu4\n");
        printf("8---tui chu\n");
        
        printf("qing xuan ze:\n");
        int code;
        scanf("%d",&code);
        
        if (code==1) 
        {
            printf("qing shu ru xsxm\n");
            scanf("%s",arr[index].name);
            printf("qsrxsywcj\n");
            scanf("%d",&(arr[index].yuwen));
            printf("qsrxssxcj\n");
            scanf("%d",&(arr[index].shuxue));
            printf("qsrxsyycj\n");
            scanf("%d",&(arr[index].yingyu));
            index++;
            printf("tin jia wancheng,djhcjx\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if (code==2) 
        {
            printf("shanchu\n");
            if(index>0)
            {
            index--;
            printf("shanchuchenggong\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            }
            else
            {
                printf("wxsxx,scsb\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
        }
        if (code==3) 
        {
            printf("souyouxue shangji\n");
            
            for(int i = 0; i < index; i++)
            {
                printf("di%dgexuedechengjiwei %s,yw:%d,sx:%d,yy:%d\n",i+1,arr[i].name,arr[i].shuxue,arr[i].yingyu);

            }
            printf("\ndianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
        }
        if (code==4) 
        {
            
            for(int i = 0; i < index; i++)
            {
                int sum =arr[i].yuwen+arr[i].shuxue+arr[i].yingyu;
                if(sum<180)
                {
                    printf("zo fubujigedetongx %s，语文：%d，数学%d，英语%d\n",arr[i].name,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);
                }
            }
            char x;
            scanf("%c",&x);
            scanf("%c",&x); 
            
        }
        if (code==5) 
        {
            
        }
        if (code==6) 
        {
            
        }
        if (code==7) 
        {
            
        }
        if (code==8) 
        {
            printf("tuichu");
            break;
        }

    }


    return 0;

}