/*
 * Macros.h
 *
 *  Created on: 29 Jul 2023
 *      Author: george yaccoup
 */

#ifndef LIB_MACROS_H_
#define LIB_MACROS_H_


#define SETBIT(REG,BIT) REG |= (1<<BIT)
#define CLRBIT(REG,BIT) REG &=~(1<<BIT)
#define TOGELBIT(REG,BIT) REG ^= (1<<BIT)
#define GETBIT(REG,BIT) ((REG>>BIT)&1)
#endif /* LIB_MACROS_H_ */
