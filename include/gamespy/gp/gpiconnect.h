/*
gpiConnect.h
GameSpy Presence SDK 
Dan "Mr. Pants" Schoenblum

Copyright 1999-2007 GameSpy Industries, Inc

devsupport@gamespy.com

***********************************************************************
Please see the GameSpy Presence SDK documentation for more information
**********************************************************************/

#ifndef _GPICONNECT_H_
#define _GPICONNECT_H_

//INCLUDES
//////////
#include "gpi.h"

//DEFINES
/////////
// Connect States.
//////////////////
#define GPI_NOT_CONNECTED    0
#define GPI_CONNECTING       1
#define GPI_NEGOTIATING      2
#define GPI_CONNECTED        3
#define GPI_DISCONNECTED     4
#define GPI_PROFILE_DELETING 5

//FUNCTIONS
///////////
GPResult gpiConnect(GPConnection* connection,
                    const char *nick _In_reads_z_(GP_NICK_LEN),
                    const char *uniquenick _In_reads_z_(GP_UNIQUENICK_LEN),
                    const char *email _In_reads_z_(GP_EMAIL_LEN),
                    const char *password _In_reads_z_(GP_PASSWORD_LEN),
                    const char *authtoken _In_reads_z_(GP_AUTHTOKEN_LEN),
                    const char *partnerchallenge _In_reads_z_(GP_PARTNERCHALLENGE_LEN),
                    const char *cdkey _In_reads_z_(GP_CDKEY_LEN),
                    GPEnum firewall,
                    GPIBool newuser,
                    GPEnum blocking,
                    GPCallback callback,
                    void* param);

void gpiDisconnect(GPConnection* connection, GPIBool tellServer);

GPResult gpiProcessConnect(GPConnection* connection, GPIOperation* operation, const char* input);

GPResult gpiCheckConnect(GPConnection* connection);

#endif
