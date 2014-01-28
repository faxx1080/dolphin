// Copyright 2014 Dolphin Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#ifndef _DIRECTINPUTCONSTANTS_H_
#define _DIRECTINPUTCONSTANTS_H_

/* 
 * Define all constants from ForceFeedbackConstants.h with DirectInput prefixes.
 *
 * No effort was made to confirm if all definitions are actually supported by
 * DirectInput, so some of these definitions may actually only exist on Mac OS X.
 */

// UUIDs
#define GUID_ConstantForce              kFFEffectType_ConstantForce_ID
#define GUID_CustomForce                kFFEffectType_CustomForce_ID
#define GUID_Damper                     kFFEffectType_Damper_ID
#define GUID_Friction                   kFFEffectType_Friction_ID
#define GUID_Inertia                    kFFEffectType_Inertia_ID
#define GUID_RampForce                  kFFEffectType_RampForce_ID
#define GUID_SawtoothDown               kFFEffectType_SawtoothDown_ID
#define GUID_SawtoothUp                 kFFEffectType_SawtoothUp_ID
#define GUID_Sine                       kFFEffectType_Sine_ID
#define GUID_Spring                     kFFEffectType_Spring_ID
#define GUID_Square                     kFFEffectType_Square_ID
#define GUID_Triangle                   kFFEffectType_Triangle_ID

// Miscellaneous
#define DI_DEGREES                      FF_DEGREES
#define DI_DOWNLOADSKIPPED              FF_DOWNLOADSKIPPED
#define DI_EFFECTRESTARTED              FF_EFFECTRESTARTED
#define DI_FALSE                        FF_FALSE
#define DI_FFNOMINALMAX                 FF_FFNOMINALMAX
#define DI_INFINITE                     FF_INFINITE
#define DI_OK                           FF_OK
#define DI_SECONDS                      FF_SECONDS
#define DI_TRUNCATED                    FF_TRUNCATED
#define DI_TRUNCATEDANDRESTARTED        FF_TRUNCATEDANDRESTARTED
#define DIEFF_OBJECTOFFSETS             FFEFF_OBJECTOFFSETS
#define DIERR_DEVICEFULL                FFERR_DEVICEFULL
#define DIERR_DEVICENOTREG              FFERR_DEVICENOTREG
#define DIERR_DEVICEPAUSED              FFERR_DEVICEPAUSED
#define DIERR_DEVICERELEASED            FFERR_DEVICERELEASED
#define DIERR_EFFECTPLAYING             FFERR_EFFECTPLAYING
#define DIERR_EFFECTTYPEMISMATCH        FFERR_EFFECTTYPEMISMATCH
#define DIERR_EFFECTTYPENOTSUPPORTED    FFERR_EFFECTTYPENOTSUPPORTED
#define DIERR_GENERIC                   FFERR_GENERIC
#define DIERR_HASEFFECTS                FFERR_HASEFFECTS
#define DIERR_INCOMPLETEEFFECT          FFERR_INCOMPLETEEFFECT
#define DIERR_INTERNAL                  FFERR_INTERNAL
#define DIERR_INVALIDDOWNLOADID         FFERR_INVALIDDOWNLOADID
#define DIERR_INVALIDPARAM              FFERR_INVALIDPARAM
#define DIERR_MOREDATA                  FFERR_MOREDATA
#define DIERR_NOINTERFACE               FFERR_NOINTERFACE
#define DIERR_NOTDOWNLOADED             FFERR_NOTDOWNLOADED
#define DIERR_NOTINITIALIZED            FFERR_NOTINITIALIZED
#define DIERR_OUTOFMEMORY               FFERR_OUTOFMEMORY
#define DIERR_UNPLUGGED                 FFERR_UNPLUGGED
#define DIERR_UNSUPPORTED               FFERR_UNSUPPORTED
#define DIERR_UNSUPPORTEDAXIS           FFERR_UNSUPPORTEDAXIS
#define DIJOFS_X                        FFJOFS_X
#define DIJOFS_Y                        FFJOFS_Y
#define DIJOFS_Z                        FFJOFS_Z

// FFCapabilitiesEffectSubType
#define DICAP_ST_KINESTHETIC            FFCAP_ST_KINESTHETIC
#define DICAP_ST_VIBRATION              FFCAP_ST_VIBRATION

