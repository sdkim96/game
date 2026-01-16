	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 26, 0	sdk_version 26, 0
	.globl	_view_tile                      ; -- Begin function view_tile
	.p2align	2
_view_tile:                             ; @view_tile
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #8]
	ldr	w8, [sp, #8]
	str	w8, [sp, #4]                    ; 4-byte Folded Spill
	cbz	w8, LBB0_2
	b	LBB0_1
LBB0_1:
	ldr	w8, [sp, #4]                    ; 4-byte Folded Reload
	subs	w8, w8, #1
	b.eq	LBB0_3
	b	LBB0_4
LBB0_2:
	mov	w8, #35                         ; =0x23
	strb	w8, [sp, #15]
	b	LBB0_4
LBB0_3:
	mov	w8, #32                         ; =0x20
	strb	w8, [sp, #15]
	b	LBB0_4
LBB0_4:
	ldrsb	w0, [sp, #15]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_view_entity                    ; -- Begin function view_entity
	.p2align	2
_view_entity:                           ; @view_entity
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #8]
	ldr	w8, [sp, #8]
	str	w8, [sp, #4]                    ; 4-byte Folded Spill
	cbz	w8, LBB1_3
	b	LBB1_1
LBB1_1:
	ldr	w8, [sp, #4]                    ; 4-byte Folded Reload
	subs	w8, w8, #1
	b.eq	LBB1_4
	b	LBB1_2
LBB1_2:
	ldr	w8, [sp, #4]                    ; 4-byte Folded Reload
	subs	w8, w8, #2
	b.eq	LBB1_5
	b	LBB1_6
LBB1_3:
	mov	w8, #64                         ; =0x40
	strb	w8, [sp, #15]
	b	LBB1_6
LBB1_4:
	mov	w8, #69                         ; =0x45
	strb	w8, [sp, #15]
	b	LBB1_6
LBB1_5:
	mov	w8, #68                         ; =0x44
	strb	w8, [sp, #15]
	b	LBB1_6
LBB1_6:
	ldrsb	w0, [sp, #15]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
