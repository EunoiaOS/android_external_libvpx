// This file is generated. Do not edit.
#ifndef VP9_RTCD_H_
#define VP9_RTCD_H_

#ifdef RTCD_C
#define RTCD_EXTERN
#else
#define RTCD_EXTERN extern
#endif

/*
 * VP9
 */

#include "vpx/vpx_integer.h"
#include "vp9/common/vp9_common.h"
#include "vp9/common/vp9_enums.h"
#include "vp9/common/vp9_filter.h"

struct macroblockd;

/* Encoder forward decls */
struct macroblock;
struct macroblock_plane;
struct vp9_sad_table;
struct ScanOrder;
struct search_site_config;
struct mv;
union int_mv;
struct yv12_buffer_config;

#ifdef __cplusplus
extern "C" {
#endif

int64_t vp9_block_error_c(const tran_low_t *coeff, const tran_low_t *dqcoeff, intptr_t block_size, int64_t *ssz);
int64_t vp9_block_error_neon(const tran_low_t *coeff, const tran_low_t *dqcoeff, intptr_t block_size, int64_t *ssz);
#define vp9_block_error vp9_block_error_neon

int64_t vp9_block_error_fp_c(const tran_low_t *coeff, const tran_low_t *dqcoeff, int block_size);
int64_t vp9_block_error_fp_neon(const tran_low_t *coeff, const tran_low_t *dqcoeff, int block_size);
#define vp9_block_error_fp vp9_block_error_fp_neon

int vp9_diamond_search_sad_c(const struct macroblock *x, const struct search_site_config *cfg,  struct mv *ref_mv, uint32_t start_mv_sad, struct mv *best_mv, int search_param, int sad_per_bit, int *num00, const struct vp9_sad_table *sad_fn_ptr, const struct mv *center_mv);
int vp9_diamond_search_sad_neon(const struct macroblock *x, const struct search_site_config *cfg,  struct mv *ref_mv, uint32_t start_mv_sad, struct mv *best_mv, int search_param, int sad_per_bit, int *num00, const struct vp9_sad_table *sad_fn_ptr, const struct mv *center_mv);
#define vp9_diamond_search_sad vp9_diamond_search_sad_neon

void vp9_fht16x16_c(const int16_t *input, tran_low_t *output, int stride, int tx_type);
void vp9_fht16x16_neon(const int16_t *input, tran_low_t *output, int stride, int tx_type);
#define vp9_fht16x16 vp9_fht16x16_neon

void vp9_fht4x4_c(const int16_t *input, tran_low_t *output, int stride, int tx_type);
void vp9_fht4x4_neon(const int16_t *input, tran_low_t *output, int stride, int tx_type);
#define vp9_fht4x4 vp9_fht4x4_neon

void vp9_fht8x8_c(const int16_t *input, tran_low_t *output, int stride, int tx_type);
void vp9_fht8x8_neon(const int16_t *input, tran_low_t *output, int stride, int tx_type);
#define vp9_fht8x8 vp9_fht8x8_neon

void vp9_fwht4x4_c(const int16_t *input, tran_low_t *output, int stride);
#define vp9_fwht4x4 vp9_fwht4x4_c

int64_t vp9_highbd_block_error_c(const tran_low_t *coeff, const tran_low_t *dqcoeff, intptr_t block_size, int64_t *ssz, int bd);
int64_t vp9_highbd_block_error_neon(const tran_low_t *coeff, const tran_low_t *dqcoeff, intptr_t block_size, int64_t *ssz, int bd);
#define vp9_highbd_block_error vp9_highbd_block_error_neon

void vp9_highbd_fht16x16_c(const int16_t *input, tran_low_t *output, int stride, int tx_type);
void vp9_highbd_fht16x16_neon(const int16_t *input, tran_low_t *output, int stride, int tx_type);
#define vp9_highbd_fht16x16 vp9_highbd_fht16x16_neon

void vp9_highbd_fht4x4_c(const int16_t *input, tran_low_t *output, int stride, int tx_type);
void vp9_highbd_fht4x4_neon(const int16_t *input, tran_low_t *output, int stride, int tx_type);
#define vp9_highbd_fht4x4 vp9_highbd_fht4x4_neon

void vp9_highbd_fht8x8_c(const int16_t *input, tran_low_t *output, int stride, int tx_type);
void vp9_highbd_fht8x8_neon(const int16_t *input, tran_low_t *output, int stride, int tx_type);
#define vp9_highbd_fht8x8 vp9_highbd_fht8x8_neon

void vp9_highbd_fwht4x4_c(const int16_t *input, tran_low_t *output, int stride);
#define vp9_highbd_fwht4x4 vp9_highbd_fwht4x4_c

void vp9_highbd_iht16x16_256_add_c(const tran_low_t *input, uint16_t *dest, int stride, int tx_type, int bd);
void vp9_highbd_iht16x16_256_add_neon(const tran_low_t *input, uint16_t *dest, int stride, int tx_type, int bd);
#define vp9_highbd_iht16x16_256_add vp9_highbd_iht16x16_256_add_neon

void vp9_highbd_iht4x4_16_add_c(const tran_low_t *input, uint16_t *dest, int stride, int tx_type, int bd);
void vp9_highbd_iht4x4_16_add_neon(const tran_low_t *input, uint16_t *dest, int stride, int tx_type, int bd);
#define vp9_highbd_iht4x4_16_add vp9_highbd_iht4x4_16_add_neon

void vp9_highbd_iht8x8_64_add_c(const tran_low_t *input, uint16_t *dest, int stride, int tx_type, int bd);
void vp9_highbd_iht8x8_64_add_neon(const tran_low_t *input, uint16_t *dest, int stride, int tx_type, int bd);
#define vp9_highbd_iht8x8_64_add vp9_highbd_iht8x8_64_add_neon

void vp9_highbd_quantize_fp_c(const tran_low_t *coeff_ptr, intptr_t n_coeffs, const struct macroblock_plane *const mb_plane, tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr, const int16_t *dequant_ptr, uint16_t *eob_ptr, const struct ScanOrder *const scan_order);
void vp9_highbd_quantize_fp_neon(const tran_low_t *coeff_ptr, intptr_t n_coeffs, const struct macroblock_plane *const mb_plane, tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr, const int16_t *dequant_ptr, uint16_t *eob_ptr, const struct ScanOrder *const scan_order);
#define vp9_highbd_quantize_fp vp9_highbd_quantize_fp_neon

void vp9_highbd_quantize_fp_32x32_c(const tran_low_t *coeff_ptr, intptr_t n_coeffs, const struct macroblock_plane *const mb_plane, tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr, const int16_t *dequant_ptr, uint16_t *eob_ptr, const struct ScanOrder *const scan_order);
void vp9_highbd_quantize_fp_32x32_neon(const tran_low_t *coeff_ptr, intptr_t n_coeffs, const struct macroblock_plane *const mb_plane, tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr, const int16_t *dequant_ptr, uint16_t *eob_ptr, const struct ScanOrder *const scan_order);
#define vp9_highbd_quantize_fp_32x32 vp9_highbd_quantize_fp_32x32_neon

void vp9_highbd_temporal_filter_apply_c(const uint8_t *frame1, unsigned int stride, const uint8_t *frame2, unsigned int block_width, unsigned int block_height, int strength, int *blk_fw, int use_32x32, uint32_t *accumulator, uint16_t *count);
#define vp9_highbd_temporal_filter_apply vp9_highbd_temporal_filter_apply_c

void vp9_iht16x16_256_add_c(const tran_low_t *input, uint8_t *dest, int stride, int tx_type);
void vp9_iht16x16_256_add_neon(const tran_low_t *input, uint8_t *dest, int stride, int tx_type);
#define vp9_iht16x16_256_add vp9_iht16x16_256_add_neon

void vp9_iht4x4_16_add_c(const tran_low_t *input, uint8_t *dest, int stride, int tx_type);
void vp9_iht4x4_16_add_neon(const tran_low_t *input, uint8_t *dest, int stride, int tx_type);
#define vp9_iht4x4_16_add vp9_iht4x4_16_add_neon

void vp9_iht8x8_64_add_c(const tran_low_t *input, uint8_t *dest, int stride, int tx_type);
void vp9_iht8x8_64_add_neon(const tran_low_t *input, uint8_t *dest, int stride, int tx_type);
#define vp9_iht8x8_64_add vp9_iht8x8_64_add_neon

void vp9_quantize_fp_c(const tran_low_t *coeff_ptr, intptr_t n_coeffs, const struct macroblock_plane *const mb_plane, tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr, const int16_t *dequant_ptr, uint16_t *eob_ptr, const struct ScanOrder *const scan_order);
void vp9_quantize_fp_neon(const tran_low_t *coeff_ptr, intptr_t n_coeffs, const struct macroblock_plane *const mb_plane, tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr, const int16_t *dequant_ptr, uint16_t *eob_ptr, const struct ScanOrder *const scan_order);
#define vp9_quantize_fp vp9_quantize_fp_neon

void vp9_quantize_fp_32x32_c(const tran_low_t *coeff_ptr, intptr_t n_coeffs, const struct macroblock_plane *const mb_plane, tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr, const int16_t *dequant_ptr, uint16_t *eob_ptr, const struct ScanOrder *const scan_order);
void vp9_quantize_fp_32x32_neon(const tran_low_t *coeff_ptr, intptr_t n_coeffs, const struct macroblock_plane *const mb_plane, tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr, const int16_t *dequant_ptr, uint16_t *eob_ptr, const struct ScanOrder *const scan_order);
#define vp9_quantize_fp_32x32 vp9_quantize_fp_32x32_neon

void vp9_scale_and_extend_frame_c(const struct yv12_buffer_config *src, struct yv12_buffer_config *dst, INTERP_FILTER filter_type, int phase_scaler);
void vp9_scale_and_extend_frame_neon(const struct yv12_buffer_config *src, struct yv12_buffer_config *dst, INTERP_FILTER filter_type, int phase_scaler);
#define vp9_scale_and_extend_frame vp9_scale_and_extend_frame_neon

void vp9_rtcd(void);

#include "vpx_config.h"

#ifdef RTCD_C
#include "vpx_ports/arm.h"
static void setup_rtcd_internal(void)
{
    int flags = arm_cpu_caps();

    (void)flags;

}
#endif

#ifdef __cplusplus
}  // extern "C"
#endif

#endif