// FFCapabilitiesEffectType
#define DICAP_ET_CONSTANTFORCE          FFCAP_ET_CONSTANTFORCE
#define DICAP_ET_RAMPFORCE              FFCAP_ET_RAMPFORCE
#define DICAP_ET_SQUARE                 FFCAP_ET_SQUARE
#define DICAP_ET_SINE                   FFCAP_ET_SINE
#define DICAP_ET_TRIANGLE               FFCAP_ET_TRIANGLE
#define DICAP_ET_SAWTOOTHUP             FFCAP_ET_SAWTOOTHUP
#define DICAP_ET_SAWTOOTHDOWN           FFCAP_ET_SAWTOOTHDOWN
#define DICAP_ET_SPRING                 FFCAP_ET_SPRING
#define DICAP_ET_DAMPER                 FFCAP_ET_DAMPER
#define DICAP_ET_INERTIA                FFCAP_ET_INERTIA
#define DICAP_ET_FRICTION               FFCAP_ET_FRICTION
#define DICAP_ET_CUSTOMFORCE            FFCAP_ET_CUSTOMFORCE

// FFCommandFlag
#define DISFFC_RESET                    FFSFFC_RESET
#define DISFFC_STOPALL                  FFSFFC_STOPALL
#define DISFFC_PAUSE                    FFSFFC_PAUSE
#define DISFFC_CONTINUE                 FFSFFC_CONTINUE
#define DISFFC_SETACTUATORSON           FFSFFC_SETACTUATORSON
#define DISFFC_SETACTUATORSOFF          FFSFFC_SETACTUATORSOFF

// FFCooperativeLevelFlag
#define DISCL_EXCLUSIVE                 FFSCL_EXCLUSIVE
#define DISCL_NONEXCLUSIVE              FFSCL_NONEXCLUSIVE
#define DISCL_FOREGROUND                FFSCL_FOREGROUND
#define DISCL_BACKGROUND                FFSCL_BACKGROUND

// FFCoordinateSystemFlag
#define DIEFF_CARTESIAN                 FFEFF_CARTESIAN
#define DIEFF_POLAR                     FFEFF_POLAR
#define DIEFF_SPHERICAL                 FFEFF_SPHERICAL

// FFEffectParameterFlag
#define DIEP_DURATION                   FFEP_DURATION
#define DIEP_SAMPLEPERIOD               FFEP_SAMPLEPERIOD
#define DIEP_GAIN                       FFEP_GAIN
#define DIEP_TRIGGERBUTTON              FFEP_TRIGGERBUTTON
#define DIEP_TRIGGERREPEATINTERVAL      FFEP_TRIGGERREPEATINTERVAL
#define DIEP_AXES                       FFEP_AXES
#define DIEP_DIRECTION                  FFEP_DIRECTION
#define DIEP_ENVELOPE                   FFEP_ENVELOPE
#define DIEP_TYPESPECIFICPARAMS         FFEP_TYPESPECIFICPARAMS
#define DIEP_STARTDELAY                 FFEP_STARTDELAY
#define DIEP_ALLPARAMS                  FFEP_ALLPARAMS
#define DIEP_START                      FFEP_START
#define DIEP_NORESTART                  FFEP_NORESTART
#define DIEP_NODOWNLOAD                 FFEP_NODOWNLOAD
#define DIEB_NOTRIGGER                  FFEB_NOTRIGGER

// FFEffectStartFlag
#define DIES_SOLO                       FFES_SOLO
#define DIES_NODOWNLOAD                 FFES_NODOWNLOAD

// FFEffectStatusFlag
#define DIEGES_NOTPLAYING               FFEGES_NOTPLAYING
#define DIEGES_PLAYING                  FFEGES_PLAYING
#define DIEGES_EMULATED                 FFEGES_EMULATED

// FFProperty
#define DIPROP_FFGAIN                   FFPROP_FFGAIN
#define DIPROP_AUTOCENTER               FFPROP_AUTOCENTER
// not defined in ForceFeedbackConstants.h
#define DIPROPAUTOCENTER_OFF            0
#define DIPROPAUTOCENTER_ON             1

// FFState
#define DIGFFS_EMPTY                    FFGFFS_EMPTY
#define DIGFFS_STOPPED                  FFGFFS_STOPPED
#define DIGFFS_PAUSED                   FFGFFS_PAUSED
#define DIGFFS_ACTUATORSON              FFGFFS_ACTUATORSON
#define DIGFFS_ACTUATORSOFF             FFGFFS_ACTUATORSOFF
#define DIGFFS_POWERON                  FFGFFS_POWERON
#define DIGFFS_POWEROFF                 FFGFFS_POWEROFF
#define DIGFFS_SAFETYSWITCHON           FFGFFS_SAFETYSWITCHON
#define DIGFFS_SAFETYSWITCHOFF          FFGFFS_SAFETYSWITCHOFF
#define DIGFFS_USERFFSWITCHON           FFGFFS_USERFFSWITCHON
#define DIGFFS_USERFFSWITCHOFF          FFGFFS_USERFFSWITCHOFF
#define DIGFFS_DEVICELOST               FFGFFS_DEVICELOST

#endif
