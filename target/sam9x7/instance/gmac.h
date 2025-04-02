/* ---------------------------------------------------------------------------- */
/*                Microchip Microcontroller Software Support                    */
/*                       SAM Software Package License                           */
/* ---------------------------------------------------------------------------- */
/* Copyright (c) %copyright_year%, Microchip Technology Inc.                    */
/*                                                                              */
/* All rights reserved.                                                         */
/*                                                                              */
/* Redistribution and use in source and binary forms, with or without           */
/* modification, are permitted provided that the following condition is met:    */
/*                                                                              */
/* - Redistributions of source code must retain the above copyright notice,     */
/* this list of conditions and the disclaimer below.                            */
/*                                                                              */
/* Microchip's name may not be used to endorse or promote products derived from */
/* this software without specific prior written permission.                     */
/*                                                                              */
/* DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS  */
/* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES */
/* OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT    */
/* ARE DISCLAIMED. IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT,        */
/* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES           */
/* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; */
/* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND  */
/* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT   */
/* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF     */
/* THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.            */
/* ---------------------------------------------------------------------------- */

#ifndef _SAM9X_GMAC_INSTANCE_
#define _SAM9X_GMAC_INSTANCE_

#if 0 /* Needs converting from EMAC to GMAC */

/* ========== Register definition for GMAC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
  #define REG_GMAC_NCR                    (0xF802C000U) /**< \brief (GMAC) Network Control Register */
  #define REG_GMAC_NCFGR                  (0xF802C004U) /**< \brief (GMAC) Network Configuration Register */
  #define REG_GMAC_NSR                    (0xF802C008U) /**< \brief (GMAC) Network Status Register */
  #define REG_GMAC_TSR                    (0xF802C014U) /**< \brief (GMAC) Transmit Status Register */
  #define REG_GMAC_RBQP                   (0xF802C018U) /**< \brief (GMAC) Receive Buffer Queue Pointer Register */
  #define REG_GMAC_TBQP                   (0xF802C01CU) /**< \brief (GMAC) Transmit Buffer Queue Pointer Register */
  #define REG_GMAC_RSR                    (0xF802C020U) /**< \brief (GMAC) Receive Status Register */
  #define REG_GMAC_ISR                    (0xF802C024U) /**< \brief (GMAC) Interrupt Status Register */
  #define REG_GMAC_IER                    (0xF802C028U) /**< \brief (GMAC) Interrupt Enable Register */
  #define REG_GMAC_IDR                    (0xF802C02CU) /**< \brief (GMAC) Interrupt Disable Register */
  #define REG_GMAC_IMR                    (0xF802C030U) /**< \brief (GMAC) Interrupt Mask Register */
  #define REG_GMAC_MAN                    (0xF802C034U) /**< \brief (GMAC) PHY Maintenance Register */
  #define REG_GMAC_PTR                    (0xF802C038U) /**< \brief (GMAC) Pause Time Register */
  #define REG_GMAC_PFR                    (0xF802C03CU) /**< \brief (GMAC) Pause Frames Received Register */
  #define REG_GMAC_FTO                    (0xF802C040U) /**< \brief (GMAC) Frames Transmitted OK Register */
  #define REG_GMAC_SCF                    (0xF802C044U) /**< \brief (GMAC) Single Collision Frames Register */
  #define REG_GMAC_MCF                    (0xF802C048U) /**< \brief (GMAC) Multiple Collision Frames Register */
  #define REG_GMAC_FRO                    (0xF802C04CU) /**< \brief (GMAC) Frames Received OK Register */
  #define REG_GMAC_FCSE                   (0xF802C050U) /**< \brief (GMAC) Frame Check Sequence Errors Register */
  #define REG_GMAC_ALE                    (0xF802C054U) /**< \brief (GMAC) Alignment Errors Register */
  #define REG_GMAC_DTF                    (0xF802C058U) /**< \brief (GMAC) Deferred Transmission Frames Register */
  #define REG_GMAC_LCOL                   (0xF802C05CU) /**< \brief (GMAC) Late Collisions Register */
  #define REG_GMAC_ECOL                   (0xF802C060U) /**< \brief (GMAC) Excessive Collisions Register */
  #define REG_GMAC_TUND                   (0xF802C064U) /**< \brief (GMAC) Transmit Underrun Errors Register */
  #define REG_GMAC_CSE                    (0xF802C068U) /**< \brief (GMAC) Carrier Sense Errors Register */
  #define REG_GMAC_RRE                    (0xF802C06CU) /**< \brief (GMAC) Receive Resource Errors Register */
  #define REG_GMAC_ROV                    (0xF802C070U) /**< \brief (GMAC) Receive Overrun Errors Register */
  #define REG_GMAC_RSE                    (0xF802C074U) /**< \brief (GMAC) Receive Symbol Errors Register */
  #define REG_GMAC_ELE                    (0xF802C078U) /**< \brief (GMAC) Excessive Length Errors Register */
  #define REG_GMAC_RJA                    (0xF802C07CU) /**< \brief (GMAC) Receive Jabbers Register */
  #define REG_GMAC_USF                    (0xF802C080U) /**< \brief (GMAC) Undersize Frames Register */
  #define REG_GMAC_STE                    (0xF802C084U) /**< \brief (GMAC) SQE Test Errors Register */
  #define REG_GMAC_RLE                    (0xF802C088U) /**< \brief (GMAC) Received Length Field Mismatch Register */
  #define REG_GMAC_TPF                    (0xF802C08CU) /**< \brief (GMAC) Transmitted Pause Frames Register */
  #define REG_GMAC_HRB                    (0xF802C090U) /**< \brief (GMAC) Hash Register Bottom [31:0] Register */
  #define REG_GMAC_HRT                    (0xF802C094U) /**< \brief (GMAC) Hash Register Top [63:32] Register */
  #define REG_GMAC_SA1B                   (0xF802C098U) /**< \brief (GMAC) Specific Address 1 Bottom Register */
  #define REG_GMAC_SA1T                   (0xF802C09CU) /**< \brief (GMAC) Specific Address 1 Top Register */
  #define REG_GMAC_SA2B                   (0xF802C0A0U) /**< \brief (GMAC) Specific Address 2 Bottom Register */
  #define REG_GMAC_SA2T                   (0xF802C0A4U) /**< \brief (GMAC) Specific Address 2 Top Register */
  #define REG_GMAC_SA3B                   (0xF802C0A8U) /**< \brief (GMAC) Specific Address 3 Bottom Register */
  #define REG_GMAC_SA3T                   (0xF802C0ACU) /**< \brief (GMAC) Specific Address 3 Top Register */
  #define REG_GMAC_SA4B                   (0xF802C0B0U) /**< \brief (GMAC) Specific Address 4 Bottom Register */
  #define REG_GMAC_SA4T                   (0xF802C0B4U) /**< \brief (GMAC) Specific Address 4 Top Register */
  #define REG_GMAC_TID                    (0xF802C0B8U) /**< \brief (GMAC) Type ID Checking Register */
  #define REG_GMAC_TPQ                    (0xF802C0BCU) /**< \brief (GMAC) Transmit Pause Quantum Register */
  #define REG_GMAC_USRIO                  (0xF802C0C0U) /**< \brief (GMAC) User Input/Output Register */
  #define REG_GMAC_WOL                    (0xF802C0C4U) /**< \brief (GMAC) Wake-on-LAN Register */
