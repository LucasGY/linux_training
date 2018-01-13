/*
 * a simple kernel module: hello
 *
 * Licensed under GPLv2 or later.
 */

#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void)
{
	printk(KERN_INFO "Hello World enter\n");
	return 0;
}
module_init(hello_init);

static void __exit hello_exit(void)
{
	printk(KERN_INFO "Hello World exit\n ");
}
module_exit(hello_exit);

MODULE_AUTHOR("Lucas Gou <2925998655@qq.com>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("A simple Hello World Module");
MODULE_ALIAS("a simplest module");
