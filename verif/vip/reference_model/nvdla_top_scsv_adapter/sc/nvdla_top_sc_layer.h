// ================================================================
// NVDLA Open Source Project
// 
// Copyright(c) 2016 - 2017 NVIDIA Corporation.  Licensed under the
// NVDLA Open Hardware License; Check "LICENSE" which comes with 
// this distribution for more information.
// ================================================================

// nvdla_top sc side SC-SV Adapter 
// This is autogenerated code

#ifndef _nvdla_top_sc_layer_h
#define _nvdla_top_sc_layer_h

// Including the socket converter headers
#include "nvdla_scsv_converter.h"

#include "nvdla_scsv_sc_includes.h"
#include "nvdla_scsv_sc_tlm_channel.h"

#ifdef nvdla_top_NEED_SCSV_SC_CALLBACKS
#include "nvdla_top_sc_tlm_callbacks.h"
#endif

class nvdla_top_sc_layer : public sc_module
{
 public:
  //////////////////////////////////////////////
  //nvdla_top SystemC Model IO list
  //////////////////////////////////////////////
    
  sc_out<bool > nvdla_top_sc2sv_nvdla_intr;  
#if (!defined(__EDG__) || defined(MTI_SYSTEMC))

  //////////////////////////////////////////////
  //nvdla_top SystemC Model TLM Socket list
  ////////////////////////////////////////////// 

  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sc2sv_nvdla_core2dbb_axi4; //Connector Proxy 
  multi_passthrough_target_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sc2sv_nvdla_core2dbb_axi4_target_pt; //Passthrough socket for nvdla_top_sc2sv_nvdla_core2dbb_axi4  
  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sc2sv_nvdla_core2cvsram_axi4; //Connector Proxy 
  multi_passthrough_target_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sc2sv_nvdla_core2cvsram_axi4_target_pt; //Passthrough socket for nvdla_top_sc2sv_nvdla_core2cvsram_axi4  
          
  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sv2sc_nvdla_host_master_if; //Connector Proxy 
  multi_passthrough_initiator_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sv2sc_nvdla_host_master_if_initiator_pt; //Passthrough socket for nvdla_top_sv2sc_nvdla_host_master_if  
          
  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sc2sv_dma_monitor_mc; //Connector Proxy 
  multi_passthrough_target_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sc2sv_dma_monitor_mc_target_pt; //Passthrough socket for nvdla_top_sc2sv_dma_monitor_mc  

  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sc2sv_dma_monitor_cv; //Connector Proxy 
  multi_passthrough_target_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sc2sv_dma_monitor_cv_target_pt; //Passthrough socket for nvdla_top_sc2sv_dma_monitor_cv  

  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sc2sv_convolution_core_monitor_initiator; //Connector Proxy 
  multi_passthrough_target_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sc2sv_convolution_core_monitor_initiator_target_pt; //Passthrough socket for nvdla_top_sc2sv_convolution_core_monitor_initiator  
          
  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sc2sv_post_processing_monitor_initiator; //Connector Proxy 
  multi_passthrough_target_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sc2sv_post_processing_monitor_initiator_target_pt; //Passthrough socket for nvdla_top_sc2sv_post_processing_monitor_initiator  
          
  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sv2sc_dma_monitor_mc_credit; //Connector Proxy 
  multi_passthrough_initiator_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sv2sc_dma_monitor_mc_credit_initiator_pt; //Passthrough socket for nvdla_top_sv2sc_dma_monitor_mc_credit  
          
  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sv2sc_dma_monitor_cv_credit; //Connector Proxy 
  multi_passthrough_initiator_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sv2sc_dma_monitor_cv_credit_initiator_pt; //Passthrough socket for nvdla_top_sv2sc_dma_monitor_cv_credit  

  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sv2sc_convolution_core_monitor_credit; //Connector Proxy 
  multi_passthrough_initiator_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sv2sc_convolution_core_monitor_credit_initiator_pt; //Passthrough socket for nvdla_top_sv2sc_convolution_core_monitor_credit  

  nvdla_scsv_sc_tlm_channel<32,tlm_base_protocol_types> *nvdla_top_sv2sc_post_processing_monitor_credit; //Connector Proxy 
  multi_passthrough_initiator_socket<nvdla_top_sc_layer,32,tlm_base_protocol_types> nvdla_top_sv2sc_post_processing_monitor_credit_initiator_pt; //Passthrough socket for nvdla_top_sv2sc_post_processing_monitor_credit  

  // Callbacks
#ifdef nvdla_top_DEC_MACRO
  nvdla_top_DEC_MACRO
#endif

#endif

    //Constructor
    nvdla_top_sc_layer(sc_module_name name);

};
#endif // nvdla_top_sc_layer 
