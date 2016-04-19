//==============================================================================
// Copyright (c) 2015-2016 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief THIS CODE WAS AUTOGENERATED BY PASSTHROUGHGENERATOR ON 04/14/16
//==============================================================================

#ifndef _HSAIMAGEEXTENSIONAPITRACECLASSES_H_
#define _HSAIMAGEEXTENSIONAPITRACECLASSES_H_

#include "../HSAAPIBase.h"

///////////////////////////////////////////////////
/// Class used to trace hsa_ext_image_get_capability
///////////////////////////////////////////////////
class HSA_APITrace_hsa_ext_image_get_capability : public HSAAPIBase
{
public:
    /// Constructor
    HSA_APITrace_hsa_ext_image_get_capability();

    /// Destructor
    ~HSA_APITrace_hsa_ext_image_get_capability();

    /// get return value string
    /// \return string representation of the return value;
    std::string GetRetString();

    /// Returns the API's arguments formatted as strings
    /// \return string representation of the API's arguments
    std::string ToString();

    /// Assigns the API's various parameter values
    /// \param agent Parameter passed to hsa_ext_image_get_capability
    /// \param geometry Parameter passed to hsa_ext_image_get_capability
    /// \param image_format Parameter passed to hsa_ext_image_get_capability
    /// \param capability_mask Parameter passed to hsa_ext_image_get_capability
    void Create(ULONGLONG ullStartTime,
                ULONGLONG ullEndTime,
                hsa_agent_t agent,
                hsa_ext_image_geometry_t geometry,
                const hsa_ext_image_format_t* image_format,
                uint32_t* capability_mask,
                hsa_status_t retVal
               );

private:
    /// Disabled copy constructor
    /// \rhs item being copied
    HSA_APITrace_hsa_ext_image_get_capability(const HSA_APITrace_hsa_ext_image_get_capability& rhs);

    /// Disabled assignment operator
    /// \rhs item being assigned
    HSA_APITrace_hsa_ext_image_get_capability& operator = (const HSA_APITrace_hsa_ext_image_get_capability& rhs);

    hsa_agent_t m_agent; ///< Parameter passed to hsa_ext_image_get_capability
    hsa_ext_image_geometry_t m_geometry; ///< Parameter passed to hsa_ext_image_get_capability
    const hsa_ext_image_format_t* m_image_format; ///< Parameter passed to hsa_ext_image_get_capability
    hsa_ext_image_format_t m_image_formatVal; ///< Member to hold value passed to hsa_ext_image_get_capability in image_format parameter
    uint32_t* m_capability_mask; ///< Parameter passed to hsa_ext_image_get_capability
    uint32_t m_capability_maskVal; ///< Member to hold value passed to hsa_ext_image_get_capability in capability_mask parameter
    hsa_status_t m_retVal; ///< Parameter passed to hsa_ext_image_get_capability
};

///////////////////////////////////////////////////
/// Class used to trace hsa_ext_image_data_get_info
///////////////////////////////////////////////////
class HSA_APITrace_hsa_ext_image_data_get_info : public HSAAPIBase
{
public:
    /// Constructor
    HSA_APITrace_hsa_ext_image_data_get_info();

    /// Destructor
    ~HSA_APITrace_hsa_ext_image_data_get_info();

    /// get return value string
    /// \return string representation of the return value;
    std::string GetRetString();

    /// Returns the API's arguments formatted as strings
    /// \return string representation of the API's arguments
    std::string ToString();

    /// Assigns the API's various parameter values
    /// \param agent Parameter passed to hsa_ext_image_data_get_info
    /// \param image_descriptor Parameter passed to hsa_ext_image_data_get_info
    /// \param access_permission Parameter passed to hsa_ext_image_data_get_info
    /// \param image_data_info Parameter passed to hsa_ext_image_data_get_info
    void Create(ULONGLONG ullStartTime,
                ULONGLONG ullEndTime,
                hsa_agent_t agent,
                const hsa_ext_image_descriptor_t* image_descriptor,
                hsa_access_permission_t access_permission,
                hsa_ext_image_data_info_t* image_data_info,
                hsa_status_t retVal
               );

private:
    /// Disabled copy constructor
    /// \rhs item being copied
    HSA_APITrace_hsa_ext_image_data_get_info(const HSA_APITrace_hsa_ext_image_data_get_info& rhs);

