#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_2_world(void)
  {
    printk(KERN_INFO "hello, world 2 /n");
    return 0;

  }

static void __init hello_2_exit(void)
  {
    printk(KERN_INFO "goodbye world 2 /n")
  }

module_init(hello_2_init);
module_init(hello_2_exit);
