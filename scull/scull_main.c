#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>

MODULE_LICENSE("Dual BSD/GPL");

dev_t dev_id;

int cdev; 

static int scullc_init(void)
{
    cdev = alloc_chrdev_region(&dev_id, 0, 1, "sull");
    printk(KERN_ALERT "scullc_init\n");
    return 0;
}

static void scullc_exit(void)
{
    printk(KERN_ALERT "scullc_exit\n");
}

module_init(scullc_init);
module_exit(scullc_exit);