    /// Disabled assignment operator
    /// \rhs item being assigned
    HSA_APITrace_hsa_ext_image_data_get_info& operator = (const HSA_APITrace_hsa_ext_image_data_get_info& rhs);

    hsa_agent_t m_agent; ///< Parameter passed to hsa_ext_image_data_get_info
    const hsa_ext_image_descriptor_t* m_image_descriptor; ///< Parameter passed to hsa_ext_image_data_get_info
    hsa_ext_image_descriptor_t m_image_descriptorVal; ///< Member to hold value passed to hsa_ext_image_data_get_info in image_descriptor parameter
    hsa_access_permission_t m_access_permission; ///< Parameter passed to hsa_ext_image_data_get_info
    hsa_ext_image_data_info_t* m_image_data_info; ///< Parameter passed to hsa_ext_image_data_get_info
    hsa_ext_image_data_info_t m_image_data_infoVal; ///< Member to hold value passed to hsa_ext_image_data_get_info in image_data_info parameter
    hsa_status_t m_retVal; ///< Parameter passed to hsa_ext_image_data_get_info
};

///////////////////////////////////////////////////
/// Class used to trace hsa_ext_image_create
///////////////////////////////////////////////////
class HSA_APITrace_hsa_ext_image_create : public HSAAPIBase
{
public:
    /// Constructor
    HSA_APITrace_hsa_ext_image_create();

    /// Destructor
    ~HSA_APITrace_hsa_ext_image_create();

    /// get return value string
    /// \return string representation of the return value;
    std::string GetRetString();

    /// Returns the API's arguments formatted as strings
    /// \return string representation of the API's arguments
    std::string ToString();

    /// Assigns the API's various parameter values
    /// \param agent Parameter passed to hsa_ext_image_create
    /// \param image_descriptor Parameter passed to hsa_ext_image_create
    /// \param image_data Parameter passed to hsa_ext_image_create
    /// \param access_permission Parameter passed to hsa_ext_image_create
    /// \param image Parameter passed to hsa_ext_image_create
    void Create(ULONGLONG ullStartTime,
                ULONGLONG ullEndTime,
                hsa_agent_t agent,
                const hsa_ext_image_descriptor_t* image_descriptor,
                const void* image_data,
                hsa_access_permission_t access_permission,
                hsa_ext_image_t* image,
                hsa_status_t retVal
               );

private:
    /// Disabled copy constructor
    /// \rhs item being copied
    HSA_APITrace_hsa_ext_image_create(const HSA_APITrace_hsa_ext_image_create& rhs);

    /// Disabled assignment operator
    /// \rhs item being assigned
    HSA_APITrace_hsa_ext_image_create& operator = (const HSA_APITrace_hsa_ext_image_create& rhs);

    hsa_agent_t m_agent; ///< Parameter passed to hsa_ext_image_create
    const hsa_ext_image_descriptor_t* m_image_descriptor; ///< Parameter passed to hsa_ext_image_create
    hsa_ext_image_descriptor_t m_image_descriptorVal; ///< Member to hold value passed to hsa_ext_image_create in image_descriptor parameter
    const void* m_image_data; ///< Parameter passed to hsa_ext_image_create
    hsa_access_permission_t m_access_permission; ///< Parameter passed to hsa_ext_image_create
    hsa_ext_image_t* m_image; ///< Parameter passed to hsa_ext_image_create
    hsa_ext_image_t m_imageVal; ///< Member to hold value passed to hsa_ext_image_create in image parameter
    hsa_status_t m_retVal; ///< Parameter passed to hsa_ext_image_create
};

