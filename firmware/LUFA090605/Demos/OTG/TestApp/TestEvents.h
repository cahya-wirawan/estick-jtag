/*
             LUFA Library
     Copyright (C) Dean Camera, 2009.
              
  dean [at] fourwalledcubicle [dot] com
      www.fourwalledcubicle.com
*/

/*
  Copyright 2009  Dean Camera (dean [at] fourwalledcubicle [dot] com)

  Permission to use, copy, modify, and distribute this software
  and its documentation for any purpose and without fee is hereby
  granted, provided that the above copyright notice appear in all
  copies and that both that the copyright notice and this
  permission notice and warranty disclaimer appear in supporting
  documentation, and that the name of the author not be used in
  advertising or publicity pertaining to distribution of the
  software without specific, written prior permission.

  The author disclaim all warranties with regard to this
  software, including all implied warranties of merchantability
  and fitness.  In no event shall the author be liable for any
  special, indirect or consequential damages or any damages
  whatsoever resulting from loss of use, data or profits, whether
  in an action of contract, negligence or other tortious action,
  arising out of or in connection with the use or performance of
  this software.
*/

/** \file
 *
 *  Header file for TestEvents.c.
 */

#ifndef _TESTEVENTS_H_
#define _TESTEVENTS_H_

	/* Includes: */
		#include <avr/io.h>

		#include <LUFA/Common/Common.h>                          // Commonly used macros
		#include <LUFA/Drivers/USB/USB.h>                        // USB Functionality
		#include <LUFA/Drivers/Board/LEDs.h>                     // LED driver
		#include <LUFA/Drivers/Peripheral/SerialStream.h>        // USART Stream driver
		#include <LUFA/Drivers/Misc/TerminalCodes.h>             // ANSI Terminal Escape Codes
		#include <LUFA/Scheduler/Scheduler.h>                    // Simple scheduler for task management

	/* Macros: */
		/** Prefix sent through the USART when an even fires before the actual event message. */
		#define EVENT_PREFIX ESC_INVERSE_ON "EVENT:" ESC_INVERSE_OFF " "

	/* Function Prototypes: */
		#if defined(INCLUDE_FROM_TESTEVENTS_C) || defined(__DOXYGEN__)
			static void Abort_Program(void) ATTR_NO_RETURN;
		#endif

		void EVENT_USB_VBUSChange(void);
		void EVENT_USB_VBUSConnect(void);
		void EVENT_USB_VBUSDisconnect(void);
		void EVENT_USB_Connect(void);
		void EVENT_USB_Disconnect(void);
		void EVENT_USB_InitFailure(const uint8_t ErrorCode);
		void EVENT_USB_UIDChange(void);
		void EVENT_USB_HostError(const uint8_t ErrorCode);
		void EVENT_USB_DeviceAttached(void);
		void EVENT_USB_DeviceUnattached(void);
		void EVENT_USB_DeviceEnumerationFailed(const uint8_t ErrorCode, const uint8_t SubErrorCode);
		void EVENT_USB_DeviceEnumerationComplete(void);
		void EVENT_USB_UnhandledControlPacket(void);
		void EVENT_USB_ConfigurationChanged(void);
		void EVENT_USB_Suspend(void);
		void EVENT_USB_WakeUp(void);
		void EVENT_USB_Reset(void);	
		
#endif
