/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2015-2016 MediaTek Inc.
 * Author: Yong Wu <yong.wu@mediatek.com>
 */
#ifndef _DT_BINDINGS_MEMORY_MT8173_LARB_PORT_H_
#define _DT_BINDINGS_MEMORY_MT8173_LARB_PORT_H_

#include <dt-bindings/memory/mtk-memory-port.h>

#define M4U_LARB0_ID			0
#define M4U_LARB1_ID			1
#define M4U_LARB2_ID			2
#define M4U_LARB3_ID			3
#define M4U_LARB4_ID			4
#define M4U_LARB5_ID			5

/* larb0 */
#define M4U_PORT_DISP_OVL0		MTK_M4U_ID(M4U_LARB0_ID, 0)
#define M4U_PORT_DISP_RDMA0		MTK_M4U_ID(M4U_LARB0_ID, 1)
#define M4U_PORT_DISP_WDMA0		MTK_M4U_ID(M4U_LARB0_ID, 2)
#define M4U_PORT_DISP_OD_R		MTK_M4U_ID(M4U_LARB0_ID, 3)
#define M4U_PORT_DISP_OD_W		MTK_M4U_ID(M4U_LARB0_ID, 4)
#define M4U_PORT_MDP_RDMA0		MTK_M4U_ID(M4U_LARB0_ID, 5)
#define M4U_PORT_MDP_WDMA		MTK_M4U_ID(M4U_LARB0_ID, 6)
#define M4U_PORT_MDP_WROT0		MTK_M4U_ID(M4U_LARB0_ID, 7)

/* larb1 */
#define M4U_PORT_HW_VDEC_MC_EXT		MTK_M4U_ID(M4U_LARB1_ID, 0)
#define M4U_PORT_HW_VDEC_PP_EXT		MTK_M4U_ID(M4U_LARB1_ID, 1)
#define M4U_PORT_HW_VDEC_UFO_EXT	MTK_M4U_ID(M4U_LARB1_ID, 2)
#define M4U_PORT_HW_VDEC_VLD_EXT	MTK_M4U_ID(M4U_LARB1_ID, 3)
#define M4U_PORT_HW_VDEC_VLD2_EXT	MTK_M4U_ID(M4U_LARB1_ID, 4)
#define M4U_PORT_HW_VDEC_AVC_MV_EXT	MTK_M4U_ID(M4U_LARB1_ID, 5)
#define M4U_PORT_HW_VDEC_PRED_RD_EXT	MTK_M4U_ID(M4U_LARB1_ID, 6)
#define M4U_PORT_HW_VDEC_PRED_WR_EXT	MTK_M4U_ID(M4U_LARB1_ID, 7)
#define M4U_PORT_HW_VDEC_PPWRAP_EXT	MTK_M4U_ID(M4U_LARB1_ID, 8)
#define M4U_PORT_HW_VDEC_TILE		MTK_M4U_ID(M4U_LARB1_ID, 9)

/* larb2 */
#define M4U_PORT_IMGO			MTK_M4U_ID(M4U_LARB2_ID, 0)
#define M4U_PORT_RRZO			MTK_M4U_ID(M4U_LARB2_ID, 1)
#define M4U_PORT_AAO			MTK_M4U_ID(M4U_LARB2_ID, 2)
#define M4U_PORT_LCSO			MTK_M4U_ID(M4U_LARB2_ID, 3)
#define M4U_PORT_ESFKO			MTK_M4U_ID(M4U_LARB2_ID, 4)
#define M4U_PORT_IMGO_D			MTK_M4U_ID(M4U_LARB2_ID, 5)
#define M4U_PORT_LSCI			MTK_M4U_ID(M4U_LARB2_ID, 6)
#define M4U_PORT_LSCI_D			MTK_M4U_ID(M4U_LARB2_ID, 7)
#define M4U_PORT_BPCI			MTK_M4U_ID(M4U_LARB2_ID, 8)
#define M4U_PORT_BPCI_D			MTK_M4U_ID(M4U_LARB2_ID, 9)
#define M4U_PORT_UFDI			MTK_M4U_ID(M4U_LARB2_ID, 10)
#define M4U_PORT_IMGI			MTK_M4U_ID(M4U_LARB2_ID, 11)
#define M4U_PORT_IMG2O			MTK_M4U_ID(M4U_LARB2_ID, 12)
#define M4U_PORT_IMG3O			MTK_M4U_ID(M4U_LARB2_ID, 13)
#define M4U_PORT_VIPI			MTK_M4U_ID(M4U_LARB2_ID, 14)
#define M4U_PORT_VIP2I			MTK_M4U_ID(M4U_LARB2_ID, 15)
#define M4U_PORT_VIP3I			MTK_M4U_ID(M4U_LARB2_ID, 16)
#define M4U_PORT_LCEI			MTK_M4U_ID(M4U_LARB2_ID, 17)
#define M4U_PORT_RB			MTK_M4U_ID(M4U_LARB2_ID, 18)
#define M4U_PORT_RP			MTK_M4U_ID(M4U_LARB2_ID, 19)
#define M4U_PORT_WR			MTK_M4U_ID(M4U_LARB2_ID, 20)

