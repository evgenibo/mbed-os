/*******************************************************************************
* \file cycfg_smif_memslot.h
* \version 1.0
*
* \brief
* Provides declarations of the SMIF-driver memory configuration.
*
* Note: This is an auto generated file. Do not modify it.
*
********************************************************************************
* \copyright
* Copyright 2018, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************

SMIF_CONFIG_START

<CySMIFConfiguration>
    <DevicePath>C:/Users/valk/ModusToolbox 1.0/tools/smif-configurator-1.0/data/devices/PSoC 6.xml</DevicePath>
    <SlotConfigs>
        <SlotConfig>
            <SlaveSlot>0</SlaveSlot>
            <PartNumber>S25FL512S</PartNumber>
            <MemoryMapped>false</MemoryMapped>
            <DualQuad>None</DualQuad>
            <StartAddress>0x18000000</StartAddress>
            <Size>0x10000</Size>
            <EndAddress>0x1800FFFF</EndAddress>
            <WriteEnable>true</WriteEnable>
            <Encrypt>false</Encrypt>
            <DataSelect>QUAD_SPI_DATA_0_3</DataSelect>
            <MemoryConfigsPath>S25FL512S</MemoryConfigsPath>
            <ConfigDataInFlash>false</ConfigDataInFlash>
        </SlotConfig>
        <SlotConfig>
            <SlaveSlot>1</SlaveSlot>
            <PartNumber>Not used</PartNumber>
            <MemoryMapped>false</MemoryMapped>
            <DualQuad>None</DualQuad>
            <StartAddress>0x18010000</StartAddress>
            <Size>0x10000</Size>
            <EndAddress>0x1801FFFF</EndAddress>
            <WriteEnable>false</WriteEnable>
            <Encrypt>false</Encrypt>
            <DataSelect>SPI_MOSI_MISO_DATA_0_1</DataSelect>
            <MemoryConfigsPath>default_memory.xml</MemoryConfigsPath>
            <ConfigDataInFlash>false</ConfigDataInFlash>
        </SlotConfig>
        <SlotConfig>
            <SlaveSlot>2</SlaveSlot>
            <PartNumber>Not used</PartNumber>
            <MemoryMapped>false</MemoryMapped>
            <DualQuad>None</DualQuad>
            <StartAddress>0x18020000</StartAddress>
            <Size>0x10000</Size>
            <EndAddress>0x1802FFFF</EndAddress>
            <WriteEnable>false</WriteEnable>
            <Encrypt>false</Encrypt>
            <DataSelect>SPI_MOSI_MISO_DATA_0_1</DataSelect>
            <MemoryConfigsPath>default_memory.xml</MemoryConfigsPath>
            <ConfigDataInFlash>false</ConfigDataInFlash>
        </SlotConfig>
        <SlotConfig>
            <SlaveSlot>3</SlaveSlot>
            <PartNumber>Not used</PartNumber>
            <MemoryMapped>false</MemoryMapped>
            <DualQuad>None</DualQuad>
            <StartAddress>0x18030000</StartAddress>
            <Size>0x10000</Size>
            <EndAddress>0x1803FFFF</EndAddress>
            <WriteEnable>false</WriteEnable>
            <Encrypt>false</Encrypt>
            <DataSelect>SPI_MOSI_MISO_DATA_0_1</DataSelect>
            <MemoryConfigsPath>default_memory.xml</MemoryConfigsPath>
            <ConfigDataInFlash>false</ConfigDataInFlash>
        </SlotConfig>
    </SlotConfigs>
</CySMIFConfiguration>

SMIF_CONFIG_END
*/

#ifndef CY_SMIF_MEMCONFIG_H
#define CY_SMIF_MEMCONFIG_H
#include "cy_smif_memslot.h"

#define CY_SMIF_DEVICE_NUM 1

extern cy_stc_smif_mem_cmd_t S25FL512S_SlaveSlot_0_readCmd;
extern cy_stc_smif_mem_cmd_t S25FL512S_SlaveSlot_0_writeEnCmd;
extern cy_stc_smif_mem_cmd_t S25FL512S_SlaveSlot_0_writeDisCmd;
extern cy_stc_smif_mem_cmd_t S25FL512S_SlaveSlot_0_eraseCmd;
extern cy_stc_smif_mem_cmd_t S25FL512S_SlaveSlot_0_chipEraseCmd;
extern cy_stc_smif_mem_cmd_t S25FL512S_SlaveSlot_0_programCmd;
extern cy_stc_smif_mem_cmd_t S25FL512S_SlaveSlot_0_readStsRegQeCmd;
extern cy_stc_smif_mem_cmd_t S25FL512S_SlaveSlot_0_readStsRegWipCmd;
extern cy_stc_smif_mem_cmd_t S25FL512S_SlaveSlot_0_writeStsRegQeCmd;

extern cy_stc_smif_mem_device_cfg_t deviceCfg_S25FL512S_SlaveSlot_0;

extern const cy_stc_smif_mem_config_t S25FL512S_SlaveSlot_0;
extern const cy_stc_smif_mem_config_t* smifMemConfigs[CY_SMIF_DEVICE_NUM];

extern const cy_stc_smif_block_config_t smifBlockConfig;


#endif /*CY_SMIF_MEMCONFIG_H*/
