#ifndef __irq_nmi_defs_h
#define __irq_nmi_defs_h

/*
 * This file is autogenerated from
 *   file:           ../../mod/irq_nmi.r
 *     id:           <not found>
 *     last modfied: Thu Jan 22 09:22:43 2004
 *
 *   by /n/asic/design/tools/rdesc/src/rdes2c --outfile irq_nmi_defs.h ../../mod/irq_nmi.r
 *      id: $Id: irq_nmi_defs.h,v 1.1.1.1 2014/01/09 02:42:56 mt7620 Exp $
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */
/* Main access macros */
#ifndef REG_RD
#define REG_RD( scope, inst, reg ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR
#define REG_WR( scope, inst, reg, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_VECT
#define REG_RD_VECT( scope, inst, reg, index ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_VECT
#define REG_WR_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT
#define REG_RD_INT( scope, inst, reg ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR_INT
#define REG_WR_INT( scope, inst, reg, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT_VECT
#define REG_RD_INT_VECT( scope, inst, reg, index ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_INT_VECT
#define REG_WR_INT_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_TYPE_CONV
#define REG_TYPE_CONV( type, orgtype, val ) \
  ( { union { orgtype o; type n; } r; r.o = val; r.n; } )
#endif

#ifndef reg_page_size
#define reg_page_size 8192
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg + \
    (index) * STRIDE_##scope##_##reg )
#endif

/* C-code for register scope irq_nmi */

/* Register rw_cmd, scope irq_nmi, type rw */
typedef struct {
  unsigned int delay : 16;
  unsigned int op    : 2;
  unsigned int dummy1 : 14;
} reg_irq_nmi_rw_cmd;
#define REG_RD_ADDR_irq_nmi_rw_cmd 0
#define REG_WR_ADDR_irq_nmi_rw_cmd 0


/* Constants */
enum {
  regk_irq_nmi_ack_irq                     = 0x00000002,
  regk_irq_nmi_ack_nmi                     = 0x00000003,
  regk_irq_nmi_irq                         = 0x00000000,
  regk_irq_nmi_nmi                         = 0x00000001
};
#endif /* __irq_nmi_defs_h */
