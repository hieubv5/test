/******************************************************************************
*
*       NXP(TM) and the NXP logo are trademarks of NXP.
*       All other product or service names are the property of their respective owners.
*       (C) Freescale Semiconductor, Inc. 2013-2016
*       Copyright 2021 NXP
*
*       THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
*       BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF NXP.
*
*       Description: OS property file
*
*       Note: The implementation that was used is: AUTOSAR_S32K
*       System Generator for AUTOSAR OS/S32K - Version: 4.0 Build 4.0.98
*
********************************************************************************/
/* OSPROP configuration file */

#ifndef OSPROP_H
#define OSPROP_H

/* Timing protection */
#define OSNTPTSKARRIV 0U                   /* The number of tasks with TIMEFRAME > 0  */
#define OSNTPTSKRESLOCKS 0U                /* number of all resource locking time configurations for TASKs */
#define OSNTPISRRESLOCKS 0U                /*  number of all resource locking time configurations for ISRs cat.2 */
#define OSNTPTSKARRIVCORE0 0U              /* The number of tasks with TIMEFRAME > 0  */
#define OSNTPTSKRESLOCKSCORE0 0U           /* number of all resource locking time configurations for TASKs */
#define OSNTPISRRESLOCKSCORE0 0U           /*  number of all resource locking time configurations for ISRs cat.2 */
#define OSNTPTSKARRIVCORE1 0U              /* The number of tasks with TIMEFRAME > 0  */
#define OSNTPTSKRESLOCKSCORE1 0U           /* number of all resource locking time configurations for TASKs */
#define OSNTPISRRESLOCKSCORE1 0U           /*  number of all resource locking time configurations for ISRs cat.2 */
#define OSNTPISRARRIV 0U                   /* The number of ISR2 with TIMEFRAME > 0  */
#define OSNTPTSKBGTS 0U                    /* The number of task with Execution Budget > 0 */
#define OSNTPISRBGTS 0U                    /* The number of ISR2 with Execution Time > 0 */
#define OSNTPBGTS 0U                       /* The number of task with execution budget  and ISR2 with execution time (OSNTPBGTS=OSNTPTSKBGTS+OSNTPISRBGTS) */
#define OSNTPTSKINTLOCKTIME 0U             /* The number of task with OS Interrupt Lock Time */
#define OSNTPISRINTLOCKTIME 0U             /* The number of ISR2 with OS Interrupt Lock Time */
#define OSNTPTSKRESLOCKTIME 0U             /* The number of task with at least one Resource Lock Time */
#define OSNTPISRRESLOCKTIME 0U             /* The number of ISR2 with at least one Resource Lock Time */
#define OSNTPCORE0TSKRESLOCKTIME 0U        /* The number of task with at least one Resource Lock Time */
#define OSNTPCORE0ISRRESLOCKTIME 0U        /* The number of ISR2 with at least one Resource Lock Time */
#define OSNTPCORE1TSKRESLOCKTIME 0U        /* The number of task with at least one Resource Lock Time */
#define OSNTPCORE1ISRRESLOCKTIME 0U        /* The number of ISR2 with at least one Resource Lock Time */

/* Multi-Core */

#define OSNCORES 1U                        /* The number of cores in the system */
#define OS_MASTER_CORE 0U                  /* The Master Core number */
#define OS_SECOND_CORE 1U                  /* The Second Core number */
#define OSNSPINLOCKS 0U                    /* The number number of spinlocks */
#define OSNTASKSCORE0 6U                   /* The number of tasks assigned to core 0 */
#define OSNTASKSCORE1 0U                   /* The number of tasks assigned to core 1 */
#define OSNISRCORE0 0U                     /* equal to summ of number ISR, system timers and TPTimer */
#define OSNISRCORE1 0U                     /* equal to summ of number ISR, system timers and TPTimer */
#define OSNUSERISRCORE0 1U                 /* The number of ISR2s assigned to core 0 */
#define OSNUSERISRCORE1 0U                 /* The number of ISR2s assigned to core 1 */
#define OSNCTRSCORE0 3U                    /* The number of counters assigned to core 0 */
#define OSNCTRSCORE1 0U                    /* The number of counters assigned to core 1 */
#define OSNRESSCORE0 4U                    /* The number of RESOURCEs with task priority assigned to core 0 */
#define OSNRESSCORE1 0U                    /* The number of RESOURCEs with task priority assigned to core 1 */
#define OSNISRRESSCORE0 0U                 /* The number of RESOURCEs with ISR priority assigned to core 0 */
#define OSNISRRESSCORE1 0U                 /* The number of RESOURCEs with ISR priority assigned to core 1 */