///////////////////////////////////////////////////
/// Class used to trace hsa_ext_image_destroy
///////////////////////////////////////////////////
class HSA_APITrace_hsa_ext_image_destroy : public HSAAPIBase
{
public:
    /// Constructor
    HSA_APITrace_hsa_ext_image_destroy();

    /// Destructor
    ~HSA_APITrace_hsa_ext_image_destroy();

    /// get return value string
    /// \return string representation of the return value;
    std::string GetRetString();

    /// Returns the API's arguments formatted as strings
    /// \return string representation of the API's arguments
    std::string ToString();

    /// Assigns the API's various parameter values
    /// \param agent Parameter passed to hsa_ext_image_destroy
    /// \param image Parameter passed to hsa_ext_image_destroy
    void Create(ULONGLONG ullStartTime,
                ULONGLONG ullEndTime,
                hsa_agent_t agent,
                hsa_ext_image_t image,
                hsa_status_t retVal
               );

private:
    /// Disabled copy constructor
    /// \rhs item being copied
    HSA_APITrace_hsa_ext_image_destroy(const HSA_APITrace_hsa_ext_image_destroy& rhs);

    /// Disabled assignment operator
    /// \rhs item being assigned
    HSA_APITrace_hsa_ext_image_destroy& operator = (const HSA_APITrace_hsa_ext_image_destroy& rhs);

    hsa_agent_t m_agent; ///< Parameter passed to hsa_ext_image_destroy
    hsa_ext_image_t m_image; ///< Parameter passed to hsa_ext_image_destroy
    hsa_status_t m_retVal; ///< Parameter passed to hsa_ext_image_destroy
};

///////////////////////////////////////////////////
/// Class used to trace hsa_ext_image_copy
///////////////////////////////////////////////////
class HSA_APITrace_hsa_ext_image_copy : public HSAAPIBase
{
public:
    /// Constructor
    HSA_APITrace_hsa_ext_image_copy();

    /// Destructor
    ~HSA_APITrace_hsa_ext_image_copy();

    /// get return value string
    /// \return string representation of the return value;
    std::string GetRetString();

    /// Returns the API's arguments formatted as strings
    /// \return string representation of the API's arguments
    std::string ToString();

    /// Assigns the API's various parameter values
    /// \param agent Parameter passed to hsa_ext_image_copy
    /// \param src_image Parameter passed to hsa_ext_image_copy
    /// \param src_offset Parameter passed to hsa_ext_image_copy
    /// \param dst_image Parameter passed to hsa_ext_image_copy
    /// \param dst_offset Parameter passed to hsa_ext_image_copy
    /// \param range Parameter passed to hsa_ext_image_copy
    void Create(ULONGLONG ullStartTime,
                ULONGLONG ullEndTime,
                hsa_agent_t agent,
                hsa_ext_image_t src_image,
                const hsa_dim3_t* src_offset,
                hsa_ext_image_t dst_image,
                const hsa_dim3_t* dst_offset,
                const hsa_dim3_t* range,
                hsa_status_t retVal
               );

private:
    /// Disabled copy constructor
    /// \rhs item being copied
    HSA_APITrace_hsa_ext_image_copy(const HSA_APITrace_hsa_ext_image_copy& rhs);

    /// Disabled assignment operator
    /// \rhs item being assigned
    HSA_APITrace_hsa_ext_image_copy& operator = (const HSA_APITrace_hsa_ext_image_copy& rhs);

