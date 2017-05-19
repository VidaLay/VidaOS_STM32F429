#ifndef _VCONFIG_H
#define _VCONFIG_H

#define VIDAOS_SYSTICK_MS                   10
#define VIDAOS_SYSTEM_CORE_CLOCK            18000000

#define VIDAOS_PRO_COUNT                    32
#define VIDAOS_SLICE_MAX                    10      // 10¸ösystickÖÜÆÚ,¼´100ms
#define VIDAOS_IDLETASK_STACK_SIZE          1024

#define VIDAOS_TIMERTASK_STACK_SIZE         1024
#define VIDAOS_TIMERTASK_PRIO               1

#define VIDAOS_ENABLE_SEM                   1
#define VIDAOS_ENABLE_MBOX                  1
#define VIDAOS_ENABLE_MEMBLOCK              1
#define VIDAOS_ENABLE_FLAGGROUP             1
#define VIDAOS_ENABLE_MUTEX                 1
#define VIDAOS_ENABLE_TIMER                 1
#define VIDAOS_ENABLE_CPUUSAGE_STAT         1
#define VIDAOS_ENABLE_HOOKS                 1

#define VIDAOS_ENABLE_FPU                   1

#endif