/* IOC */

#define OSNIOCBUFFERS 2U                   /* The number of "LastIsBest" non-grouped communications */
#define OSNIOCQUEUES 0U                    /* The number of "Queued" non-grouped communications */
#define OSNIOCGROUPBUFFERS 0U              /* The number of "LastIsBest" grouped  communications */
#define OSNIOCGROUPQUEUES 0U               /* The number of "Queued" grouped communications */
#define OSNIOCCALLBACKS 0U                 /* The number of IOC communication objects with callbacks */
#define OSIOCACTION                        /* defined if there is IOC object(s) with configured action */
#define OSIOCSETEVENT                      /* defined if there is IOC object(s) with ACTION=SETEVENT */

/* Implementation */

#define OSS32K

/* Target MCU */

#ifndef OSS32K
#define OSS32K                             /* Target MCU */

#endif
#define OSSTKSIZE 416U                     /* Common stack size */

/* Applications */

#define OSNAPPS 3U                         /* number of OS-applications */
#define OSNTRUSTEDFUNCTIONS 0U             /* number of trusted functions */
#define OSNNOTTRUSTEDAPPS 0U               /* number of not trusted applications */
#define OSNNOTTRUSTEDAPPSCORE0 0U          /* number of not trusted applications of the first core */
#define OSNNOTTRUSTEDAPPSCORE1 0U          /* number of not trusted applications of the second core */
#define OSHAS_RESTARTTASK                  /* Application with HAS_RESTARTTASK = TRUE exists */
#define OSNMEMDATA0 0U                     /* number of nontrusted application with data in region #0 */
#define OSNMEMDATA1 0U                     /* number of nontrusted application with data in region #1 */
#define OSNMEMDATA2 0U                     /* number of nontrusted application with data in region #2 */

/* Scalability Class */

#define OSSC1                              /* Scalability Class */

/* Conformance Class */

#define OSECC1                             /* Conformance Class */

/* Scheduler Policy */

#define OSMIXPREEMPT                       /* mixed schedule pollicy is set */
#define OSNOFASTTERMINATE                  /* FastTerminate attribute is set to FALSE */
#define OSRES_SCHEDULER                    /* USERESSCHEDULER attribute has TRUE value */
#define OSEXTSTATUS                        /* STATUS attribute has the EXTENDED value */
#define OSORTIDEBUGLEVEL 2U                /* value of DEBUG_LEVEL attribute */
#define OSSTKCHECK                         /* attribute StackOverflowCheck is set to TRUE */
#define OSSTKCHECKPATTERN 0xDEAD55AAU      /* equal to StackOverflowCheck/Pattern */
#define OSSTKCHECKPATTERNSIZE 4U           /* equal to StackOverflowCheck/PatternSize */

/* Hook routines */

#define OSHOOKERROR                        /* User-supplied OS hook for error handling is used */
#define OSHOOKPRETASK                      /* PRETASKHOOK is set to TRUE */
#define OSHOOKPOSTTASK                     /* POSTTASKHOOK is set to TRUE */
#define OSAPPHOOKERROR                     /* ERRORHOOK is set to TRUE */

/* ISRs categories support */

#define OSNOISR1                           /* no defined ISR category 1 */
#define OSISRSTACKSIZE 204U                /* ISRs stack size */

/* Interrupt management */