    hsa_agent_t m_agent; ///< Parameter passed to hsa_ext_image_copy
    hsa_ext_image_t m_src_image; ///< Parameter passed to hsa_ext_image_copy
    const hsa_dim3_t* m_src_offset; ///< Parameter passed to hsa_ext_image_copy
    hsa_dim3_t m_src_offsetVal; ///< Member to hold value passed to hsa_ext_image_copy in src_offset parameter
    hsa_ext_image_t m_dst_image; ///< Parameter passed to hsa_ext_image_copy
    const hsa_dim3_t* m_dst_offset; ///< Parameter passed to hsa_ext_image_copy
    hsa_dim3_t m_dst_offsetVal; ///< Member to hold value passed to hsa_ext_image_copy in dst_offset parameter
    const hsa_dim3_t* m_range; ///< Parameter passed to hsa_ext_image_copy
    hsa_dim3_t m_rangeVal; ///< Member to hold value passed to hsa_ext_image_copy in range parameter
    hsa_status_t m_retVal; ///< Parameter passed to hsa_ext_image_copy
};

///////////////////////////////////////////////////
/// Class used to trace hsa_ext_image_import
///////////////////////////////////////////////////
class HSA_APITrace_hsa_ext_image_import : public HSAAPIBase
{
public:
    /// Constructor
    HSA_APITrace_hsa_ext_image_import();

    /// Destructor
    ~HSA_APITrace_hsa_ext_image_import();

    /// get return value string
    /// \return string representation of the return value;
    std::string GetRetString();

    /// Returns the API's arguments formatted as strings
    /// \return string representation of the API's arguments
    std::string ToString();

    /// Assigns the API's various parameter values
    /// \param agent Parameter passed to hsa_ext_image_import
    /// \param src_memory Parameter passed to hsa_ext_image_import
    /// \param src_row_pitch Parameter passed to hsa_ext_image_import
    /// \param src_slice_pitch Parameter passed to hsa_ext_image_import
    /// \param dst_image Parameter passed to hsa_ext_image_import
    /// \param image_region Parameter passed to hsa_ext_image_import
    void Create(ULONGLONG ullStartTime,
                ULONGLONG ullEndTime,
                hsa_agent_t agent,
                const void* src_memory,
                size_t src_row_pitch,
                size_t src_slice_pitch,
                hsa_ext_image_t dst_image,
                const hsa_ext_image_region_t* image_region,
                hsa_status_t retVal
               );

private:
    /// Disabled copy constructor
    /// \rhs item being copied
    HSA_APITrace_hsa_ext_image_import(const HSA_APITrace_hsa_ext_image_import& rhs);

    /// Disabled assignment operator
    /// \rhs item being assigned
    HSA_APITrace_hsa_ext_image_import& operator = (const HSA_APITrace_hsa_ext_image_import& rhs);

    hsa_agent_t m_agent; ///< Parameter passed to hsa_ext_image_import
    const void* m_src_memory; ///< Parameter passed to hsa_ext_image_import
    size_t m_src_row_pitch; ///< Parameter passed to hsa_ext_image_import
    size_t m_src_slice_pitch; ///< Parameter passed to hsa_ext_image_import
    hsa_ext_image_t m_dst_image; ///< Parameter passed to hsa_ext_image_import
    const hsa_ext_image_region_t* m_image_region; ///< Parameter passed to hsa_ext_image_import
    hsa_ext_image_region_t m_image_regionVal; ///< Member to hold value passed to hsa_ext_image_import in image_region parameter
    hsa_status_t m_retVal; ///< Parameter passed to hsa_ext_image_import
};

///////////////////////////////////////////////////
/// Class used to trace hsa_ext_image_export
///////////////////////////////////////////////////
class HSA_APITrace_hsa_ext_image_export : public HSAAPIBase
{
public:
    /// Constructor
    HSA_APITrace_hsa_ext_image_export();

    /// Destructor
    ~HSA_APITrace_hsa_ext_image_export();

    /// get return value string
    /// \return string representation of the return value;
    std::string GetRetString();

    /// Returns the API's arguments formatted as strings
    /// \return string representation of the API's arguments
    std::string ToString();

