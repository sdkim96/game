	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 26, 0	sdk_version 26, 0
	.globl	_render_display                 ; -- Begin function render_display
	.p2align	2
_render_display:                        ; @render_display
	.cfi_startproc
; %bb.0:
	stp	x28, x27, [sp, #-32]!           ; 16-byte Folded Spill
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	mov	w9, #19280                      ; =0x4b50
Lloh0:
	adrp	x16, ___chkstk_darwin@GOTPAGE
Lloh1:
	ldr	x16, [x16, ___chkstk_darwin@GOTPAGEOFF]
	blr	x16
	sub	sp, sp, #4, lsl #12             ; =16384
	sub	sp, sp, #2896
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w27, -24
	.cfi_offset w28, -32
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	stur	x8, [x29, #-24]
	str	x0, [sp, #64]
	str	x1, [sp, #56]
	str	w2, [sp, #52]
	ldr	x8, [sp, #56]
	cbnz	x8, LBB0_2
	b	LBB0_1
LBB0_1:
	b	LBB0_15
LBB0_2:
	str	wzr, [sp, #44]
	b	LBB0_3
LBB0_3:                                 ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB0_5 Depth 2
	ldr	w8, [sp, #44]
	subs	w8, w8, #20
	b.ge	LBB0_10
	b	LBB0_4
LBB0_4:                                 ;   in Loop: Header=BB0_3 Depth=1
	str	wzr, [sp, #48]
	b	LBB0_5
LBB0_5:                                 ;   Parent Loop BB0_3 Depth=1
                                        ; =>  This Inner Loop Header: Depth=2
	ldr	w8, [sp, #48]
	subs	w8, w8, #80
	b.ge	LBB0_8
	b	LBB0_6
LBB0_6:                                 ;   in Loop: Header=BB0_5 Depth=2
	ldr	w8, [sp, #48]
	str	w8, [sp, #28]
	ldr	w8, [sp, #44]
	str	w8, [sp, #32]
	ldr	x8, [sp, #64]
	ldr	x8, [x8]
	ldrsw	x9, [sp, #44]
	mov	x10, #320                       ; =0x140
	mul	x9, x9, x10
	add	x8, x8, x9
	ldrsw	x9, [sp, #48]
	ldr	w0, [x8, x9, lsl #2]
	bl	_view_tile
	strb	w0, [sp, #36]
	ldrsw	x8, [sp, #44]
	mov	x9, #960                        ; =0x3c0
	mul	x9, x8, x9
	add	x8, sp, #72
	add	x8, x8, x9
	ldrsw	x9, [sp, #48]
	mov	x10, #12                        ; =0xc
	mul	x9, x9, x10
	add	x9, x8, x9
	ldur	x8, [sp, #28]
	str	x8, [x9]
	ldr	w8, [sp, #36]
	str	w8, [x9, #8]
	b	LBB0_7
LBB0_7:                                 ;   in Loop: Header=BB0_5 Depth=2
	ldr	w8, [sp, #48]
	add	w8, w8, #1
	str	w8, [sp, #48]
	b	LBB0_5
LBB0_8:                                 ;   in Loop: Header=BB0_3 Depth=1
	b	LBB0_9
LBB0_9:                                 ;   in Loop: Header=BB0_3 Depth=1
	ldr	w8, [sp, #44]
	add	w8, w8, #1
	str	w8, [sp, #44]
	b	LBB0_3
LBB0_10:
	str	wzr, [sp, #40]
	b	LBB0_11
LBB0_11:                                ; =>This Inner Loop Header: Depth=1
	ldr	w8, [sp, #40]
	ldr	w9, [sp, #52]
	subs	w8, w8, w9
	b.ge	LBB0_14
	b	LBB0_12
LBB0_12:                                ;   in Loop: Header=BB0_11 Depth=1
	ldr	x8, [sp, #56]
	ldrsw	x9, [sp, #40]
	mov	x10, #12                        ; =0xc
	str	x10, [sp, #8]                   ; 8-byte Folded Spill
	mul	x9, x9, x10
	add	x8, x8, x9
	ldr	w8, [x8, #4]
	str	w8, [sp, #16]
	ldr	x8, [sp, #56]
	ldrsw	x9, [sp, #40]
	mul	x9, x9, x10
	add	x8, x8, x9
	ldr	w8, [x8, #8]
	str	w8, [sp, #20]
	ldr	x8, [sp, #56]
	ldrsw	x9, [sp, #40]
	mul	x9, x9, x10
	ldr	w0, [x8, x9]
	bl	_view_entity
	ldr	x10, [sp, #8]                   ; 8-byte Folded Reload
	strb	w0, [sp, #24]
	ldr	x8, [sp, #56]
	ldrsw	x9, [sp, #40]
	mul	x9, x9, x10
	add	x8, x8, x9
	ldrsw	x8, [x8, #8]
	mov	x9, #960                        ; =0x3c0
	mul	x9, x8, x9
	add	x8, sp, #72
	add	x8, x8, x9
	ldr	x9, [sp, #56]
	ldrsw	x11, [sp, #40]
	mul	x11, x11, x10
	add	x9, x9, x11
	ldrsw	x9, [x9, #4]
	mul	x9, x9, x10
	add	x9, x8, x9
	ldr	x8, [sp, #16]
	str	x8, [x9]
	ldr	w8, [sp, #24]
	str	w8, [x9, #8]
	b	LBB0_13
LBB0_13:                                ;   in Loop: Header=BB0_11 Depth=1
	ldr	w8, [sp, #40]
	add	w8, w8, #1
	str	w8, [sp, #40]
	b	LBB0_11
LBB0_14:
	add	x0, sp, #72
	mov	w1, #20                         ; =0x14
	mov	w2, #80                         ; =0x50
	bl	_display_to_console
	b	LBB0_15
LBB0_15:
	ldur	x9, [x29, #-24]
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	subs	x8, x8, x9
	b.eq	LBB0_17
	b	LBB0_16
LBB0_16:
	bl	___stack_chk_fail
LBB0_17:
	add	sp, sp, #4, lsl #12             ; =16384
	add	sp, sp, #2896
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	ldp	x28, x27, [sp], #32             ; 16-byte Folded Reload
	ret
	.loh AdrpLdrGot	Lloh0, Lloh1
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