/* larb3 */
#define M4U_PORT_VENC_RCPU		MTK_M4U_ID(M4U_LARB3_ID, 0)
#define M4U_PORT_VENC_REC		MTK_M4U_ID(M4U_LARB3_ID, 1)
#define M4U_PORT_VENC_BSDMA		MTK_M4U_ID(M4U_LARB3_ID, 2)
#define M4U_PORT_VENC_SV_COMV		MTK_M4U_ID(M4U_LARB3_ID, 3)
#define M4U_PORT_VENC_RD_COMV		MTK_M4U_ID(M4U_LARB3_ID, 4)
#define M4U_PORT_JPGENC_RDMA		MTK_M4U_ID(M4U_LARB3_ID, 5)
#define M4U_PORT_JPGENC_BSDMA		MTK_M4U_ID(M4U_LARB3_ID, 6)
#define M4U_PORT_JPGDEC_WDMA		MTK_M4U_ID(M4U_LARB3_ID, 7)
#define M4U_PORT_JPGDEC_BSDMA		MTK_M4U_ID(M4U_LARB3_ID, 8)
#define M4U_PORT_VENC_CUR_LUMA		MTK_M4U_ID(M4U_LARB3_ID, 9)
#define M4U_PORT_VENC_CUR_CHROMA	MTK_M4U_ID(M4U_LARB3_ID, 10)
#define M4U_PORT_VENC_REF_LUMA		MTK_M4U_ID(M4U_LARB3_ID, 11)
#define M4U_PORT_VENC_REF_CHROMA	MTK_M4U_ID(M4U_LARB3_ID, 12)
#define M4U_PORT_VENC_NBM_RDMA		MTK_M4U_ID(M4U_LARB3_ID, 13)
#define M4U_PORT_VENC_NBM_WDMA		MTK_M4U_ID(M4U_LARB3_ID, 14)

/* larb4 */
#define M4U_PORT_DISP_OVL1		MTK_M4U_ID(M4U_LARB4_ID, 0)
#define M4U_PORT_DISP_RDMA1		MTK_M4U_ID(M4U_LARB4_ID, 1)
#define M4U_PORT_DISP_RDMA2		MTK_M4U_ID(M4U_LARB4_ID, 2)
#define M4U_PORT_DISP_WDMA1		MTK_M4U_ID(M4U_LARB4_ID, 3)
#define M4U_PORT_MDP_RDMA1		MTK_M4U_ID(M4U_LARB4_ID, 4)
#define M4U_PORT_MDP_WROT1		MTK_M4U_ID(M4U_LARB4_ID, 5)

/* larb5 */
#define M4U_PORT_VENC_RCPU_SET2		MTK_M4U_ID(M4U_LARB5_ID, 0)
#define M4U_PORT_VENC_REC_FRM_SET2	MTK_M4U_ID(M4U_LARB5_ID, 1)
#define M4U_PORT_VENC_REF_LUMA_SET2	MTK_M4U_ID(M4U_LARB5_ID, 2)
#define M4U_PORT_VENC_REC_CHROMA_SET2	MTK_M4U_ID(M4U_LARB5_ID, 3)
#define M4U_PORT_VENC_BSDMA_SET2	MTK_M4U_ID(M4U_LARB5_ID, 4)
#define M4U_PORT_VENC_CUR_LUMA_SET2	MTK_M4U_ID(M4U_LARB5_ID, 5)
#define M4U_PORT_VENC_CUR_CHROMA_SET2	MTK_M4U_ID(M4U_LARB5_ID, 6)
#define M4U_PORT_VENC_RD_COMA_SET2	MTK_M4U_ID(M4U_LARB5_ID, 7)
#define M4U_PORT_VENC_SV_COMA_SET2	MTK_M4U_ID(M4U_LARB5_ID, 8)

#endif
