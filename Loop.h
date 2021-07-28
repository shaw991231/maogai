#ifndef Loop_h
#define Loop_h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cJSON.h"

char *message [];



extern void Bless_U(void);
extern void Cjson_print(const char *value, const char *num);  /*将Json格式的题目和答案输出*/
extern void Cjson_print_Question(const char *value, const char *num);  /*将Json格式的题目输出*/
extern void Cjson_print_Answer(const char *value, const char *num);  /*将Json格式的答案输出*/
extern int Cjson_print_Amount(const char *value); /*将Json格式的题目数量输出*/
extern int Cjson_return_Amount(const char *value); /*将Json格式的题目数量返回*/
extern char* Rand_string(int number); /*返回一个字符串类型的随机数在number范围内*/
extern int myRand_int(int number); /*返回一个整数类型的随机数在1-number范围内*/
extern void InitLoop(void); /*界面显示*/
extern void Introduction_of_MZD_Thought(void); /*毛概练习*/
extern void Introduction_of_MZD_Thought_Order(); /*毛概顺序练习 */
extern void Introduction_of_MZD_Thought_Rand(); /*毛概随机练习 */
extern void Continue_Order(int j); /*继续出题不返回其他界面*/


#endif /* Loop_h */