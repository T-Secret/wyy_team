#include <stdio.h>
int main(void)
{
char name[80];
FILE *fp=fopen("C:\ss.txt","w");/*以写模式("w")打开文件ss.txt,如果不存在,会自动创建*/
gets(name);

fputs(name,fp);
/*将名称以字符串形式写入文件*/
fclose(fp);/*关闭文件*/
return 0;
}