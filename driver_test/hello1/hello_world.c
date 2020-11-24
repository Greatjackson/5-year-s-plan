/*************************************************************************
	> File Name: hello_world.c
	> Author: liugang
	> Mail: 308584349@163.com 
	> Created Time: Wed 23 Sep 2020 04:43:13 PM CST
 ************************************************************************/
#if 0
#include <linux/init.h>             
#include <linux/module.h>          
#include <linux/kernel.h>   

//指定license版本
MODULE_LICENSE("GPL");              

//设置初始化入口函数
static int __init hello_world_init(void)
{
    printk(KERN_DEBUG "hello world!!!\n");
    return 0;
}

//设置出口函数
static void __exit hello_world_exit(void)
{
    printk(KERN_DEBUG "goodbye world!!!\n");
}

//将上述定义的init()和exit()函数定义为模块入口/出口函数
module_init(hello_world_init);
module_exit(hello_world_exit);
#else
#include <linux/init.h>             
#include <linux/module.h>          
#include <linux/kernel.h>   

MODULE_AUTHOR("Yu Qiang");
MODULE_LICENSE("GPL"); 

static int nbr = 10;
module_param(nbr, int, S_IRUGO);

static int __init yuer_init(void)
{
    int i;
    for(i=0; i<nbr; i++)
	{
		printk(KERN_ALERT "Hello, How are you. %d/n", i);
	}
    return 0;
}

static void __exit yuer_exit(void)
{
    printk(KERN_ALERT"I come from yuer's module, I have been unload./n");
}

 module_init(yuer_init);
 module_exit(yuer_exit);

#endif
