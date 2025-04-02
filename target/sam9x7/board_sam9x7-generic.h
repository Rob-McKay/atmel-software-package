/**
 * \page sam9x7_generic_board_desc sam9x7-generic - Board Description
 *
 * \section Purpose
 *
 * This file is dedicated to describe a generic sam9x7 board.
 *
 * \section Contents
 *
 *  - sam9x7-generic
 *  - For sam9x7-generic information, see \subpage sam9x7_generic_board_info.
 *  - For operating frequency information, see \subpage sam9x7_generic_opfreq.
 *  - For using portable PIO definitions, see \subpage sam9x7_generic_piodef.
 *  - For on-board memories, see \subpage sam9x7_generic_mem.
 *  - Several USB definitions are included here, see \subpage sam9x7_generic_usb.
 *  - For External components, see \subpage sam9x7_generic_extcomp.
 *  - For Individual chip definition, see \subpage sam9x7_generic_chipdef.
 *
 * To get more software details and the full list of parameters related to the
 * sam9x7-generic board configuration, please have a look at the source file:
 * \ref board.h\n
 *
 * \section Usage
 *
 *  - The code for booting the board is provided by board_cstartup_xxx.c and
 *    board_lowlevel.c.
 *  - For using board PIOs, board characteristics (clock, etc.) and external
 *    components, see board.h.
 *  - For manipulating memories, see board_memories.h.
 *
 * This file can be used as a template and modified to fit a custom board, with
 * specific PIOs usage or memory connections.
 */

/**
 *  \file board.h
 *
 *  Definition of sam9x7-generic
 *  characteristics, chip-dependent PIOs and external components interfacing.
 */

#ifndef BOARD_SAM9X7_GENERIC_H_
#define BOARD_SAM9X7_GENERIC_H_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "chip.h"

#include "board_support.h"

/*----------------------------------------------------------------------------
 *        HW BOARD Definitions
 *----------------------------------------------------------------------------*/

/**
 * \page sam9x7_generic_board_info "sam9x7-generic - Board informations"
 * This page lists several definition related to the board description.
 *
 * \section Definitions
 * - \ref BOARD_NAME
 */

/** Name of the board */
#define BOARD_NAME "sam9x7-generic"

/*----------------------------------------------------------------------------*/

/** Frequency of the board main clock oscillator (autodetect) */
#define BOARD_MAIN_CLOCK_EXT_OSC 24000000

/** \def Board System timer */
#define BOARD_TIMER_TC      TC1
#define BOARD_TIMER_CHANNEL 0

#endif /* BOARD_SAM9X7_GENERIC_H */
