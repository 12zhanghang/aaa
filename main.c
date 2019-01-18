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

int main()
{
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
                    printf("zo fubujigedetongx %s，yuwu：%d，shuxue%d，yingyu%d\n",arr[i].name,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);
                }
            }
            char x;
            scanf("%c",&x);
            scanf("%c",&x); 
            
        }
        if (code==5) 
        {
            if (code==5) 
            {
               printf("mykdbjgdxsrx:\n");
               
               for(int i ; i < index; i++)
               {
                   if(arr[i].yuwen<60 && arr[i].shuxue<60,arr[i].yingyu<60);
                   printf("skdbjgdxsxmw%s,yuwu：%d，shuxue%d，yingyu%d\n",arr[i].name,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);

               }
               
            }
            printf("\ndianjihcjx\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code==6) 
        {
            if (code == 6)
        {
            printf("总分最高的学生为：\n");

            int max = 0;
            int stuID = 0;

            for(int i = 0; i < index; i++)
            {
                int sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if(max < sum){
                    max  =  sum;
                    stuID = i;
                }
            }
            printf("zfzgdxsxmw%s,yuwei：%d，shuxue%d，yingyu%d\n",arr[stuID].name,arr[stuID].yuwen,arr[stuID].shuxue,arr[stuID].yingyu);

            printf("\ndjhcjx\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code==7) 
        {
            double max=0.0;
            int stuID=0;
            for(int i=0;i<index;i++)
            {
                if(arr[i].yuwen >= 60 && arr[i].shuxue >= 60 && arr[i].yingyu >= 60){
                double avg = (arr[i].yuwen + arr[i].shuxue + arr[i].yingyu)/3.0;
                if(max < avg){
                max = avg;
                stuID = i;
            }

        }
        if (code==8) 
        {
            printf("tuichu");
            break;
        }

    }


    return 0;

        }
        }
    }
}