#define OSISRENTRYEXIT                     /* ISR entry/exit frames must be implemented */

/* Timing protection */


/* Communication mechanism */


/* Counters and Alarms mechanisms */

#define OSNHWCTRSCORE0 1U                  /* The number of system timers of type HWCOUNTER (0, 1 or 2) assigned to core 0 */
#define OSNHWCTRSCORE1 0U                  /* The number of system timers of type HWCOUNTER (0, 1 or 2) assigned to core 1 */
#define OSHWCOUNTER                        /* Shall be defined if any timer is HWCOUNTER */
#define OSSYSTIMER                         /* SysTimer has the HWCOUNTER or SWCOUNTER value */
#define OSSECONDTIMER                      /* SecondTimer has the HWCOUNTER or SWCOUNTER value */
#define OSNSYSTMRS 2U                      /* The number of timers, excluding TP Timer */
#define OSTIMFTM0                          /* Hardware for System/Second timer */
#define OSTIMCHAN 0U                       /* Hardware channel for System timer */
#define OSFTM0GLOBALPRESCALER 2U           /* value of FTM0.GlobalFTMPrescaler */
#define OSTIM2SYSTICK                      /* Hardware for System/Second timer */
#define OSTIM2MODULO 30000U                /* The TimerModuloValue of the timer */
#define OSALMACTIVTASK                     /* at least one alarm has the ACTION = ACTIVATETASK */
#define OSALMSETEVENT                      /* east one alarm has the ACTION = SETEVENT */
#define OSNAPPMODES 1U                     /* equal to number of APPMODES objects */
#define OSNTSKS 6U                         /* equal to number of TASK objects */
#define OSNXTSKS 1U                        /* equal to number of extended TASK objects */
#define OSNISRRESS 0U                      /* number of RESOURCEs which are used by ISRs */
#define OSNRESS 3U                         /* The number of RESOURCEs with task priority, STANDARD or LINKED plus resscheduler */
#define OSRESOURCE                         /* at least one resource with task priority and RESOURCEPROPERTY = STANDARD (including RES_SCHEDULER) is defined */
#define OSNCTRS 3U                         /* equal to number of COUNTER objects */
#define OSCOUNTER                          /* defined if at least one COUNTER object defined  */
#define OSNUSERALMS 2U                     /* equal to number of ALARM objects */
#define OSNALMS 3U                         /* equal to number of ALARM and SCHEDULETABLES objects */
#define OSALARM                            /* at least one ALARM object defined */
#define OSNAUTOALMS 0U                     /* equal to number of auto-start alarms */
#define OSNMSGS 0U                         /* equal to the number of MESSAGE objects */
#define OSNNONTRUSTEDTSKS 0U               /* Number of tasks which belongs to nontrusted applications  */
#define OSNNONTRUSTEDISR 0U                /* Number of user's ISR2 which belongs to nontrusted applications  */
#define OSNUSERISR 1U                      /* The number of ISR2s */
#define OSNISR 3U                          /* equal to summ of number ISR, system timers and TPTimer */
#define OSHIGHISRPRIO 5U                   /* equal to the highest ISR(category 2)/SysTimer/SecondTimer (ISR)PRIORITY */
#define OSNIPLS 3U                         /* equal to number of different ISR priorities including timers */
#define OSTIM2INIT                         /* SecondTimer has a HWCOUNTER different from SysTimer HWCOUNTER(s) */
#define OSTIMER1 0U                        /* Index for a SysTimer */
#define OSTIMER2 1U                        /* Index for a SecondTimer */

/* Schedule table */

#define OSNSCTS 1U                         /* equal to the number of scheduletables */
#define OSNAUTOSCTS 0U                     /* The number of autostart scheduletables */
#define OSSCHEDULETABLES                   /* defined if number of scheduletables > 0 */
#define OSNALMACTSCORE0 0U                 /* The number of crosscore action */
#define OSNALMACTSCORE1 0U                 /* The number of crosscore action */
#endif /* OSPROP_H */