    /// Assigns the API's various parameter values
    /// \param agent Parameter passed to hsa_ext_image_export
    /// \param src_image Parameter passed to hsa_ext_image_export
    /// \param dst_memory Parameter passed to hsa_ext_image_export
    /// \param dst_row_pitch Parameter passed to hsa_ext_image_export
    /// \param dst_slice_pitch Parameter passed to hsa_ext_image_export
    /// \param image_region Parameter passed to hsa_ext_image_export
    void Create(ULONGLONG ullStartTime,
                ULONGLONG ullEndTime,
                hsa_agent_t agent,
                hsa_ext_image_t src_image,
                void* dst_memory,
                size_t dst_row_pitch,
                size_t dst_slice_pitch,
                const hsa_ext_image_region_t* image_region,
                hsa_status_t retVal
               );

private:
    /// Disabled copy constructor
    /// \rhs item being copied
    HSA_APITrace_hsa_ext_image_export(const HSA_APITrace_hsa_ext_image_export& rhs);

    /// Disabled assignment operator
    /// \rhs item being assigned
    HSA_APITrace_hsa_ext_image_export& operator = (const HSA_APITrace_hsa_ext_image_export& rhs);

    hsa_agent_t m_agent; ///< Parameter passed to hsa_ext_image_export
    hsa_ext_image_t m_src_image; ///< Parameter passed to hsa_ext_image_export
    void* m_dst_memory; ///< Parameter passed to hsa_ext_image_export
    size_t m_dst_row_pitch; ///< Parameter passed to hsa_ext_image_export
    size_t m_dst_slice_pitch; ///< Parameter passed to hsa_ext_image_export
    const hsa_ext_image_region_t* m_image_region; ///< Parameter passed to hsa_ext_image_export
    hsa_ext_image_region_t m_image_regionVal; ///< Member to hold value passed to hsa_ext_image_export in image_region parameter
    hsa_status_t m_retVal; ///< Parameter passed to hsa_ext_image_export
};

///////////////////////////////////////////////////
/// Class used to trace hsa_ext_image_clear
///////////////////////////////////////////////////
class HSA_APITrace_hsa_ext_image_clear : public HSAAPIBase
{
public:
    /// Constructor
    HSA_APITrace_hsa_ext_image_clear();

    /// Destructor
    ~HSA_APITrace_hsa_ext_image_clear();

    /// get return value string
    /// \return string representation of the return value;
    std::string GetRetString();

    /// Returns the API's arguments formatted as strings
    /// \return string representation of the API's arguments
    std::string ToString();

    /// Assigns the API's various parameter values
    /// \param agent Parameter passed to hsa_ext_image_clear
    /// \param image Parameter passed to hsa_ext_image_clear
    /// \param data Parameter passed to hsa_ext_image_clear
    /// \param image_region Parameter passed to hsa_ext_image_clear
    void Create(ULONGLONG ullStartTime,
                ULONGLONG ullEndTime,
                hsa_agent_t agent,
                hsa_ext_image_t image,
                const void* data,
                const hsa_ext_image_region_t* image_region,
                hsa_status_t retVal
               );

private:
    /// Disabled copy constructor
    /// \rhs item being copied
    HSA_APITrace_hsa_ext_image_clear(const HSA_APITrace_hsa_ext_image_clear& rhs);

    /// Disabled assignment operator
    /// \rhs item being assigned
    HSA_APITrace_hsa_ext_image_clear& operator = (const HSA_APITrace_hsa_ext_image_clear& rhs);

    hsa_agent_t m_agent; ///< Parameter passed to hsa_ext_image_clear
    hsa_ext_image_t m_image; ///< Parameter passed to hsa_ext_image_clear
    const void* m_data; ///< Parameter passed to hsa_ext_image_clear
    const hsa_ext_image_region_t* m_image_region; ///< Parameter passed to hsa_ext_image_clear
    hsa_ext_image_region_t m_image_regionVal; ///< Member to hold value passed to hsa_ext_image_clear in image_region parameter
    hsa_status_t m_retVal; ///< Parameter passed to hsa_ext_image_clear
};

