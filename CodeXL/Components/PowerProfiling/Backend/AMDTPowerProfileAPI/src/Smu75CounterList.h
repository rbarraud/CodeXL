//==================================================================================
// Copyright (c) 2016 , Advanced Micro Devices, Inc.  All rights reserved.
//
/// \author AMD Developer Tools Team
/// \file Smu75CounterList.h
///
//==================================================================================

//
// This file is included inline by file \CodeXL\Components\PowerProfiling\Backend\AMDTPowerProfileAPI\src\AMDTPowerProfileControl.cpp
//
// SMU7.5 - MULLINS
//
{
    /*attr_id*/COUNTERID_SMU7_APU_PWR_PCIE,
    /*parentCoutnerId*/COUNTERID_SMU7_APU_PWR_PACKAGE,
    /*name*/ PP_STR_Counter_Power_PCIECtrl,
    /*description*/ "Average PCIe-Controller Power for the sampling period, reported in Watts. This is an estimated consumption value which is calculated based on APU activity levels. This value does not include the power consumed by PCIe devices connected to the PCIe bus.",
    /*unittype*/(AMDTPwrAttributeUnitType)PWR_UNIT_TYPE_WATT,
    /*category*/(PwrCategory)CATEGORY_POWER,
    /*instance type*/(AMDTPwrAttributeInstanceType)INSTANCE_TYPE_NONCORE_SINGLE,
    /*device type*/(AMDTDeviceType)AMDT_PWR_DEVICE_PACKAGE,
    /*Aggregation type*/(1 << AMDT_PWR_VALUE_SINGLE),
},
{
    /*attr_id*/COUNTERID_SMU7_APU_PWR_DDR,
    /*parentCoutnerId*/COUNTERID_SMU7_APU_PWR_PACKAGE,
    /*name*/ PP_STR_Counter_Power_MemCtrl,
    /*description*/ "Average DDR Memory-Controller Power for the sampling period, reported in Watts. This is an estimated consumption value which is calculated based on APU activity levels. This value does not include the power consumed by the memory DIMMs.",
    /*unittype*/(AMDTPwrAttributeUnitType)PWR_UNIT_TYPE_WATT,
    /*category*/(PwrCategory)CATEGORY_POWER,
    /*instance type*/(AMDTPwrAttributeInstanceType)INSTANCE_TYPE_NONCORE_SINGLE,
    /*device type*/(AMDTDeviceType)AMDT_PWR_DEVICE_PACKAGE,
    /*Aggregation type*/(1 << AMDT_PWR_VALUE_SINGLE),
},
{
    /*attr_id*/COUNTERID_SMU7_APU_PWR_PACKAGE,
    /*parentCoutnerId*/COUNTERID_SMU7_APU_PWR_PACKAGE,
    /*name*/ PP_STR_Counter_Power_TotalAPU,
    /*description*/ "Average APU Power for the sampling period, reported in Watts. This is an estimated consumption value which is calculated based on APU activity levels.",
    /*unittype*/(AMDTPwrAttributeUnitType)PWR_UNIT_TYPE_WATT,
    /*category*/(PwrCategory)CATEGORY_POWER,
    /*instance type*/(AMDTPwrAttributeInstanceType)INSTANCE_TYPE_NONCORE_SINGLE,
    /*device type*/(AMDTDeviceType)AMDT_PWR_DEVICE_PACKAGE,
    /*Aggregation type*/(1 << AMDT_PWR_VALUE_SINGLE) | (1 << AMDT_PWR_VALUE_CUMULATIVE)
},
{
    /*attr_id*/COUNTERID_SMU7_APU_PWR_DISPLAY,
    /*parentCoutnerId*/COUNTERID_SMU7_APU_PWR_PACKAGE,
    /*name*/ PP_STR_Counter_Power_DisplayCtrl,
    /*description*/ "Average Display-Controller Power for the sampling period, reported in Watts. This value refers to the APU's internal display controller which may be used in notebook and embedded configurations. This is an estimated consumption value which is calculated based on APU activity levels. This value does not include the power consumed by the display.",
    /*unittype*/(AMDTPwrAttributeUnitType)PWR_UNIT_TYPE_WATT,
    /*category*/(PwrCategory)CATEGORY_POWER,
    /*instance type*/(AMDTPwrAttributeInstanceType)INSTANCE_TYPE_NONCORE_SINGLE,
    /*device type*/(AMDTDeviceType)AMDT_PWR_DEVICE_PACKAGE,
    /*Aggregation type*/(1 << AMDT_PWR_VALUE_SINGLE),
},
{
    /*attr_id*/COUNTERID_SMU7_APU_PWR_CU,
    /*parentCoutnerId*/COUNTERID_SMU7_APU_PWR_PACKAGE,
    /*name*/ "Power",
    /*description*/ "Average CPU Compute Unit Power for the sampling period, reported in Watts. This is an estimated consumption value which is calculated based on APU activity levels.",
    /*unittype*/(AMDTPwrAttributeUnitType)PWR_UNIT_TYPE_WATT,
    /*category*/(PwrCategory)CATEGORY_POWER,
    /*instance type*/(AMDTPwrAttributeInstanceType)INSTANCE_TYPE_PER_CU,
    /*device type*/(AMDTDeviceType)AMDT_PWR_DEVICE_CPU_COMPUTE_UNIT,
    /*Aggregation type*/(1 << AMDT_PWR_VALUE_SINGLE) | (1 << AMDT_PWR_VALUE_CUMULATIVE)
},
{
    /*attr_id*/COUNTERID_SMU7_APU_TEMP_MEAS_CU,
    /*parentCoutnerId*/0,
    /*name*/ "Measured Temp",
    /*description*/ "Measured CPU Compute Unit Average Temperature, reported in Celsius. The reported value is normalized and scaled, relative to the specific processor's maximum operating temperature. This value can be used to indicate rise and decline of temperature.",
    /*unittype*/(AMDTPwrAttributeUnitType)PWR_UNIT_TYPE_CENTIGRADE,
    /*category*/(PwrCategory)CATEGORY_TEMPERATURE,
    /*instance type*/(AMDTPwrAttributeInstanceType)INSTANCE_TYPE_PER_CU,
    /*device type*/(AMDTDeviceType)AMDT_PWR_DEVICE_CPU_COMPUTE_UNIT,
    /*Aggregation type*/(1 << AMDT_PWR_VALUE_SINGLE),
},
{
    /*attr_id*/COUNTERID_SMU7_APU_PWR_IGPU,
    /*parentCoutnerId*/COUNTERID_SMU7_APU_PWR_PACKAGE,
    /*name*/ PP_STR_Counter_Power_IGPU,
    /*description*/ "Average Integrated-GPU Power for the sampling period, reported in Watts. This is an estimated consumption value which is calculated based on APU activity levels.",
    /*unittype*/(AMDTPwrAttributeUnitType)PWR_UNIT_TYPE_WATT,
    /*category*/(PwrCategory)CATEGORY_POWER,
    /*instance type*/(AMDTPwrAttributeInstanceType)INSTANCE_TYPE_NONCORE_SINGLE,
    /*device type*/(AMDTDeviceType)AMDT_PWR_DEVICE_INTERNAL_GPU,
    /*Aggregation type*/(1 << AMDT_PWR_VALUE_SINGLE) | (1 << AMDT_PWR_VALUE_CUMULATIVE),
},
{
    /*attr_id*/COUNTERID_SMU7_APU_TEMP_MEAS_IGPU,
    /*parentCoutnerId*/0,
    /*name*/ PP_STR_Counter_MeasuredTemp_IGPU,
    /*description*/ "Measured Integrated-GPU Average Temperature, reported in Celsius. The reported value is normalized and scaled, relative to the specific processor's maximum operating temperature. This value can be used to indicate rise and decline of temperature.",
    /*unittype*/(AMDTPwrAttributeUnitType)PWR_UNIT_TYPE_CENTIGRADE,
    /*category*/(PwrCategory)CATEGORY_TEMPERATURE,
    /*instance type*/(AMDTPwrAttributeInstanceType)INSTANCE_TYPE_NONCORE_SINGLE,
    /*device type*/(AMDTDeviceType)AMDT_PWR_DEVICE_INTERNAL_GPU,
    /*Aggregation type*/(1 << AMDT_PWR_VALUE_SINGLE),
},
{
    /*attr_id*/COUNTERID_SMU7_APU_FREQ_IGPU,
    /*parentCoutnerId*/0,
    /*name*/ PP_STR_Counter_AvgFreq_IGPU,
    /*description*/ "Average Integrated-GPU Frequency for the sampling period, reported in MHz.",
    /*unittype*/(AMDTPwrAttributeUnitType)PWR_UNIT_TYPE_MEGA_HERTZ,
    /*category*/(PwrCategory)CATEGORY_FREQUENCY,
    /*instance type*/(AMDTPwrAttributeInstanceType)INSTANCE_TYPE_NONCORE_SINGLE,
    /*device type*/(AMDTDeviceType)AMDT_PWR_DEVICE_INTERNAL_GPU,
    /*Aggregation type*/(1 << AMDT_PWR_VALUE_SINGLE) | (1 << AMDT_PWR_VALUE_HISTOGRAM),
},

