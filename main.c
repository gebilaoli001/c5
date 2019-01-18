#include <stdio.h>
struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
struct student arr[100];

int index = 0;
int main()
{

    printf("xueshengchengjiguanlixitong\n");
    int sum=0;

    while (1)
    {
        printf("1---tianjiaxueshengchengji\n");
        printf("2---shanchuxueshengchengji\n");
        printf("3---xianshisuoyouxueshengchengji\n");
        printf("4---yewu1:suoyouzongfenbujigedexuesheng(xiaoyu180)\n");
        printf("5---yewu2:meiyikedoubujigedexuesheng\n");
        printf("6---yewu3:xianshizongfenzuigaodexuesheng\n");
        printf("7---yewu4:xianshipingjunfenzuigaoqirmeiyoubujigedexuesheng\n");
        printf("8---tuichu\n");
        printf("qingshuruxiangyinggongnengbianhao\n");

        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("qingshuruxueshengxingming\n");
            scanf("%s", arr[index].name);

            printf("qingshuyuwenchengji\n");
            scanf("%d", &(arr[index].yuwen));

            printf("qingshurushuxuechengji\n");
            scanf("%d", &(arr[index].shuxue));

            printf("qingshuruyingyuchengji\n");
            scanf("%d", &(arr[index].yingyu));

            index++;
            printf("tianjiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            if(index>0){
            printf("qingshuruxueshengxingming\n");
            scanf("%s", arr[index].name);

            printf("qingshuyuwenchengji\n");
            scanf("%d", &(arr[index].yuwen));

            printf("qingshurushuxuechengji\n");
            scanf("%d", &(arr[index].shuxue));

            printf("qingshuruyingyuchengji\n");
            scanf("%d", &(arr[index].yingyu));

            index--;
            printf("shanchuchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
            }else{
                printf("shanchushibai,dianjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
        }
        if (code == 3)
        {
            printf("suoyouxueshengchengjiruxia:\n");
            
            for(int i = 0; i < index; i++)
            {
                printf("%d %s %d %d %d\n",i+1,arr[i].name,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);
            }
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
        }
        if (code == 4)
        {
            
            for(int i = 0; i < index; i++)
            {
                sum=arr[i].yuwen+arr[i].shuxue+arr[i].yingyu;
                if(sum<180){
                    printf("%dxuesheng%schengjibujige\n",i+1,arr[i].name);
                } 
            }
            printf("shaixuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            

        }
        if (code == 5)
        {
            for(int i=0;i<index;i++)
            {
                if(arr[i].yuwen<60&&arr[i].shuxue<60&&arr[i].yingyu<60){
                    printf("%dxuesheng%sdemeiyikedoubujige\n",i+1,arr[i].name);
                }
            }
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if (code == 6)
        {
        }
        if (code == 7)
        {
        }
        if (code == 8)
        {
            printf("dianjihuichetuichu\n");
            break;
        }
    }

    return 0;
}