#else
  #define REG_GMAC_NCR   (*(__IO uint32_t*)0xF802C000U) /**< \brief (GMAC) Network Control Register */
  #define REG_GMAC_NCFGR (*(__IO uint32_t*)0xF802C004U) /**< \brief (GMAC) Network Configuration Register */
  #define REG_GMAC_NSR   (*(__I  uint32_t*)0xF802C008U) /**< \brief (GMAC) Network Status Register */
  #define REG_GMAC_TSR   (*(__IO uint32_t*)0xF802C014U) /**< \brief (GMAC) Transmit Status Register */
  #define REG_GMAC_RBQP  (*(__IO uint32_t*)0xF802C018U) /**< \brief (GMAC) Receive Buffer Queue Pointer Register */
  #define REG_GMAC_TBQP  (*(__IO uint32_t*)0xF802C01CU) /**< \brief (GMAC) Transmit Buffer Queue Pointer Register */
  #define REG_GMAC_RSR   (*(__IO uint32_t*)0xF802C020U) /**< \brief (GMAC) Receive Status Register */
  #define REG_GMAC_ISR   (*(__IO uint32_t*)0xF802C024U) /**< \brief (GMAC) Interrupt Status Register */
  #define REG_GMAC_IER   (*(__O  uint32_t*)0xF802C028U) /**< \brief (GMAC) Interrupt Enable Register */
  #define REG_GMAC_IDR   (*(__O  uint32_t*)0xF802C02CU) /**< \brief (GMAC) Interrupt Disable Register */
  #define REG_GMAC_IMR   (*(__I  uint32_t*)0xF802C030U) /**< \brief (GMAC) Interrupt Mask Register */
  #define REG_GMAC_MAN   (*(__IO uint32_t*)0xF802C034U) /**< \brief (GMAC) PHY Maintenance Register */
  #define REG_GMAC_PTR   (*(__IO uint32_t*)0xF802C038U) /**< \brief (GMAC) Pause Time Register */
  #define REG_GMAC_PFR   (*(__IO uint32_t*)0xF802C03CU) /**< \brief (GMAC) Pause Frames Received Register */
  #define REG_GMAC_FTO   (*(__IO uint32_t*)0xF802C040U) /**< \brief (GMAC) Frames Transmitted OK Register */
  #define REG_GMAC_SCF   (*(__IO uint32_t*)0xF802C044U) /**< \brief (GMAC) Single Collision Frames Register */
  #define REG_GMAC_MCF   (*(__IO uint32_t*)0xF802C048U) /**< \brief (GMAC) Multiple Collision Frames Register */
  #define REG_GMAC_FRO   (*(__IO uint32_t*)0xF802C04CU) /**< \brief (GMAC) Frames Received OK Register */
  #define REG_GMAC_FCSE  (*(__IO uint32_t*)0xF802C050U) /**< \brief (GMAC) Frame Check Sequence Errors Register */
  #define REG_GMAC_ALE   (*(__IO uint32_t*)0xF802C054U) /**< \brief (GMAC) Alignment Errors Register */
  #define REG_GMAC_DTF   (*(__IO uint32_t*)0xF802C058U) /**< \brief (GMAC) Deferred Transmission Frames Register */
  #define REG_GMAC_LCOL  (*(__IO uint32_t*)0xF802C05CU) /**< \brief (GMAC) Late Collisions Register */
  #define REG_GMAC_ECOL  (*(__IO uint32_t*)0xF802C060U) /**< \brief (GMAC) Excessive Collisions Register */
  #define REG_GMAC_TUND  (*(__IO uint32_t*)0xF802C064U) /**< \brief (GMAC) Transmit Underrun Errors Register */
  #define REG_GMAC_CSE   (*(__IO uint32_t*)0xF802C068U) /**< \brief (GMAC) Carrier Sense Errors Register */
  #define REG_GMAC_RRE   (*(__IO uint32_t*)0xF802C06CU) /**< \brief (GMAC) Receive Resource Errors Register */
  #define REG_GMAC_ROV   (*(__IO uint32_t*)0xF802C070U) /**< \brief (GMAC) Receive Overrun Errors Register */
  #define REG_GMAC_RSE   (*(__IO uint32_t*)0xF802C074U) /**< \brief (GMAC) Receive Symbol Errors Register */
  #define REG_GMAC_ELE   (*(__IO uint32_t*)0xF802C078U) /**< \brief (GMAC) Excessive Length Errors Register */
  #define REG_GMAC_RJA   (*(__IO uint32_t*)0xF802C07CU) /**< \brief (GMAC) Receive Jabbers Register */
  #define REG_GMAC_USF   (*(__IO uint32_t*)0xF802C080U) /**< \brief (GMAC) Undersize Frames Register */
  #define REG_GMAC_STE   (*(__IO uint32_t*)0xF802C084U) /**< \brief (GMAC) SQE Test Errors Register */
  #define REG_GMAC_RLE   (*(__IO uint32_t*)0xF802C088U) /**< \brief (GMAC) Received Length Field Mismatch Register */
  #define REG_GMAC_TPF   (*(__IO uint32_t*)0xF802C08CU) /**< \brief (GMAC) Transmitted Pause Frames Register */
  #define REG_GMAC_HRB   (*(__IO uint32_t*)0xF802C090U) /**< \brief (GMAC) Hash Register Bottom [31:0] Register */
  #define REG_GMAC_HRT   (*(__IO uint32_t*)0xF802C094U) /**< \brief (GMAC) Hash Register Top [63:32] Register */
  #define REG_GMAC_SA1B  (*(__IO uint32_t*)0xF802C098U) /**< \brief (GMAC) Specific Address 1 Bottom Register */
  #define REG_GMAC_SA1T  (*(__IO uint32_t*)0xF802C09CU) /**< \brief (GMAC) Specific Address 1 Top Register */
  #define REG_GMAC_SA2B  (*(__IO uint32_t*)0xF802C0A0U) /**< \brief (GMAC) Specific Address 2 Bottom Register */
  #define REG_GMAC_SA2T  (*(__IO uint32_t*)0xF802C0A4U) /**< \brief (GMAC) Specific Address 2 Top Register */
  #define REG_GMAC_SA3B  (*(__IO uint32_t*)0xF802C0A8U) /**< \brief (GMAC) Specific Address 3 Bottom Register */
  #define REG_GMAC_SA3T  (*(__IO uint32_t*)0xF802C0ACU) /**< \brief (GMAC) Specific Address 3 Top Register */
  #define REG_GMAC_SA4B  (*(__IO uint32_t*)0xF802C0B0U) /**< \brief (GMAC) Specific Address 4 Bottom Register */
  #define REG_GMAC_SA4T  (*(__IO uint32_t*)0xF802C0B4U) /**< \brief (GMAC) Specific Address 4 Top Register */
  #define REG_GMAC_TID   (*(__IO uint32_t*)0xF802C0B8U) /**< \brief (GMAC) Type ID Checking Register */
  #define REG_GMAC_TPQ   (*(__IO uint32_t*)0xF802C0BCU) /**< \brief (GMAC) Transmit Pause Quantum Register */
  #define REG_GMAC_USRIO (*(__IO uint32_t*)0xF802C0C0U) /**< \brief (GMAC) User Input/Output Register */
  #define REG_GMAC_WOL   (*(__IO uint32_t*)0xF802C0C4U) /**< \brief (GMAC) Wake-on-LAN Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif

#endif /* _SAM9X_GMAC0_INSTANCE_ */
