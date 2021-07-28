#include "Loop.h"

extern void Bless_U(void)
{
    printf("//\n"
           "//                       _oo0oo_\n"
           "//                      o8888888o\n"
           "//                      88\" . \"88\n"
           "//                      (| -_- |)\n"
           "//                      0\\  =  /0\n"
           "//                    ___/`---'\\___\n"
           "//                  .' \\\\|     |// '.\n"
           "//                 / \\\\|||  :  |||// \\\n"
           "//                / _||||| -:- |||||- \\\n"
           "//               |   | \\\\\\  -  /// |   |\n"
           "//               | \\_|  ''\\---/''  |_/ |\n"
           "//               \\  .-\\__  '-'  ___/-. /\n"
           "//             ___'. .'  /--.--\\  `. .'___\n"
           "//          .\"\" '<  `.___\\_<|>_/___.' >' \"\".\n"
           "//         | | :  `- \\`.;`\\ _ /`;.`/ - ` : | |\n"
           "//         \\  \\ `_.   \\_ __\\ /__ _/   .-` /  /\n"
           "//     =====`-.____`.___ \\_____/___.-`___.-'=====\n"
           "//                       `=---='\n"
           "//\n"
           "//\n"
           "//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
           "//\n"
           "//               佛祖保佑         永无BUG\n"
           "//         Created by shaw on 2021-01-17\n"
           "//         Copyright © 2021 shaw. All rights reserved.\n"
           "//\n");
}

extern void Cjson_print_Question(const char *value, const char *num)
{
    cJSON* cjson_test = NULL;
    cJSON* cjson_chapter = NULL;
    cJSON* cjson_temp = NULL;
    cJSON* cjson_temp_question = NULL;

    /* 解析整段JSO数据 */
    cjson_test = cJSON_Parse(value);
    if(cjson_test == NULL)
    {
        printf("parse fail.\n"); 
        //return -1;
    }
    /* 依次根据名称提取JSON数据（键值对） */
    cjson_chapter = cJSON_GetObjectItem(cjson_test, "chapter");

    printf("Chapter：%s\n", cjson_chapter->valuestring);

    /* 解析嵌套json数据 */
    cjson_temp = cJSON_GetObjectItem(cjson_test, num);
    cjson_temp_question = cJSON_GetObjectItem(cjson_temp, "question");
    printf("Question：%s\n", cjson_temp_question->valuestring);
}

extern void Cjson_print_Answer(const char *value, const char *num)
{
    cJSON* cjson_test = NULL;
    cJSON* cjson_temp = NULL;
    cJSON* cjson_temp_answer = NULL;

    /* 解析整段JSO数据 */
    cjson_test = cJSON_Parse(value);
    if(cjson_test == NULL)
    {
        printf("parse fail.\n");
        //return -1;
    }

    /* 解析嵌套json数据 */
    cjson_temp = cJSON_GetObjectItem(cjson_test, num);
    cjson_temp_answer = cJSON_GetObjectItem(cjson_temp, "answer");
    printf("Answer:\n%s\n",  cjson_temp_answer->valuestring);
}

extern int Cjson_print_Amount(const char *value)
{
    cJSON* cjson_test = NULL;
    cJSON* cjson_temp_amount = NULL;

    /* 解析整段JSO数据 */
    cjson_test = cJSON_Parse(value);
    if(cjson_test == NULL)
    {
        printf("parse fail.\n");
        return -1;
    }

    /* 解析嵌套json数据 */
    cjson_temp_amount = cJSON_GetObjectItem(cjson_test, "amount");
    printf("Amount：%d\n",  cjson_temp_amount->valueint);
    return cjson_temp_amount->valueint;
}
extern int Cjson_return_Amount(const char *value)
{
    cJSON* cjson_test = NULL;
    cJSON* cjson_temp_amount = NULL;

    /* 解析整段JSO数据 */
    cjson_test = cJSON_Parse(value);
    if(cjson_test == NULL)
    {
        printf("parse fail.\n");
        return -1;
    }

    /* 解析嵌套json数据 */
    cjson_temp_amount = cJSON_GetObjectItem(cjson_test, "amount");
    //printf("Amount：%d\n",  cjson_temp_amount->valueint);
    return cjson_temp_amount->valueint;
}

extern void Cjson_print(const char *value, const char *num)
{
    cJSON* cjson_test = NULL;
    cJSON* cjson_chapter = NULL;
    cJSON* cjson_temp = NULL;
    cJSON* cjson_temp_question = NULL;
    cJSON* cjson_temp_answer = NULL;

    /* 解析整段JSO数据 */
    cjson_test = cJSON_Parse(value);
    if(cjson_test == NULL)
    {
        printf("parse fail.\n");
        //return -1;
    }
    /* 依次根据名称提取JSON数据（键值对） */
    cjson_chapter = cJSON_GetObjectItem(cjson_test, "chapter");

    printf("chapter: %s\n", cjson_chapter->valuestring);

    /* 解析嵌套json数据 */
    cjson_temp = cJSON_GetObjectItem(cjson_test, num);
    cjson_temp_question = cJSON_GetObjectItem(cjson_temp, "question");
    cjson_temp_answer = cJSON_GetObjectItem(cjson_temp, "answer");
    printf("Question:%s\nAnswer:%s\n", cjson_temp_question->valuestring, cjson_temp_answer->valuestring);
}

extern int myRand_int(int number)
{
	srand((unsigned int)time(NULL));
	number = rand()%number;
    return number;
}

