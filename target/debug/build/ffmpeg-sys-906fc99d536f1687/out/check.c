
		#include <stdio.h>
		#include <libavutil/avutil.h>

			#ifndef FF_API_OLD_AVOPTIONS
			#define FF_API_OLD_AVOPTIONS 0
			#define FF_API_OLD_AVOPTIONS_is_defined 0
			#else
			#define FF_API_OLD_AVOPTIONS_is_defined 1
			#endif
		
			#ifndef FF_API_PIX_FMT
			#define FF_API_PIX_FMT 0
			#define FF_API_PIX_FMT_is_defined 0
			#else
			#define FF_API_PIX_FMT_is_defined 1
			#endif
		
			#ifndef FF_API_CONTEXT_SIZE
			#define FF_API_CONTEXT_SIZE 0
			#define FF_API_CONTEXT_SIZE_is_defined 0
			#else
			#define FF_API_CONTEXT_SIZE_is_defined 1
			#endif
		
			#ifndef FF_API_PIX_FMT_DESC
			#define FF_API_PIX_FMT_DESC 0
			#define FF_API_PIX_FMT_DESC_is_defined 0
			#else
			#define FF_API_PIX_FMT_DESC_is_defined 1
			#endif
		
			#ifndef FF_API_AV_REVERSE
			#define FF_API_AV_REVERSE 0
			#define FF_API_AV_REVERSE_is_defined 0
			#else
			#define FF_API_AV_REVERSE_is_defined 1
			#endif
		
			#ifndef FF_API_AUDIOCONVERT
			#define FF_API_AUDIOCONVERT 0
			#define FF_API_AUDIOCONVERT_is_defined 0
			#else
			#define FF_API_AUDIOCONVERT_is_defined 1
			#endif
		
			#ifndef FF_API_CPU_FLAG_MMX2
			#define FF_API_CPU_FLAG_MMX2 0
			#define FF_API_CPU_FLAG_MMX2_is_defined 0
			#else
			#define FF_API_CPU_FLAG_MMX2_is_defined 1
			#endif
		
			#ifndef FF_API_LLS_PRIVATE
			#define FF_API_LLS_PRIVATE 0
			#define FF_API_LLS_PRIVATE_is_defined 0
			#else
			#define FF_API_LLS_PRIVATE_is_defined 1
			#endif
		
			#ifndef FF_API_AVFRAME_LAVC
			#define FF_API_AVFRAME_LAVC 0
			#define FF_API_AVFRAME_LAVC_is_defined 0
			#else
			#define FF_API_AVFRAME_LAVC_is_defined 1
			#endif
		
			#ifndef FF_API_VDPAU
			#define FF_API_VDPAU 0
			#define FF_API_VDPAU_is_defined 0
			#else
			#define FF_API_VDPAU_is_defined 1
			#endif
		
			#ifndef FF_API_GET_CHANNEL_LAYOUT_COMPAT
			#define FF_API_GET_CHANNEL_LAYOUT_COMPAT 0
			#define FF_API_GET_CHANNEL_LAYOUT_COMPAT_is_defined 0
			#else
			#define FF_API_GET_CHANNEL_LAYOUT_COMPAT_is_defined 1
			#endif
		
			#ifndef FF_API_XVMC
			#define FF_API_XVMC 0
			#define FF_API_XVMC_is_defined 0
			#else
			#define FF_API_XVMC_is_defined 1
			#endif
		
			#ifndef FF_API_OPT_TYPE_METADATA
			#define FF_API_OPT_TYPE_METADATA 0
			#define FF_API_OPT_TYPE_METADATA_is_defined 0
			#else
			#define FF_API_OPT_TYPE_METADATA_is_defined 1
			#endif
		
			#ifndef FF_API_DLOG
			#define FF_API_DLOG 0
			#define FF_API_DLOG_is_defined 0
			#else
			#define FF_API_DLOG_is_defined 1
			#endif
		
			#ifndef FF_API_HMAC
			#define FF_API_HMAC 0
			#define FF_API_HMAC_is_defined 0
			#else
			#define FF_API_HMAC_is_defined 1
			#endif
		
			#ifndef FF_API_VAAPI
			#define FF_API_VAAPI 0
			#define FF_API_VAAPI_is_defined 0
			#else
			#define FF_API_VAAPI_is_defined 1
			#endif
		#include <libavcodec/avcodec.h>

			#ifndef FF_API_VIMA_DECODER
			#define FF_API_VIMA_DECODER 0
			#define FF_API_VIMA_DECODER_is_defined 0
			#else
			#define FF_API_VIMA_DECODER_is_defined 1
			#endif
		
			#ifndef FF_API_REQUEST_CHANNELS
			#define FF_API_REQUEST_CHANNELS 0
			#define FF_API_REQUEST_CHANNELS_is_defined 0
			#else
			#define FF_API_REQUEST_CHANNELS_is_defined 1
			#endif
		
			#ifndef FF_API_OLD_DECODE_AUDIO
			#define FF_API_OLD_DECODE_AUDIO 0
			#define FF_API_OLD_DECODE_AUDIO_is_defined 0
			#else
			#define FF_API_OLD_DECODE_AUDIO_is_defined 1
			#endif
		
			#ifndef FF_API_OLD_ENCODE_AUDIO
			#define FF_API_OLD_ENCODE_AUDIO 0
			#define FF_API_OLD_ENCODE_AUDIO_is_defined 0
			#else
			#define FF_API_OLD_ENCODE_AUDIO_is_defined 1
			#endif
		
			#ifndef FF_API_OLD_ENCODE_VIDEO
			#define FF_API_OLD_ENCODE_VIDEO 0
			#define FF_API_OLD_ENCODE_VIDEO_is_defined 0
			#else
			#define FF_API_OLD_ENCODE_VIDEO_is_defined 1
			#endif
		
			#ifndef FF_API_CODEC_ID
			#define FF_API_CODEC_ID 0
			#define FF_API_CODEC_ID_is_defined 0
			#else
			#define FF_API_CODEC_ID_is_defined 1
			#endif
		
			#ifndef FF_API_AUDIO_CONVERT
			#define FF_API_AUDIO_CONVERT 0
			#define FF_API_AUDIO_CONVERT_is_defined 0
			#else
			#define FF_API_AUDIO_CONVERT_is_defined 1
			#endif
		
			#ifndef FF_API_AVCODEC_RESAMPLE
			#define FF_API_AVCODEC_RESAMPLE 0
			#define FF_API_AVCODEC_RESAMPLE_is_defined 0
			#else
			#define FF_API_AVCODEC_RESAMPLE_is_defined 1
			#endif
		
			#ifndef FF_API_DEINTERLACE
			#define FF_API_DEINTERLACE 0
			#define FF_API_DEINTERLACE_is_defined 0
			#else
			#define FF_API_DEINTERLACE_is_defined 1
			#endif
		
			#ifndef FF_API_DESTRUCT_PACKET
			#define FF_API_DESTRUCT_PACKET 0
			#define FF_API_DESTRUCT_PACKET_is_defined 0
			#else
			#define FF_API_DESTRUCT_PACKET_is_defined 1
			#endif
		
			#ifndef FF_API_GET_BUFFER
			#define FF_API_GET_BUFFER 0
			#define FF_API_GET_BUFFER_is_defined 0
			#else
			#define FF_API_GET_BUFFER_is_defined 1
			#endif
		
			#ifndef FF_API_MISSING_SAMPLE
			#define FF_API_MISSING_SAMPLE 0
			#define FF_API_MISSING_SAMPLE_is_defined 0
			#else
			#define FF_API_MISSING_SAMPLE_is_defined 1
			#endif
		
			#ifndef FF_API_LOWRES
			#define FF_API_LOWRES 0
			#define FF_API_LOWRES_is_defined 0
			#else
			#define FF_API_LOWRES_is_defined 1
			#endif
		
			#ifndef FF_API_CAP_VDPAU
			#define FF_API_CAP_VDPAU 0
			#define FF_API_CAP_VDPAU_is_defined 0
			#else
			#define FF_API_CAP_VDPAU_is_defined 1
			#endif
		
			#ifndef FF_API_BUFS_VDPAU
			#define FF_API_BUFS_VDPAU 0
			#define FF_API_BUFS_VDPAU_is_defined 0
			#else
			#define FF_API_BUFS_VDPAU_is_defined 1
			#endif
		
			#ifndef FF_API_VOXWARE
			#define FF_API_VOXWARE 0
			#define FF_API_VOXWARE_is_defined 0
			#else
			#define FF_API_VOXWARE_is_defined 1
			#endif
		
			#ifndef FF_API_SET_DIMENSIONS
			#define FF_API_SET_DIMENSIONS 0
			#define FF_API_SET_DIMENSIONS_is_defined 0
			#else
			#define FF_API_SET_DIMENSIONS_is_defined 1
			#endif
		
			#ifndef FF_API_DEBUG_MV
			#define FF_API_DEBUG_MV 0
			#define FF_API_DEBUG_MV_is_defined 0
			#else
			#define FF_API_DEBUG_MV_is_defined 1
			#endif
		
			#ifndef FF_API_AC_VLC
			#define FF_API_AC_VLC 0
			#define FF_API_AC_VLC_is_defined 0
			#else
			#define FF_API_AC_VLC_is_defined 1
			#endif
		
			#ifndef FF_API_OLD_MSMPEG4
			#define FF_API_OLD_MSMPEG4 0
			#define FF_API_OLD_MSMPEG4_is_defined 0
			#else
			#define FF_API_OLD_MSMPEG4_is_defined 1
			#endif
		
			#ifndef FF_API_ASPECT_EXTENDED
			#define FF_API_ASPECT_EXTENDED 0
			#define FF_API_ASPECT_EXTENDED_is_defined 0
			#else
			#define FF_API_ASPECT_EXTENDED_is_defined 1
			#endif
		
			#ifndef FF_API_THREAD_OPAQUE
			#define FF_API_THREAD_OPAQUE 0
			#define FF_API_THREAD_OPAQUE_is_defined 0
			#else
			#define FF_API_THREAD_OPAQUE_is_defined 1
			#endif
		
			#ifndef FF_API_CODEC_PKT
			#define FF_API_CODEC_PKT 0
			#define FF_API_CODEC_PKT_is_defined 0
			#else
			#define FF_API_CODEC_PKT_is_defined 1
			#endif
		
			#ifndef FF_API_ARCH_ALPHA
			#define FF_API_ARCH_ALPHA 0
			#define FF_API_ARCH_ALPHA_is_defined 0
			#else
			#define FF_API_ARCH_ALPHA_is_defined 1
			#endif
		
			#ifndef FF_API_XVMC
			#define FF_API_XVMC 0
			#define FF_API_XVMC_is_defined 0
			#else
			#define FF_API_XVMC_is_defined 1
			#endif
		
			#ifndef FF_API_ERROR_RATE
			#define FF_API_ERROR_RATE 0
			#define FF_API_ERROR_RATE_is_defined 0
			#else
			#define FF_API_ERROR_RATE_is_defined 1
			#endif
		
			#ifndef FF_API_QSCALE_TYPE
			#define FF_API_QSCALE_TYPE 0
			#define FF_API_QSCALE_TYPE_is_defined 0
			#else
			#define FF_API_QSCALE_TYPE_is_defined 1
			#endif
		
			#ifndef FF_API_MB_TYPE
			#define FF_API_MB_TYPE 0
			#define FF_API_MB_TYPE_is_defined 0
			#else
			#define FF_API_MB_TYPE_is_defined 1
			#endif
		
			#ifndef FF_API_MAX_BFRAMES
			#define FF_API_MAX_BFRAMES 0
			#define FF_API_MAX_BFRAMES_is_defined 0
			#else
			#define FF_API_MAX_BFRAMES_is_defined 1
			#endif
		
			#ifndef FF_API_NEG_LINESIZES
			#define FF_API_NEG_LINESIZES 0
			#define FF_API_NEG_LINESIZES_is_defined 0
			#else
			#define FF_API_NEG_LINESIZES_is_defined 1
			#endif
		
			#ifndef FF_API_EMU_EDGE
			#define FF_API_EMU_EDGE 0
			#define FF_API_EMU_EDGE_is_defined 0
			#else
			#define FF_API_EMU_EDGE_is_defined 1
			#endif
		
			#ifndef FF_API_ARCH_SH4
			#define FF_API_ARCH_SH4 0
			#define FF_API_ARCH_SH4_is_defined 0
			#else
			#define FF_API_ARCH_SH4_is_defined 1
			#endif
		
			#ifndef FF_API_ARCH_SPARC
			#define FF_API_ARCH_SPARC 0
			#define FF_API_ARCH_SPARC_is_defined 0
			#else
			#define FF_API_ARCH_SPARC_is_defined 1
			#endif
		
			#ifndef FF_API_UNUSED_MEMBERS
			#define FF_API_UNUSED_MEMBERS 0
			#define FF_API_UNUSED_MEMBERS_is_defined 0
			#else
			#define FF_API_UNUSED_MEMBERS_is_defined 1
			#endif
		
			#ifndef FF_API_IDCT_XVIDMMX
			#define FF_API_IDCT_XVIDMMX 0
			#define FF_API_IDCT_XVIDMMX_is_defined 0
			#else
			#define FF_API_IDCT_XVIDMMX_is_defined 1
			#endif
		
			#ifndef FF_API_INPUT_PRESERVED
			#define FF_API_INPUT_PRESERVED 0
			#define FF_API_INPUT_PRESERVED_is_defined 0
			#else
			#define FF_API_INPUT_PRESERVED_is_defined 1
			#endif
		
			#ifndef FF_API_NORMALIZE_AQP
			#define FF_API_NORMALIZE_AQP 0
			#define FF_API_NORMALIZE_AQP_is_defined 0
			#else
			#define FF_API_NORMALIZE_AQP_is_defined 1
			#endif
		
			#ifndef FF_API_GMC
			#define FF_API_GMC 0
			#define FF_API_GMC_is_defined 0
			#else
			#define FF_API_GMC_is_defined 1
			#endif
		
			#ifndef FF_API_MV0
			#define FF_API_MV0 0
			#define FF_API_MV0_is_defined 0
			#else
			#define FF_API_MV0_is_defined 1
			#endif
		
			#ifndef FF_API_CODEC_NAME
			#define FF_API_CODEC_NAME 0
			#define FF_API_CODEC_NAME_is_defined 0
			#else
			#define FF_API_CODEC_NAME_is_defined 1
			#endif
		
			#ifndef FF_API_AFD
			#define FF_API_AFD 0
			#define FF_API_AFD_is_defined 0
			#else
			#define FF_API_AFD_is_defined 1
			#endif
		
			#ifndef FF_API_VISMV
			#define FF_API_VISMV 0
			#define FF_API_VISMV_is_defined 0
			#else
			#define FF_API_VISMV_is_defined 1
			#endif
		
			#ifndef FF_API_DV_FRAME_PROFILE
			#define FF_API_DV_FRAME_PROFILE 0
			#define FF_API_DV_FRAME_PROFILE_is_defined 0
			#else
			#define FF_API_DV_FRAME_PROFILE_is_defined 1
			#endif
		
			#ifndef FF_API_AUDIOENC_DELAY
			#define FF_API_AUDIOENC_DELAY 0
			#define FF_API_AUDIOENC_DELAY_is_defined 0
			#else
			#define FF_API_AUDIOENC_DELAY_is_defined 1
			#endif
		
			#ifndef FF_API_VAAPI_CONTEXT
			#define FF_API_VAAPI_CONTEXT 0
			#define FF_API_VAAPI_CONTEXT_is_defined 0
			#else
			#define FF_API_VAAPI_CONTEXT_is_defined 1
			#endif
		
			#ifndef FF_API_AVCTX_TIMEBASE
			#define FF_API_AVCTX_TIMEBASE 0
			#define FF_API_AVCTX_TIMEBASE_is_defined 0
			#else
			#define FF_API_AVCTX_TIMEBASE_is_defined 1
			#endif
		
			#ifndef FF_API_MPV_OPT
			#define FF_API_MPV_OPT 0
			#define FF_API_MPV_OPT_is_defined 0
			#else
			#define FF_API_MPV_OPT_is_defined 1
			#endif
		
			#ifndef FF_API_STREAM_CODEC_TAG
			#define FF_API_STREAM_CODEC_TAG 0
			#define FF_API_STREAM_CODEC_TAG_is_defined 0
			#else
			#define FF_API_STREAM_CODEC_TAG_is_defined 1
			#endif
		
			#ifndef FF_API_QUANT_BIAS
			#define FF_API_QUANT_BIAS 0
			#define FF_API_QUANT_BIAS_is_defined 0
			#else
			#define FF_API_QUANT_BIAS_is_defined 1
			#endif
		
			#ifndef FF_API_RC_STRATEGY
			#define FF_API_RC_STRATEGY 0
			#define FF_API_RC_STRATEGY_is_defined 0
			#else
			#define FF_API_RC_STRATEGY_is_defined 1
			#endif
		
			#ifndef FF_API_CODED_FRAME
			#define FF_API_CODED_FRAME 0
			#define FF_API_CODED_FRAME_is_defined 0
			#else
			#define FF_API_CODED_FRAME_is_defined 1
			#endif
		
			#ifndef FF_API_MOTION_EST
			#define FF_API_MOTION_EST 0
			#define FF_API_MOTION_EST_is_defined 0
			#else
			#define FF_API_MOTION_EST_is_defined 1
			#endif
		
			#ifndef FF_API_WITHOUT_PREFIX
			#define FF_API_WITHOUT_PREFIX 0
			#define FF_API_WITHOUT_PREFIX_is_defined 0
			#else
			#define FF_API_WITHOUT_PREFIX_is_defined 1
			#endif
		
			#ifndef FF_API_CONVERGENCE_DURATION
			#define FF_API_CONVERGENCE_DURATION 0
			#define FF_API_CONVERGENCE_DURATION_is_defined 0
			#else
			#define FF_API_CONVERGENCE_DURATION_is_defined 1
			#endif
		
			#ifndef FF_API_PRIVATE_OPT
			#define FF_API_PRIVATE_OPT 0
			#define FF_API_PRIVATE_OPT_is_defined 0
			#else
			#define FF_API_PRIVATE_OPT_is_defined 1
			#endif
		#include <libavformat/avformat.h>

			#ifndef FF_API_LAVF_BITEXACT
			#define FF_API_LAVF_BITEXACT 0
			#define FF_API_LAVF_BITEXACT_is_defined 0
			#else
			#define FF_API_LAVF_BITEXACT_is_defined 1
			#endif
		
			#ifndef FF_API_LAVF_FRAC
			#define FF_API_LAVF_FRAC 0
			#define FF_API_LAVF_FRAC_is_defined 0
			#else
			#define FF_API_LAVF_FRAC_is_defined 1
			#endif
		
			#ifndef FF_API_URL_FEOF
			#define FF_API_URL_FEOF 0
			#define FF_API_URL_FEOF_is_defined 0
			#else
			#define FF_API_URL_FEOF_is_defined 1
			#endif
		
			#ifndef FF_API_PROBESIZE_32
			#define FF_API_PROBESIZE_32 0
			#define FF_API_PROBESIZE_32_is_defined 0
			#else
			#define FF_API_PROBESIZE_32_is_defined 1
			#endif
		#include <libswscale/swscale.h>

			#ifndef FF_API_SWS_CPU_CAPS
			#define FF_API_SWS_CPU_CAPS 0
			#define FF_API_SWS_CPU_CAPS_is_defined 0
			#else
			#define FF_API_SWS_CPU_CAPS_is_defined 1
			#endif
		
			#ifndef FF_API_ARCH_BFIN
			#define FF_API_ARCH_BFIN 0
			#define FF_API_ARCH_BFIN_is_defined 0
			#else
			#define FF_API_ARCH_BFIN_is_defined 1
			#endif
		

		int main()
		{
			printf("[FF_API_OLD_AVOPTIONS]%d%d\n", FF_API_OLD_AVOPTIONS, FF_API_OLD_AVOPTIONS_is_defined);printf("[FF_API_PIX_FMT]%d%d\n", FF_API_PIX_FMT, FF_API_PIX_FMT_is_defined);printf("[FF_API_CONTEXT_SIZE]%d%d\n", FF_API_CONTEXT_SIZE, FF_API_CONTEXT_SIZE_is_defined);printf("[FF_API_PIX_FMT_DESC]%d%d\n", FF_API_PIX_FMT_DESC, FF_API_PIX_FMT_DESC_is_defined);printf("[FF_API_AV_REVERSE]%d%d\n", FF_API_AV_REVERSE, FF_API_AV_REVERSE_is_defined);printf("[FF_API_AUDIOCONVERT]%d%d\n", FF_API_AUDIOCONVERT, FF_API_AUDIOCONVERT_is_defined);printf("[FF_API_CPU_FLAG_MMX2]%d%d\n", FF_API_CPU_FLAG_MMX2, FF_API_CPU_FLAG_MMX2_is_defined);printf("[FF_API_LLS_PRIVATE]%d%d\n", FF_API_LLS_PRIVATE, FF_API_LLS_PRIVATE_is_defined);printf("[FF_API_AVFRAME_LAVC]%d%d\n", FF_API_AVFRAME_LAVC, FF_API_AVFRAME_LAVC_is_defined);printf("[FF_API_VDPAU]%d%d\n", FF_API_VDPAU, FF_API_VDPAU_is_defined);printf("[FF_API_GET_CHANNEL_LAYOUT_COMPAT]%d%d\n", FF_API_GET_CHANNEL_LAYOUT_COMPAT, FF_API_GET_CHANNEL_LAYOUT_COMPAT_is_defined);printf("[FF_API_XVMC]%d%d\n", FF_API_XVMC, FF_API_XVMC_is_defined);printf("[FF_API_OPT_TYPE_METADATA]%d%d\n", FF_API_OPT_TYPE_METADATA, FF_API_OPT_TYPE_METADATA_is_defined);printf("[FF_API_DLOG]%d%d\n", FF_API_DLOG, FF_API_DLOG_is_defined);printf("[FF_API_HMAC]%d%d\n", FF_API_HMAC, FF_API_HMAC_is_defined);printf("[FF_API_VAAPI]%d%d\n", FF_API_VAAPI, FF_API_VAAPI_is_defined);printf("[FF_API_VIMA_DECODER]%d%d\n", FF_API_VIMA_DECODER, FF_API_VIMA_DECODER_is_defined);printf("[FF_API_REQUEST_CHANNELS]%d%d\n", FF_API_REQUEST_CHANNELS, FF_API_REQUEST_CHANNELS_is_defined);printf("[FF_API_OLD_DECODE_AUDIO]%d%d\n", FF_API_OLD_DECODE_AUDIO, FF_API_OLD_DECODE_AUDIO_is_defined);printf("[FF_API_OLD_ENCODE_AUDIO]%d%d\n", FF_API_OLD_ENCODE_AUDIO, FF_API_OLD_ENCODE_AUDIO_is_defined);printf("[FF_API_OLD_ENCODE_VIDEO]%d%d\n", FF_API_OLD_ENCODE_VIDEO, FF_API_OLD_ENCODE_VIDEO_is_defined);printf("[FF_API_CODEC_ID]%d%d\n", FF_API_CODEC_ID, FF_API_CODEC_ID_is_defined);printf("[FF_API_AUDIO_CONVERT]%d%d\n", FF_API_AUDIO_CONVERT, FF_API_AUDIO_CONVERT_is_defined);printf("[FF_API_AVCODEC_RESAMPLE]%d%d\n", FF_API_AVCODEC_RESAMPLE, FF_API_AVCODEC_RESAMPLE_is_defined);printf("[FF_API_DEINTERLACE]%d%d\n", FF_API_DEINTERLACE, FF_API_DEINTERLACE_is_defined);printf("[FF_API_DESTRUCT_PACKET]%d%d\n", FF_API_DESTRUCT_PACKET, FF_API_DESTRUCT_PACKET_is_defined);printf("[FF_API_GET_BUFFER]%d%d\n", FF_API_GET_BUFFER, FF_API_GET_BUFFER_is_defined);printf("[FF_API_MISSING_SAMPLE]%d%d\n", FF_API_MISSING_SAMPLE, FF_API_MISSING_SAMPLE_is_defined);printf("[FF_API_LOWRES]%d%d\n", FF_API_LOWRES, FF_API_LOWRES_is_defined);printf("[FF_API_CAP_VDPAU]%d%d\n", FF_API_CAP_VDPAU, FF_API_CAP_VDPAU_is_defined);printf("[FF_API_BUFS_VDPAU]%d%d\n", FF_API_BUFS_VDPAU, FF_API_BUFS_VDPAU_is_defined);printf("[FF_API_VOXWARE]%d%d\n", FF_API_VOXWARE, FF_API_VOXWARE_is_defined);printf("[FF_API_SET_DIMENSIONS]%d%d\n", FF_API_SET_DIMENSIONS, FF_API_SET_DIMENSIONS_is_defined);printf("[FF_API_DEBUG_MV]%d%d\n", FF_API_DEBUG_MV, FF_API_DEBUG_MV_is_defined);printf("[FF_API_AC_VLC]%d%d\n", FF_API_AC_VLC, FF_API_AC_VLC_is_defined);printf("[FF_API_OLD_MSMPEG4]%d%d\n", FF_API_OLD_MSMPEG4, FF_API_OLD_MSMPEG4_is_defined);printf("[FF_API_ASPECT_EXTENDED]%d%d\n", FF_API_ASPECT_EXTENDED, FF_API_ASPECT_EXTENDED_is_defined);printf("[FF_API_THREAD_OPAQUE]%d%d\n", FF_API_THREAD_OPAQUE, FF_API_THREAD_OPAQUE_is_defined);printf("[FF_API_CODEC_PKT]%d%d\n", FF_API_CODEC_PKT, FF_API_CODEC_PKT_is_defined);printf("[FF_API_ARCH_ALPHA]%d%d\n", FF_API_ARCH_ALPHA, FF_API_ARCH_ALPHA_is_defined);printf("[FF_API_XVMC]%d%d\n", FF_API_XVMC, FF_API_XVMC_is_defined);printf("[FF_API_ERROR_RATE]%d%d\n", FF_API_ERROR_RATE, FF_API_ERROR_RATE_is_defined);printf("[FF_API_QSCALE_TYPE]%d%d\n", FF_API_QSCALE_TYPE, FF_API_QSCALE_TYPE_is_defined);printf("[FF_API_MB_TYPE]%d%d\n", FF_API_MB_TYPE, FF_API_MB_TYPE_is_defined);printf("[FF_API_MAX_BFRAMES]%d%d\n", FF_API_MAX_BFRAMES, FF_API_MAX_BFRAMES_is_defined);printf("[FF_API_NEG_LINESIZES]%d%d\n", FF_API_NEG_LINESIZES, FF_API_NEG_LINESIZES_is_defined);printf("[FF_API_EMU_EDGE]%d%d\n", FF_API_EMU_EDGE, FF_API_EMU_EDGE_is_defined);printf("[FF_API_ARCH_SH4]%d%d\n", FF_API_ARCH_SH4, FF_API_ARCH_SH4_is_defined);printf("[FF_API_ARCH_SPARC]%d%d\n", FF_API_ARCH_SPARC, FF_API_ARCH_SPARC_is_defined);printf("[FF_API_UNUSED_MEMBERS]%d%d\n", FF_API_UNUSED_MEMBERS, FF_API_UNUSED_MEMBERS_is_defined);printf("[FF_API_IDCT_XVIDMMX]%d%d\n", FF_API_IDCT_XVIDMMX, FF_API_IDCT_XVIDMMX_is_defined);printf("[FF_API_INPUT_PRESERVED]%d%d\n", FF_API_INPUT_PRESERVED, FF_API_INPUT_PRESERVED_is_defined);printf("[FF_API_NORMALIZE_AQP]%d%d\n", FF_API_NORMALIZE_AQP, FF_API_NORMALIZE_AQP_is_defined);printf("[FF_API_GMC]%d%d\n", FF_API_GMC, FF_API_GMC_is_defined);printf("[FF_API_MV0]%d%d\n", FF_API_MV0, FF_API_MV0_is_defined);printf("[FF_API_CODEC_NAME]%d%d\n", FF_API_CODEC_NAME, FF_API_CODEC_NAME_is_defined);printf("[FF_API_AFD]%d%d\n", FF_API_AFD, FF_API_AFD_is_defined);printf("[FF_API_VISMV]%d%d\n", FF_API_VISMV, FF_API_VISMV_is_defined);printf("[FF_API_DV_FRAME_PROFILE]%d%d\n", FF_API_DV_FRAME_PROFILE, FF_API_DV_FRAME_PROFILE_is_defined);printf("[FF_API_AUDIOENC_DELAY]%d%d\n", FF_API_AUDIOENC_DELAY, FF_API_AUDIOENC_DELAY_is_defined);printf("[FF_API_VAAPI_CONTEXT]%d%d\n", FF_API_VAAPI_CONTEXT, FF_API_VAAPI_CONTEXT_is_defined);printf("[FF_API_AVCTX_TIMEBASE]%d%d\n", FF_API_AVCTX_TIMEBASE, FF_API_AVCTX_TIMEBASE_is_defined);printf("[FF_API_MPV_OPT]%d%d\n", FF_API_MPV_OPT, FF_API_MPV_OPT_is_defined);printf("[FF_API_STREAM_CODEC_TAG]%d%d\n", FF_API_STREAM_CODEC_TAG, FF_API_STREAM_CODEC_TAG_is_defined);printf("[FF_API_QUANT_BIAS]%d%d\n", FF_API_QUANT_BIAS, FF_API_QUANT_BIAS_is_defined);printf("[FF_API_RC_STRATEGY]%d%d\n", FF_API_RC_STRATEGY, FF_API_RC_STRATEGY_is_defined);printf("[FF_API_CODED_FRAME]%d%d\n", FF_API_CODED_FRAME, FF_API_CODED_FRAME_is_defined);printf("[FF_API_MOTION_EST]%d%d\n", FF_API_MOTION_EST, FF_API_MOTION_EST_is_defined);printf("[FF_API_WITHOUT_PREFIX]%d%d\n", FF_API_WITHOUT_PREFIX, FF_API_WITHOUT_PREFIX_is_defined);printf("[FF_API_CONVERGENCE_DURATION]%d%d\n", FF_API_CONVERGENCE_DURATION, FF_API_CONVERGENCE_DURATION_is_defined);printf("[FF_API_PRIVATE_OPT]%d%d\n", FF_API_PRIVATE_OPT, FF_API_PRIVATE_OPT_is_defined);printf("[FF_API_LAVF_BITEXACT]%d%d\n", FF_API_LAVF_BITEXACT, FF_API_LAVF_BITEXACT_is_defined);printf("[FF_API_LAVF_FRAC]%d%d\n", FF_API_LAVF_FRAC, FF_API_LAVF_FRAC_is_defined);printf("[FF_API_URL_FEOF]%d%d\n", FF_API_URL_FEOF, FF_API_URL_FEOF_is_defined);printf("[FF_API_PROBESIZE_32]%d%d\n", FF_API_PROBESIZE_32, FF_API_PROBESIZE_32_is_defined);printf("[FF_API_SWS_CPU_CAPS]%d%d\n", FF_API_SWS_CPU_CAPS, FF_API_SWS_CPU_CAPS_is_defined);printf("[FF_API_ARCH_BFIN]%d%d\n", FF_API_ARCH_BFIN, FF_API_ARCH_BFIN_is_defined);printf("[avcodec_version_greater_than_56_0]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 0));printf("[avcodec_version_greater_than_56_1]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 1));printf("[avcodec_version_greater_than_56_2]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 2));printf("[avcodec_version_greater_than_56_3]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 3));printf("[avcodec_version_greater_than_56_4]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 4));printf("[avcodec_version_greater_than_56_5]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 5));printf("[avcodec_version_greater_than_56_6]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 6));printf("[avcodec_version_greater_than_56_7]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 7));printf("[avcodec_version_greater_than_56_8]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 8));printf("[avcodec_version_greater_than_56_9]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 9));printf("[avcodec_version_greater_than_56_10]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 10));printf("[avcodec_version_greater_than_56_11]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 11));printf("[avcodec_version_greater_than_56_12]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 12));printf("[avcodec_version_greater_than_56_13]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 13));printf("[avcodec_version_greater_than_56_14]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 14));printf("[avcodec_version_greater_than_56_15]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 15));printf("[avcodec_version_greater_than_56_16]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 16));printf("[avcodec_version_greater_than_56_17]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 17));printf("[avcodec_version_greater_than_56_18]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 18));printf("[avcodec_version_greater_than_56_19]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 19));printf("[avcodec_version_greater_than_56_20]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 20));printf("[avcodec_version_greater_than_56_21]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 21));printf("[avcodec_version_greater_than_56_22]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 22));printf("[avcodec_version_greater_than_56_23]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 23));printf("[avcodec_version_greater_than_56_24]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 24));printf("[avcodec_version_greater_than_56_25]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 25));printf("[avcodec_version_greater_than_56_26]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 26));printf("[avcodec_version_greater_than_56_27]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 27));printf("[avcodec_version_greater_than_56_28]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 28));printf("[avcodec_version_greater_than_56_29]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 29));printf("[avcodec_version_greater_than_56_30]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 30));printf("[avcodec_version_greater_than_56_31]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 31));printf("[avcodec_version_greater_than_56_32]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 32));printf("[avcodec_version_greater_than_56_33]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 33));printf("[avcodec_version_greater_than_56_34]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 34));printf("[avcodec_version_greater_than_56_35]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 35));printf("[avcodec_version_greater_than_56_36]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 36));printf("[avcodec_version_greater_than_56_37]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 37));printf("[avcodec_version_greater_than_56_38]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 38));printf("[avcodec_version_greater_than_56_39]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 39));printf("[avcodec_version_greater_than_56_40]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 40));printf("[avcodec_version_greater_than_56_41]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 41));printf("[avcodec_version_greater_than_56_42]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 42));printf("[avcodec_version_greater_than_56_43]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 43));printf("[avcodec_version_greater_than_56_44]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 44));printf("[avcodec_version_greater_than_56_45]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 45));printf("[avcodec_version_greater_than_56_46]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 46));printf("[avcodec_version_greater_than_56_47]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 47));printf("[avcodec_version_greater_than_56_48]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 48));printf("[avcodec_version_greater_than_56_49]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 49));printf("[avcodec_version_greater_than_56_50]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 50));printf("[avcodec_version_greater_than_56_51]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 51));printf("[avcodec_version_greater_than_56_52]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 52));printf("[avcodec_version_greater_than_56_53]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 53));printf("[avcodec_version_greater_than_56_54]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 54));printf("[avcodec_version_greater_than_56_55]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 55));printf("[avcodec_version_greater_than_56_56]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 56));printf("[avcodec_version_greater_than_56_57]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 57));printf("[avcodec_version_greater_than_56_58]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 58));printf("[avcodec_version_greater_than_56_59]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 59));printf("[avcodec_version_greater_than_56_60]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 60));printf("[avcodec_version_greater_than_56_61]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 61));printf("[avcodec_version_greater_than_56_62]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 62));printf("[avcodec_version_greater_than_56_63]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 63));printf("[avcodec_version_greater_than_56_64]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 64));printf("[avcodec_version_greater_than_56_65]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 65));printf("[avcodec_version_greater_than_56_66]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 66));printf("[avcodec_version_greater_than_56_67]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 67));printf("[avcodec_version_greater_than_56_68]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 68));printf("[avcodec_version_greater_than_56_69]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 69));printf("[avcodec_version_greater_than_56_70]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 70));printf("[avcodec_version_greater_than_56_71]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 71));printf("[avcodec_version_greater_than_56_72]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 72));printf("[avcodec_version_greater_than_56_73]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 73));printf("[avcodec_version_greater_than_56_74]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 74));printf("[avcodec_version_greater_than_56_75]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 75));printf("[avcodec_version_greater_than_56_76]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 76));printf("[avcodec_version_greater_than_56_77]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 77));printf("[avcodec_version_greater_than_56_78]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 78));printf("[avcodec_version_greater_than_56_79]%d\n", LIBAVCODEC_VERSION_MAJOR > 56 || (LIBAVCODEC_VERSION_MAJOR == 56 && LIBAVCODEC_VERSION_MINOR > 79));printf("[avcodec_version_greater_than_57_0]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 0));printf("[avcodec_version_greater_than_57_1]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 1));printf("[avcodec_version_greater_than_57_2]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 2));printf("[avcodec_version_greater_than_57_3]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 3));printf("[avcodec_version_greater_than_57_4]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 4));printf("[avcodec_version_greater_than_57_5]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 5));printf("[avcodec_version_greater_than_57_6]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 6));printf("[avcodec_version_greater_than_57_7]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 7));printf("[avcodec_version_greater_than_57_8]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 8));printf("[avcodec_version_greater_than_57_9]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 9));printf("[avcodec_version_greater_than_57_10]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 10));printf("[avcodec_version_greater_than_57_11]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 11));printf("[avcodec_version_greater_than_57_12]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 12));printf("[avcodec_version_greater_than_57_13]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 13));printf("[avcodec_version_greater_than_57_14]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 14));printf("[avcodec_version_greater_than_57_15]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 15));printf("[avcodec_version_greater_than_57_16]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 16));printf("[avcodec_version_greater_than_57_17]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 17));printf("[avcodec_version_greater_than_57_18]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 18));printf("[avcodec_version_greater_than_57_19]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 19));printf("[avcodec_version_greater_than_57_20]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 20));printf("[avcodec_version_greater_than_57_21]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 21));printf("[avcodec_version_greater_than_57_22]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 22));printf("[avcodec_version_greater_than_57_23]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 23));printf("[avcodec_version_greater_than_57_24]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 24));printf("[avcodec_version_greater_than_57_25]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 25));printf("[avcodec_version_greater_than_57_26]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 26));printf("[avcodec_version_greater_than_57_27]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 27));printf("[avcodec_version_greater_than_57_28]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 28));printf("[avcodec_version_greater_than_57_29]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 29));printf("[avcodec_version_greater_than_57_30]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 30));printf("[avcodec_version_greater_than_57_31]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 31));printf("[avcodec_version_greater_than_57_32]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 32));printf("[avcodec_version_greater_than_57_33]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 33));printf("[avcodec_version_greater_than_57_34]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 34));printf("[avcodec_version_greater_than_57_35]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 35));printf("[avcodec_version_greater_than_57_36]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 36));printf("[avcodec_version_greater_than_57_37]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 37));printf("[avcodec_version_greater_than_57_38]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 38));printf("[avcodec_version_greater_than_57_39]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 39));printf("[avcodec_version_greater_than_57_40]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 40));printf("[avcodec_version_greater_than_57_41]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 41));printf("[avcodec_version_greater_than_57_42]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 42));printf("[avcodec_version_greater_than_57_43]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 43));printf("[avcodec_version_greater_than_57_44]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 44));printf("[avcodec_version_greater_than_57_45]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 45));printf("[avcodec_version_greater_than_57_46]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 46));printf("[avcodec_version_greater_than_57_47]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 47));printf("[avcodec_version_greater_than_57_48]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 48));printf("[avcodec_version_greater_than_57_49]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 49));printf("[avcodec_version_greater_than_57_50]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 50));printf("[avcodec_version_greater_than_57_51]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 51));printf("[avcodec_version_greater_than_57_52]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 52));printf("[avcodec_version_greater_than_57_53]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 53));printf("[avcodec_version_greater_than_57_54]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 54));printf("[avcodec_version_greater_than_57_55]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 55));printf("[avcodec_version_greater_than_57_56]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 56));printf("[avcodec_version_greater_than_57_57]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 57));printf("[avcodec_version_greater_than_57_58]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 58));printf("[avcodec_version_greater_than_57_59]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 59));printf("[avcodec_version_greater_than_57_60]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 60));printf("[avcodec_version_greater_than_57_61]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 61));printf("[avcodec_version_greater_than_57_62]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 62));printf("[avcodec_version_greater_than_57_63]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 63));printf("[avcodec_version_greater_than_57_64]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 64));printf("[avcodec_version_greater_than_57_65]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 65));printf("[avcodec_version_greater_than_57_66]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 66));printf("[avcodec_version_greater_than_57_67]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 67));printf("[avcodec_version_greater_than_57_68]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 68));printf("[avcodec_version_greater_than_57_69]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 69));printf("[avcodec_version_greater_than_57_70]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 70));printf("[avcodec_version_greater_than_57_71]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 71));printf("[avcodec_version_greater_than_57_72]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 72));printf("[avcodec_version_greater_than_57_73]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 73));printf("[avcodec_version_greater_than_57_74]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 74));printf("[avcodec_version_greater_than_57_75]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 75));printf("[avcodec_version_greater_than_57_76]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 76));printf("[avcodec_version_greater_than_57_77]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 77));printf("[avcodec_version_greater_than_57_78]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 78));printf("[avcodec_version_greater_than_57_79]%d\n", LIBAVCODEC_VERSION_MAJOR > 57 || (LIBAVCODEC_VERSION_MAJOR == 57 && LIBAVCODEC_VERSION_MINOR > 79));printf("[avcodec_version_greater_than_58_0]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 0));printf("[avcodec_version_greater_than_58_1]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 1));printf("[avcodec_version_greater_than_58_2]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 2));printf("[avcodec_version_greater_than_58_3]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 3));printf("[avcodec_version_greater_than_58_4]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 4));printf("[avcodec_version_greater_than_58_5]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 5));printf("[avcodec_version_greater_than_58_6]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 6));printf("[avcodec_version_greater_than_58_7]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 7));printf("[avcodec_version_greater_than_58_8]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 8));printf("[avcodec_version_greater_than_58_9]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 9));printf("[avcodec_version_greater_than_58_10]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 10));printf("[avcodec_version_greater_than_58_11]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 11));printf("[avcodec_version_greater_than_58_12]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 12));printf("[avcodec_version_greater_than_58_13]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 13));printf("[avcodec_version_greater_than_58_14]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 14));printf("[avcodec_version_greater_than_58_15]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 15));printf("[avcodec_version_greater_than_58_16]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 16));printf("[avcodec_version_greater_than_58_17]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 17));printf("[avcodec_version_greater_than_58_18]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 18));printf("[avcodec_version_greater_than_58_19]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 19));printf("[avcodec_version_greater_than_58_20]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 20));printf("[avcodec_version_greater_than_58_21]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 21));printf("[avcodec_version_greater_than_58_22]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 22));printf("[avcodec_version_greater_than_58_23]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 23));printf("[avcodec_version_greater_than_58_24]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 24));printf("[avcodec_version_greater_than_58_25]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 25));printf("[avcodec_version_greater_than_58_26]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 26));printf("[avcodec_version_greater_than_58_27]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 27));printf("[avcodec_version_greater_than_58_28]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 28));printf("[avcodec_version_greater_than_58_29]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 29));printf("[avcodec_version_greater_than_58_30]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 30));printf("[avcodec_version_greater_than_58_31]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 31));printf("[avcodec_version_greater_than_58_32]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 32));printf("[avcodec_version_greater_than_58_33]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 33));printf("[avcodec_version_greater_than_58_34]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 34));printf("[avcodec_version_greater_than_58_35]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 35));printf("[avcodec_version_greater_than_58_36]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 36));printf("[avcodec_version_greater_than_58_37]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 37));printf("[avcodec_version_greater_than_58_38]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 38));printf("[avcodec_version_greater_than_58_39]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 39));printf("[avcodec_version_greater_than_58_40]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 40));printf("[avcodec_version_greater_than_58_41]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 41));printf("[avcodec_version_greater_than_58_42]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 42));printf("[avcodec_version_greater_than_58_43]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 43));printf("[avcodec_version_greater_than_58_44]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 44));printf("[avcodec_version_greater_than_58_45]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 45));printf("[avcodec_version_greater_than_58_46]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 46));printf("[avcodec_version_greater_than_58_47]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 47));printf("[avcodec_version_greater_than_58_48]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 48));printf("[avcodec_version_greater_than_58_49]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 49));printf("[avcodec_version_greater_than_58_50]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 50));printf("[avcodec_version_greater_than_58_51]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 51));printf("[avcodec_version_greater_than_58_52]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 52));printf("[avcodec_version_greater_than_58_53]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 53));printf("[avcodec_version_greater_than_58_54]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 54));printf("[avcodec_version_greater_than_58_55]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 55));printf("[avcodec_version_greater_than_58_56]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 56));printf("[avcodec_version_greater_than_58_57]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 57));printf("[avcodec_version_greater_than_58_58]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 58));printf("[avcodec_version_greater_than_58_59]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 59));printf("[avcodec_version_greater_than_58_60]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 60));printf("[avcodec_version_greater_than_58_61]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 61));printf("[avcodec_version_greater_than_58_62]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 62));printf("[avcodec_version_greater_than_58_63]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 63));printf("[avcodec_version_greater_than_58_64]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 64));printf("[avcodec_version_greater_than_58_65]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 65));printf("[avcodec_version_greater_than_58_66]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 66));printf("[avcodec_version_greater_than_58_67]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 67));printf("[avcodec_version_greater_than_58_68]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 68));printf("[avcodec_version_greater_than_58_69]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 69));printf("[avcodec_version_greater_than_58_70]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 70));printf("[avcodec_version_greater_than_58_71]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 71));printf("[avcodec_version_greater_than_58_72]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 72));printf("[avcodec_version_greater_than_58_73]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 73));printf("[avcodec_version_greater_than_58_74]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 74));printf("[avcodec_version_greater_than_58_75]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 75));printf("[avcodec_version_greater_than_58_76]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 76));printf("[avcodec_version_greater_than_58_77]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 77));printf("[avcodec_version_greater_than_58_78]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 78));printf("[avcodec_version_greater_than_58_79]%d\n", LIBAVCODEC_VERSION_MAJOR > 58 || (LIBAVCODEC_VERSION_MAJOR == 58 && LIBAVCODEC_VERSION_MINOR > 79));printf("[avcodec_version_greater_than_59_0]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 0));printf("[avcodec_version_greater_than_59_1]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 1));printf("[avcodec_version_greater_than_59_2]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 2));printf("[avcodec_version_greater_than_59_3]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 3));printf("[avcodec_version_greater_than_59_4]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 4));printf("[avcodec_version_greater_than_59_5]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 5));printf("[avcodec_version_greater_than_59_6]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 6));printf("[avcodec_version_greater_than_59_7]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 7));printf("[avcodec_version_greater_than_59_8]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 8));printf("[avcodec_version_greater_than_59_9]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 9));printf("[avcodec_version_greater_than_59_10]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 10));printf("[avcodec_version_greater_than_59_11]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 11));printf("[avcodec_version_greater_than_59_12]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 12));printf("[avcodec_version_greater_than_59_13]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 13));printf("[avcodec_version_greater_than_59_14]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 14));printf("[avcodec_version_greater_than_59_15]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 15));printf("[avcodec_version_greater_than_59_16]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 16));printf("[avcodec_version_greater_than_59_17]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 17));printf("[avcodec_version_greater_than_59_18]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 18));printf("[avcodec_version_greater_than_59_19]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 19));printf("[avcodec_version_greater_than_59_20]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 20));printf("[avcodec_version_greater_than_59_21]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 21));printf("[avcodec_version_greater_than_59_22]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 22));printf("[avcodec_version_greater_than_59_23]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 23));printf("[avcodec_version_greater_than_59_24]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 24));printf("[avcodec_version_greater_than_59_25]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 25));printf("[avcodec_version_greater_than_59_26]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 26));printf("[avcodec_version_greater_than_59_27]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 27));printf("[avcodec_version_greater_than_59_28]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 28));printf("[avcodec_version_greater_than_59_29]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 29));printf("[avcodec_version_greater_than_59_30]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 30));printf("[avcodec_version_greater_than_59_31]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 31));printf("[avcodec_version_greater_than_59_32]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 32));printf("[avcodec_version_greater_than_59_33]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 33));printf("[avcodec_version_greater_than_59_34]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 34));printf("[avcodec_version_greater_than_59_35]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 35));printf("[avcodec_version_greater_than_59_36]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 36));printf("[avcodec_version_greater_than_59_37]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 37));printf("[avcodec_version_greater_than_59_38]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 38));printf("[avcodec_version_greater_than_59_39]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 39));printf("[avcodec_version_greater_than_59_40]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 40));printf("[avcodec_version_greater_than_59_41]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 41));printf("[avcodec_version_greater_than_59_42]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 42));printf("[avcodec_version_greater_than_59_43]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 43));printf("[avcodec_version_greater_than_59_44]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 44));printf("[avcodec_version_greater_than_59_45]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 45));printf("[avcodec_version_greater_than_59_46]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 46));printf("[avcodec_version_greater_than_59_47]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 47));printf("[avcodec_version_greater_than_59_48]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 48));printf("[avcodec_version_greater_than_59_49]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 49));printf("[avcodec_version_greater_than_59_50]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 50));printf("[avcodec_version_greater_than_59_51]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 51));printf("[avcodec_version_greater_than_59_52]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 52));printf("[avcodec_version_greater_than_59_53]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 53));printf("[avcodec_version_greater_than_59_54]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 54));printf("[avcodec_version_greater_than_59_55]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 55));printf("[avcodec_version_greater_than_59_56]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 56));printf("[avcodec_version_greater_than_59_57]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 57));printf("[avcodec_version_greater_than_59_58]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 58));printf("[avcodec_version_greater_than_59_59]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 59));printf("[avcodec_version_greater_than_59_60]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 60));printf("[avcodec_version_greater_than_59_61]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 61));printf("[avcodec_version_greater_than_59_62]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 62));printf("[avcodec_version_greater_than_59_63]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 63));printf("[avcodec_version_greater_than_59_64]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 64));printf("[avcodec_version_greater_than_59_65]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 65));printf("[avcodec_version_greater_than_59_66]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 66));printf("[avcodec_version_greater_than_59_67]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 67));printf("[avcodec_version_greater_than_59_68]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 68));printf("[avcodec_version_greater_than_59_69]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 69));printf("[avcodec_version_greater_than_59_70]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 70));printf("[avcodec_version_greater_than_59_71]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 71));printf("[avcodec_version_greater_than_59_72]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 72));printf("[avcodec_version_greater_than_59_73]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 73));printf("[avcodec_version_greater_than_59_74]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 74));printf("[avcodec_version_greater_than_59_75]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 75));printf("[avcodec_version_greater_than_59_76]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 76));printf("[avcodec_version_greater_than_59_77]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 77));printf("[avcodec_version_greater_than_59_78]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 78));printf("[avcodec_version_greater_than_59_79]%d\n", LIBAVCODEC_VERSION_MAJOR > 59 || (LIBAVCODEC_VERSION_MAJOR == 59 && LIBAVCODEC_VERSION_MINOR > 79));
			return 0;
		}
	