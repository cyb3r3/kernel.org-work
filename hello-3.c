#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int hello3_data __initdata = 3;


static int __init hello_3_world(void)
  {
    printk(KERN_INFO "hello, world %d2 /n", hello3_data);
    return 0;

  }

static void __init hello_3_exit(void)
  {
    printk(KERN_INFO "goodbye world 3 /n")
  }

module_init(hello_3_init);
module_init(hello_3_exit);
