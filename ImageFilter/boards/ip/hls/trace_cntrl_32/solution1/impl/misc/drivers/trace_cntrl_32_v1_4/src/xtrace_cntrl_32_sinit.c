// ==============================================================
// File generated on Sat Mar 20 14:56:23 +0100 2021
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xtrace_cntrl_32.h"

extern XTrace_cntrl_32_Config XTrace_cntrl_32_ConfigTable[];

XTrace_cntrl_32_Config *XTrace_cntrl_32_LookupConfig(u16 DeviceId) {
	XTrace_cntrl_32_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XTRACE_CNTRL_32_NUM_INSTANCES; Index++) {
		if (XTrace_cntrl_32_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XTrace_cntrl_32_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XTrace_cntrl_32_Initialize(XTrace_cntrl_32 *InstancePtr, u16 DeviceId) {
	XTrace_cntrl_32_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XTrace_cntrl_32_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XTrace_cntrl_32_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

