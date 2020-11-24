/*************************************************************************
	> File Name: hello.c
	> Author: liugang
	> Mail: 308584349@163.com 
	> Created Time: Mon 23 Nov 2020 01:48:30 PM CST
 ************************************************************************/

#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
static int hello_init(void)
{
  printk(KERN_ALERT "Hello, world\n");
  return 0;
}
static void hello_exit(void)
{
  printk(KERN_ALERT "Goodbye, cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);

