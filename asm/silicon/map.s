	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 26, 0	sdk_version 26, 0
	.globl	_initialize_map                 ; -- Begin function initialize_map
	.p2align	2
_initialize_map:                        ; @initialize_map
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	str	wzr, [sp, #4]
	b	LBB0_1
LBB0_1:                                 ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB0_3 Depth 2
	ldr	w8, [sp, #4]
	subs	w8, w8, #20
	b.ge	LBB0_14
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	str	wzr, [sp]
	b	LBB0_3
LBB0_3:                                 ;   Parent Loop BB0_1 Depth=1
                                        ; =>  This Inner Loop Header: Depth=2
	ldr	w8, [sp]
	subs	w8, w8, #80
	b.ge	LBB0_12
	b	LBB0_4
LBB0_4:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	w8, [sp]
	cbz	w8, LBB0_8
	b	LBB0_5
LBB0_5:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	w8, [sp]
	subs	w8, w8, #79
	b.eq	LBB0_8
	b	LBB0_6
LBB0_6:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	w8, [sp, #4]
	cbz	w8, LBB0_8
	b	LBB0_7
LBB0_7:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	w8, [sp, #4]
	subs	w8, w8, #19
	b.ne	LBB0_9
	b	LBB0_8
LBB0_8:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	x8, [sp, #8]
	ldrsw	x9, [sp, #4]
	mov	x10, #320                       ; =0x140
	mul	x9, x9, x10
	add	x9, x8, x9
	ldrsw	x10, [sp]
	mov	w8, #0                          ; =0x0
	str	w8, [x9, x10, lsl #2]
	b	LBB0_10
LBB0_9:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	x8, [sp, #8]
	ldrsw	x9, [sp, #4]
	mov	x10, #320                       ; =0x140
	mul	x9, x9, x10
	add	x9, x8, x9
	ldrsw	x10, [sp]
	mov	w8, #1                          ; =0x1
	str	w8, [x9, x10, lsl #2]
	b	LBB0_10
LBB0_10:                                ;   in Loop: Header=BB0_3 Depth=2
	b	LBB0_11
LBB0_11:                                ;   in Loop: Header=BB0_3 Depth=2
	ldr	w8, [sp]
	add	w8, w8, #1
	str	w8, [sp]
	b	LBB0_3
LBB0_12:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_13
LBB0_13:                                ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #4]
	add	w8, w8, #1
	str	w8, [sp, #4]
	b	LBB0_1
LBB0_14:
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_draw_map                       ; -- Begin function draw_map
	.p2align	2
_draw_map:                              ; @draw_map
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	str	x0, [sp, #16]
	str	w1, [sp, #12]
	str	w2, [sp, #8]
	str	w3, [sp, #4]
	ldr	w8, [sp, #8]
	cbz	w8, LBB1_4
	b	LBB1_1
LBB1_1:
	ldr	w8, [sp, #8]
	subs	w8, w8, #79
	b.eq	LBB1_4
	b	LBB1_2
LBB1_2:
	ldr	w8, [sp, #12]
	cbz	w8, LBB1_4
	b	LBB1_3
LBB1_3:
	ldr	w8, [sp, #12]
	subs	w8, w8, #19
	b.ne	LBB1_5
	b	LBB1_4
LBB1_4:
	mov	w8, #-2                         ; =0xfffffffe
	str	w8, [sp, #28]
	b	LBB1_8
LBB1_5:
	ldr	x8, [sp, #16]
	ldrsw	x9, [sp, #12]
	mov	x10, #320                       ; =0x140
	mul	x9, x9, x10
	add	x8, x8, x9
	ldrsw	x9, [sp, #8]
	ldr	w8, [x8, x9, lsl #2]
	subs	w8, w8, #1
	b.ne	LBB1_7
	b	LBB1_6
LBB1_6:
	ldr	w8, [sp, #4]
	ldr	x9, [sp, #16]
	ldrsw	x10, [sp, #12]
	mov	x11, #320                       ; =0x140
	mul	x10, x10, x11
	add	x9, x9, x10
	ldrsw	x10, [sp, #8]
	str	w8, [x9, x10, lsl #2]
	str	wzr, [sp, #28]
	b	LBB1_8
LBB1_7:
	mov	w8, #-1                         ; =0xffffffff
	str	w8, [sp, #28]
	b	LBB1_8
LBB1_8:
	ldr	w0, [sp, #28]
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