///////////////////////////////////////////////////
/// Class used to trace hsa_ext_sampler_create
///////////////////////////////////////////////////
class HSA_APITrace_hsa_ext_sampler_create : public HSAAPIBase
{
public:
    /// Constructor
    HSA_APITrace_hsa_ext_sampler_create();

    /// Destructor
    ~HSA_APITrace_hsa_ext_sampler_create();

    /// get return value string
    /// \return string representation of the return value;
    std::string GetRetString();

    /// Returns the API's arguments formatted as strings
    /// \return string representation of the API's arguments
    std::string ToString();

    /// Assigns the API's various parameter values
    /// \param agent Parameter passed to hsa_ext_sampler_create
    /// \param sampler_descriptor Parameter passed to hsa_ext_sampler_create
    /// \param sampler Parameter passed to hsa_ext_sampler_create
    void Create(ULONGLONG ullStartTime,
                ULONGLONG ullEndTime,
                hsa_agent_t agent,
                const hsa_ext_sampler_descriptor_t* sampler_descriptor,
                hsa_ext_sampler_t* sampler,
                hsa_status_t retVal
               );

private:
    /// Disabled copy constructor
    /// \rhs item being copied
    HSA_APITrace_hsa_ext_sampler_create(const HSA_APITrace_hsa_ext_sampler_create& rhs);

    /// Disabled assignment operator
    /// \rhs item being assigned
    HSA_APITrace_hsa_ext_sampler_create& operator = (const HSA_APITrace_hsa_ext_sampler_create& rhs);

    hsa_agent_t m_agent; ///< Parameter passed to hsa_ext_sampler_create
    const hsa_ext_sampler_descriptor_t* m_sampler_descriptor; ///< Parameter passed to hsa_ext_sampler_create
    hsa_ext_sampler_descriptor_t m_sampler_descriptorVal; ///< Member to hold value passed to hsa_ext_sampler_create in sampler_descriptor parameter
    hsa_ext_sampler_t* m_sampler; ///< Parameter passed to hsa_ext_sampler_create
    hsa_ext_sampler_t m_samplerVal; ///< Member to hold value passed to hsa_ext_sampler_create in sampler parameter
    hsa_status_t m_retVal; ///< Parameter passed to hsa_ext_sampler_create
};

///////////////////////////////////////////////////
/// Class used to trace hsa_ext_sampler_destroy
///////////////////////////////////////////////////
class HSA_APITrace_hsa_ext_sampler_destroy : public HSAAPIBase
{
public:
    /// Constructor
    HSA_APITrace_hsa_ext_sampler_destroy();

    /// Destructor
    ~HSA_APITrace_hsa_ext_sampler_destroy();

    /// get return value string
    /// \return string representation of the return value;
    std::string GetRetString();

    /// Returns the API's arguments formatted as strings
    /// \return string representation of the API's arguments
    std::string ToString();

    /// Assigns the API's various parameter values
    /// \param agent Parameter passed to hsa_ext_sampler_destroy
    /// \param sampler Parameter passed to hsa_ext_sampler_destroy
    void Create(ULONGLONG ullStartTime,
                ULONGLONG ullEndTime,
                hsa_agent_t agent,
                hsa_ext_sampler_t sampler,
                hsa_status_t retVal
               );

private:
    /// Disabled copy constructor
    /// \rhs item being copied
    HSA_APITrace_hsa_ext_sampler_destroy(const HSA_APITrace_hsa_ext_sampler_destroy& rhs);

    /// Disabled assignment operator
    /// \rhs item being assigned
    HSA_APITrace_hsa_ext_sampler_destroy& operator = (const HSA_APITrace_hsa_ext_sampler_destroy& rhs);

    hsa_agent_t m_agent; ///< Parameter passed to hsa_ext_sampler_destroy
    hsa_ext_sampler_t m_sampler; ///< Parameter passed to hsa_ext_sampler_destroy
    hsa_status_t m_retVal; ///< Parameter passed to hsa_ext_sampler_destroy
};



#endif // _HSAIMAGEEXTENSIONAPITRACECLASSES_H_

