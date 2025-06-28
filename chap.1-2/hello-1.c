

#include <linux/module.h>
#include <linux/kernel.h>

int init_moduel(void)
  {
    printk(KERN_INFO "hello word 1. \n");
    /*
     * A non 0 return means init_module failed; module can't be loaded.
     */
   return 0;
  }

void cleanup_module(void)
  {
    printk(KERN_INFO "goodbye world 1. \n");
  }

//module_init(my_init);
//module_exit(exit);

MODULE_LICENSE("GPL");
