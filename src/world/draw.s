	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 26, 0	sdk_version 26, 0
	.globl	_draw_background                ; -- Begin function draw_background
	.p2align	2
_draw_background:                       ; @draw_background
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
	mov	x10, #80                        ; =0x50
	mul	x9, x9, x10
	add	x8, x8, x9
	ldrsw	x9, [sp]
	add	x9, x8, x9
	mov	w8, #35                         ; =0x23
	strb	w8, [x9]
	b	LBB0_10
LBB0_9:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	x8, [sp, #8]
	ldrsw	x9, [sp, #4]
	mov	x10, #80                        ; =0x50
	mul	x9, x9, x10
	add	x8, x8, x9
	ldrsw	x9, [sp]
	add	x9, x8, x9
	mov	w8, #32                         ; =0x20
	strb	w8, [x9]
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
	.globl	_render                         ; -- Begin function render
	.p2align	2
_render:                                ; @render
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	str	wzr, [sp, #4]
	b	LBB1_1
LBB1_1:                                 ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB1_3 Depth 2
	ldr	w8, [sp, #4]
	subs	w8, w8, #20
	b.ge	LBB1_8
	b	LBB1_2
LBB1_2:                                 ;   in Loop: Header=BB1_1 Depth=1
	str	wzr, [sp]
	b	LBB1_3
LBB1_3:                                 ;   Parent Loop BB1_1 Depth=1
                                        ; =>  This Inner Loop Header: Depth=2
	ldr	w8, [sp]
	subs	w8, w8, #80
	b.ge	LBB1_6
	b	LBB1_4
LBB1_4:                                 ;   in Loop: Header=BB1_3 Depth=2
	ldr	x8, [sp, #8]
	ldrsw	x9, [sp, #4]
	mov	x10, #80                        ; =0x50
	mul	x9, x9, x10
	add	x8, x8, x9
	ldrsw	x9, [sp]
	ldrsb	w0, [x8, x9]
	bl	_putchar
	b	LBB1_5
LBB1_5:                                 ;   in Loop: Header=BB1_3 Depth=2
	ldr	w8, [sp]
	add	w8, w8, #1
	str	w8, [sp]
	b	LBB1_3
LBB1_6:                                 ;   in Loop: Header=BB1_1 Depth=1
	mov	w0, #10                         ; =0xa
	bl	_putchar
	b	LBB1_7
LBB1_7:                                 ;   in Loop: Header=BB1_1 Depth=1
	ldr	w8, [sp, #4]
	add	w8, w8, #1
	str	w8, [sp, #4]
	b	LBB1_1
LBB1_8:
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	stp	x28, x27, [sp, #-32]!           ; 16-byte Folded Spill
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	sub	sp, sp, #1616
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w27, -24
	.cfi_offset w28, -32
	mov	w8, #0                          ; =0x0
	str	w8, [sp, #8]                    ; 4-byte Folded Spill
	stur	wzr, [x29, #-20]
	add	x0, sp, #12
	str	x0, [sp]                        ; 8-byte Folded Spill
	bl	_draw_background
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	bl	_render
	ldr	w0, [sp, #8]                    ; 4-byte Folded Reload
	add	sp, sp, #1616
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	ldp	x28, x27, [sp], #32             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
