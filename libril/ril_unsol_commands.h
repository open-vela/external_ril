/* //device/libs/telephony/ril_unsol_commands.h
**
** Copyright 2006, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/
{ RIL_UNSOL_RESPONSE_RADIO_STATE_CHANGED, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_RESPONSE_CALL_STATE_CHANGED, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_RESPONSE_VOICE_NETWORK_STATE_CHANGED, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_RESPONSE_NEW_SMS, responseString, WAKE_PARTIAL },
    { RIL_UNSOL_RESPONSE_NEW_SMS_STATUS_REPORT, responseString, WAKE_PARTIAL },
    { RIL_UNSOL_RESPONSE_NEW_SMS_ON_SIM, responseInts, WAKE_PARTIAL },
    { RIL_UNSOL_ON_USSD, responseStrings, WAKE_PARTIAL },
    { RIL_UNSOL_ON_USSD_REQUEST, responseVoid, DONT_WAKE },
    { RIL_UNSOL_NITZ_TIME_RECEIVED, responseString, WAKE_PARTIAL },
    { RIL_UNSOL_SIGNAL_STRENGTH, responseRilSignalStrength, DONT_WAKE },
    { RIL_UNSOL_DATA_CALL_LIST_CHANGED, responseDataCallList, WAKE_PARTIAL },
    { RIL_UNSOL_SUPP_SVC_NOTIFICATION, responseSsn, WAKE_PARTIAL },
    { RIL_UNSOL_STK_SESSION_END, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_STK_PROACTIVE_COMMAND, responseString, WAKE_PARTIAL },
    { RIL_UNSOL_STK_EVENT_NOTIFY, responseString, WAKE_PARTIAL },
    { RIL_UNSOL_STK_CALL_SETUP, responseInts, WAKE_PARTIAL },
    { RIL_UNSOL_SIM_SMS_STORAGE_FULL, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_SIM_REFRESH, responseSimRefresh, WAKE_PARTIAL },
    { 1018, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_RESPONSE_SIM_STATUS_CHANGED, responseVoid, WAKE_PARTIAL },
    { 1020, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_RESPONSE_NEW_BROADCAST_SMS, responseRaw, WAKE_PARTIAL },
    { 1022, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_RESTRICTED_STATE_CHANGED, responseInts, WAKE_PARTIAL },
    { RIL_UNSOL_ENTER_EMERGENCY_CALLBACK_MODE, responseVoid, WAKE_PARTIAL },
    { 1025, responseVoid, WAKE_PARTIAL },
    { 1026, responseVoid, WAKE_PARTIAL },
    { 1027, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_OEM_HOOK_RAW, responseRaw, WAKE_PARTIAL },
    { RIL_UNSOL_RINGBACK_TONE, responseInts, WAKE_PARTIAL },
    { RIL_UNSOL_RESEND_INCALL_MUTE, responseVoid, WAKE_PARTIAL },
    { 1031, responseVoid, WAKE_PARTIAL },
    { 1032, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_EXIT_EMERGENCY_CALLBACK_MODE, responseVoid, WAKE_PARTIAL },
    { RIL_UNSOL_RIL_CONNECTED, responseInts, WAKE_PARTIAL },
    { RIL_UNSOL_VOICE_RADIO_TECH_CHANGED, responseInts, WAKE_PARTIAL },
    { RIL_UNSOL_CELL_INFO_LIST, responseCellInfoList, WAKE_PARTIAL },
    // 1037
    { RIL_UNSOL_RESPONSE_IMS_NETWORK_STATE_CHANGED, responseVoid, WAKE_PARTIAL },
    { 1038, responseVoid, WAKE_PARTIAL },
    { 1039, responseVoid, WAKE_PARTIAL },
    { 1040, responseVoid, WAKE_PARTIAL },
    { 1041, responseVoid, WAKE_PARTIAL },
    { 1042, responseVoid, WAKE_PARTIAL },
    { 1043, responseVoid, WAKE_PARTIAL },
    { 1044, responseVoid, WAKE_PARTIAL },
    { 1045, responseVoid, WAKE_PARTIAL },
    { 1046, responseVoid, WAKE_PARTIAL },
    // 1047 responseVoid
    { RIL_UNSOL_MODEM_RESTART, responseVoid, WAKE_PARTIAL },