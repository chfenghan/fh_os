/*
    该文件负责完成内核的初始化工作
*/
#include <kernel/mem.h>

extern void print(char *);

int main()
{
    mem_init();
	while(2);

}
