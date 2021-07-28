#include <stdio.h>
#include "cJSON.h"

char *message = 
"{                              \
    \"number\": 1,              \
    \"chapter\": 1,                \
    \"question\": \"毛泽东思想的活的灵魂是？\",           \
    \"answer\": \"实事求是、独立自主、群众路线\"           \
}";


int main(void)
{
    cJSON* cjson_test = NULL;
    cJSON* cjson_number = NULL;
    cJSON* cjson_chapter = NULL;
    cJSON* cjson_question = NULL;
    cJSON* cjson_answer = NULL;

    /* 解析整段JSO数据 */
    cjson_test = cJSON_Parse(message);
    if(cjson_test == NULL)
    {
        printf("parse fail.\n");
        return -1;
    }

    /* 依次根据名称提取JSON数据（键值对） */
    cjson_number = cJSON_GetObjectItem(cjson_test, "number");
    cjson_chapter = cJSON_GetObjectItem(cjson_test, "chapter");
    cjson_question = cJSON_GetObjectItem(cjson_test, "question");
    cjson_answer = cJSON_GetObjectItem(cjson_test, "answer");

    printf("number: %d\n", cjson_number->valueint);
    printf("chapter:%d\n", cjson_chapter->valueint);
    printf("question:%s\n", cjson_question->valuestring);
    printf("answer:%s\n", cjson_answer->valuestring);

    
    return 0;
}