extern char* Rand_string(int number)
{
	srand((unsigned)time(NULL));
	number = rand()%number+1;
    char *a = (char *)malloc(sizeof(int));
    sprintf(a,"%d",number);
    return a;
}


extern void InitLoop(void)
{
    /* TODO:还有  */
	int i;
    printf("-------------------------------------------\n");
	printf("1、毛概知识点巩固复习\n");
	printf("2、毛概时间轴理顺（勿点击，未开发。）\n");
	printf("请输入你要的服务(0退出)：\n");
	printf("-------------------------------------------\n");
	scanf("%d",&i);
	switch(i)
	{
		case 0: exit(0);
		case 1:
            Introduction_of_MZD_Thought(); break;
		case 2: printf("复习任务繁重，未开发。。。。。\n"); break;
		default: printf("\n\n**********请输入1或2**********\n\n\n"); InitLoop();
	}
	
}
extern void Introduction_of_MZD_Thought(void)
{
	int i;
	printf("----------------毛概练习环节-----------------\n");
	printf("1、按章节练习\n");
	printf("2、随机练习（章节打乱）\n");
	printf("请输入你的选择(0返回上一级)：\n");
	printf("----------------毛概练习环节-----------------\n");
	scanf("%d",&i);
	switch(i)
	{

		case 0: InitLoop(); break;
        case 1: Introduction_of_MZD_Thought_Order(); break;
		case 2: Introduction_of_MZD_Thought_Rand(); break;
		default: printf("\n\n**********请输入1或2**********\n\n\n");
            Introduction_of_MZD_Thought();
	}
}

extern void Introduction_of_MZD_Thought_Order()
{
    int j,i;
    char *num;
    printf("请选择章节(1-14)：");
    scanf("%d",&j);
    printf("1:顺序练习\t2:随机练习(会重复)\t9:返回上一级\t0:退出\n");
    scanf("%d",&i);
    switch (i) {
        case 0: exit(0);
        case 1: {
            for (int k = 1; k <= Cjson_print_Amount(message[j-1])+1; ++k) {
                if (k==Cjson_return_Amount(message[j-1])+1) {
                    printf("本章节题目已刷完，自动返回上一级。\n");
                    Introduction_of_MZD_Thought();
                }
                char *m = (char *)malloc(sizeof(int));
                sprintf(m,"%d",k);
                Cjson_print_Question(message[j-1],m);
                printf("请输入你的答案：");
                char *a = (char *)malloc(sizeof(long long));
                scanf("%s",a);
                getchar();
                Cjson_print_Answer(message[j - 1], m);
                printf("是否继续练习(1:继续练习\t2:返回上一级\t0:退出)\n");
                int n;
                scanf("%d", &n);
                switch (n) {
                    case 0: exit(0);
                    case 1: break;
                    case 2: Introduction_of_MZD_Thought_Order();
                    default: printf("\n\n**********请按要求输入**********\n\n\n"); Introduction_of_MZD_Thought_Order();
                }
            }
        } break;
        case 2:{
            num = Rand_string(Cjson_print_Amount(message[j-1])); //在题数中随机一个数字
            Cjson_print_Question(message[j-1],num);
            printf("请输入你的答案：");
            char *a = (char *)malloc(sizeof(long long));
            scanf("%s",a);
            getchar();
            Cjson_print_Answer(message[j - 1], num);
            printf("是否继续练习(1:继续练习\t2:返回上一级\t0:退出)\n");
            int n;
            scanf("%d", &n);
            switch (n) {
                case 0: exit(0);
                case 1: Continue_Order(j); break;
                case 2: Introduction_of_MZD_Thought();
                default: printf("\n\n**********请按要求输入**********\n\n\n"); Introduction_of_MZD_Thought_Order();
            }
        } break;
        case 9: Introduction_of_MZD_Thought(); break;
        default: printf("\n\n**********请按要求输入**********\n\n\n"); Introduction_of_MZD_Thought_Order(); break;
    }
}

extern void Introduction_of_MZD_Thought_Rand()
{
    int i; char* num;
    i = myRand_int(15);
    num = Rand_string(Cjson_print_Amount(message[i]));
    Cjson_print_Question(message[i],num);
    printf("请输入你的答案：");
    char *a = (char *)malloc(sizeof(long long));
    scanf("%s",a);
    getchar();
    Cjson_print_Answer(message[i], num);
    printf("是否继续练习(1:继续练习\t2:返回上一级\t0:退出)\n");
    int n;
    scanf("%d", &n);
    switch (n) {
        case 0: exit(0);
        case 1: Introduction_of_MZD_Thought_Rand(); break;
        case 2: Introduction_of_MZD_Thought();
        default: printf("\n\n**********请按要求输入**********\n\n\n"); Introduction_of_MZD_Thought_Order();
    }
}

extern void Continue_Order(int j)
{
    char *num;
    num = Rand_string(Cjson_print_Amount(message[j-1]));
    Cjson_print_Question(message[j-1],num);
    printf("请输入你的答案：");
    char *a = (char *)malloc(sizeof(long long));
    scanf("%s",a);
    getchar();
    Cjson_print_Answer(message[j - 1], num);
    printf("是否继续练习(1:继续练习 \t 2:返回上一级 \t 0:退出)\n");
    int n;
    scanf("%d", &n);
    switch (n) {
        case 0: exit(0);
        case 1: Continue_Order(j); break;
        case 2: Introduction_of_MZD_Thought();
        default: printf("\n\n**********请按要求输入**********\n\n\n"); Introduction_of_MZD_Thought_Order();
    }
}
