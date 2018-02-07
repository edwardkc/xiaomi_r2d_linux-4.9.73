//#include <linux/cpumask.h>
#include <linux/kernel.h>


extern struct cpumask __cpu_online_mask;

const struct cpumask const *cpu_online_mask = ((const struct cpumask *)&__cpu_online_mask);
