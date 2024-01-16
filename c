 start compiling 
 stop compiling 
 start compiling 
Executing: ca65 -l main.lst --cpu 6502 -g -mm near -t none main.s 
Executing: ld65 -Ln main.lbl -m main.map -o main.out -C main.cfg main.o 
 stop compiling 
0300 A946    F  lda #46
0302 85F4       sta F4
0304 A905       lda #05
0306 85F5       sta F5
0308 A900       lda #00
030A 85F6       sta F6
030C A906       lda #06
030E 85F7       sta F7
0310 A9E0       lda #E0
0312 85E0       sta E0
0314 A900       lda #00
0316 85E1       sta E1
0318 A000       ldy #00
031A 84E3       sty E3
031C 84E5       sty E5
031E A90D       lda #0D
0320 201D04     jsr 041D
0323 A0DC       ldy #DC
0325 84E2       sty E2
0327 A0FF       ldy #FF
0329 84E4       sty E4
032B C8         iny 
032C 84F2       sty F2
032E 8C0002     sty 0200
0331 84F0       sty F0
0333 A933    3  lda #33
0335 85E6       sta E6
0337 A903       lda #03
0339 85E7       sta E7
033B 20AB03     jsr 03AB
033E A9F4       lda #F4
0340 85EC       sta EC
0342 A900       lda #00
0344 85ED       sta ED
0346 A5EC       lda EC
0348 85E8       sta E8
034A 05ED       ora ED
034C F0D0       beq 031E
034E A5ED       lda ED
0350 85E9       sta E9
0352 A208       ldx #08
0354 A00C       ldy #0C
0356 20ED03     jsr 03ED
0359 A000       ldy #00
035B B1E8       lda (E8),Y
035D 48     H   pha 
035E B1EA       lda (EA),Y
0360 C920       cmp #20
0362 F00A       beq 036E
0364 38     8   sec 
0365 F1E8       sbc (E8),Y
0367 297F   )   and #7F
0369 D0DB       bne 0346
036B C8         iny 
036C D0F0       bne 035E
036E 98         tya 
036F 20D003     jsr 03D0
0372 68     h   pla 
0373 3007   0   bmi 037C
0375 A5F0       lda F0
0377 D003       bne 037C
0379 4C5C05 L\  jmp 055C
037C 4CEF04 L   jmp 04EF
037F B90002     lda 0200,Y
0382 F004       beq 0388
0384 C8         iny 
0385 4920   I   eor #20
0387 60     `   rts 
0388 68     h   pla 
0389 68     h   pla 
038A A001       ldy #01
038C 201A04     jsr 041A
038F C90A       cmp #0A
0391 F008       beq 039B
0393 297F   )   and #7F
0395 990002     sta 0200,Y
0398 C8         iny 
0399 D0F1       bne 038C
039B A920       lda #20
039D 8D0002     sta 0200
03A0 990002     sta 0200,Y
03A3 A900       lda #00
03A5 C8         iny 
03A6 990002     sta 0200,Y
03A9 85F2       sta F2
03AB A4F2       ldy F2
03AD 207F03     jsr 037F
03B0 F0FB       beq 03AD
03B2 88         dey 
03B3 84F3       sty F3
03B5 207F03     jsr 037F
03B8 D0FB       bne 03B5
03BA 88         dey 
03BB 84F2       sty F2
03BD 38     8   sec 
03BE 98         tya 
03BF E5F3       sbc F3
03C1 A4F3       ldy F3
03C3 88         dey 
03C4 990002     sta 0200,Y
03C7 84EA       sty EA
03C9 A902       lda #02
03CB 85EB       sta EB
03CD 60     `   rts 
03CE A901       lda #01
03D0 18         clc 
03D1 75E0   u   adc E0,X
03D3 95E0       sta E0,X
03D5 9002       bcc 03D9
03D7 F6E1       inc E1,X
03D9 60     `   rts 
03DA B5E0       lda E0,X
03DC D002       bne 03E0
03DE D6E1       dec E1,X
03E0 D6E0       dec E0,X
03E2 60     `   rts 
03E3 20E903     jsr 03E9
03E6 A00A       ldy #0A
03E8 2CA008 ,   bit 08A0
03EB A202       ldx #02
03ED A1E0       lda (E0,X)
03EF 99E000     sta 00E0,Y
03F2 20CE03     jsr 03CE
03F5 A1E0       lda (E0,X)
03F7 99E100     sta 00E1,Y
03FA 4CCE03 L   jmp 03CE
03FD A204       ldx #04
03FF 4CED03 L   jmp 03ED
0402 A204       ldx #04
0404 2CA202 ,   bit 02A2
0407 A008       ldy #08
0409 20DA03     jsr 03DA
040C B9E100     lda 00E1,Y
040F 81E0       sta (E0,X)
0411 20DA03     jsr 03DA
0414 B9E000     lda 00E0,Y
0417 81E0       sta (E0,X)
0419 60     `   rts 
041A AD00E0     lda E000
041D 8D00E0     sta E000
0420 60     `   rts 
0421 00         brk 
0422 00         brk 
0423 03         ill 
0424 6B     k   ill 
0425 6579   ey  adc 79
0427 201A04     jsr 041A
042A 85E8       sta E8
042C 4C8804 L   jmp 0488
042F 2104   !   and (04,X)
0431 0465    e  tsb 65
0433 6D6974 mit adc 7469
0436 20E903     jsr 03E9
0439 A5E8       lda E8
043B 201D04     jsr 041D
043E 4CFF04 L   jmp 04FF
0441 2F     /   ill 
0442 0401       tsb 01
0444 2120   !   and (20,X)
0446 E3         ill 
0447 03         ill 
0448 A20A       ldx #0A
044A A00A       ldy #0A
044C 200904     jsr 0409
044F 4CFF04 L   jmp 04FF
0452 4104   A   eor (04,X)
0454 0140    @  ora (40,X)
0456 20E603     jsr 03E6
0459 A20A       ldx #0A
045B A008       ldy #08
045D 20ED03     jsr 03ED
0460 4C8804 L   jmp 0488
0463 5204   R   eor (04)
0465 03         ill 
0466 7270   rp  adc (70)
0468 40     @   rti 
0469 A204       ldx #04
046B 4C8004 L   jmp 0480
046E 63     c   ill 
046F 0403       tsb 03
0471 73     s   ill 
0472 7040   p@  bvs 04B4
0474 A202       ldx #02
0476 4C8004 L   jmp 0480
0479 6E0402 n   ror 0204
047C 73     s   ill 
047D 40     @   rti 
047E A210       ldx #10
0480 B5E0       lda E0,X
0482 85E8       sta E8
0484 B5E1       lda E1,X
0486 85E9       sta E9
0488 200504     jsr 0405
048B 4CFF04 L   jmp 04FF
048E 790401 y   adc 0104,Y
0491 2B     +   ill 
0492 20E303     jsr 03E3
0495 18         clc 
0496 A5EA       lda EA
0498 65E8   e   adc E8
049A 85E8       sta E8
049C A5EB       lda EB
049E 65E9   e   adc E9
04A0 4C8604 L   jmp 0486
04A3 8E0404     stx 0404
04A6 6E616E nan ror 6E61
04A9 6420   d   stz 20
04AB E3         ill 
04AC 03         ill 
04AD A5EA       lda EA
04AF 25E8   %   and E8
04B1 49FF   I   eor #FF
04B3 85E8       sta E8
04B5 A5EB       lda EB
04B7 25E9   %   and E9
04B9 49FF   I   eor #FF
04BB 4C8604 L   jmp 0486
04BE A3         ill 
04BF 0402       tsb 02
04C1 303D   0=  bmi 0500
04C3 20E903     jsr 03E9
04C6 05E8       ora E8
04C8 F006       beq 04D0
04CA A900       lda #00
04CC 85E8       sta E8
04CE F0B6       beq 0486
04D0 A9FF       lda #FF
04D2 D0F8       bne 04CC
04D4 BE0402     ldx 0204,Y
04D7 322F   2/  and (2F)
04D9 20E903     jsr 03E9
04DC 46E9   F   lsr E9
04DE 66E8   f   ror E8
04E0 4C8804 L   jmp 0488
04E3 D4         ill 
04E4 0404       tsb 04
04E6 6578   ex  adc 78
04E8 6974   it  adc #74
04EA A008       ldy #08
04EC 20FD03     jsr 03FD
04EF A006       ldy #06
04F1 A208       ldx #08
04F3 20ED03     jsr 03ED
04F6 A5E7       lda E7
04F8 C906       cmp #06
04FA 900E       bcc 050A
04FC 200204     jsr 0402
04FF A5E6       lda E6
0501 85E8       sta E8
0503 A5E7       lda E7
0505 85E9       sta E9
0507 4CEF04 L   jmp 04EF
050A A006       ldy #06
050C 20FD03     jsr 03FD
050F 6CE800 l   jmp (00E8)
0512 E3         ill 
0513 0401       tsb 01
0515 3A     :   dea 
0516 A5F6       lda F6
0518 48     H   pha 
0519 A5F7       lda F7
051B 48     H   pha 
051C A5F4       lda F4
051E 85F6       sta F6
0520 A5F5       lda F5
0522 85F7       sta F7
0524 A216       ldx #16
0526 A902       lda #02
0528 20D003     jsr 03D0
052B 20AB03     jsr 03AB
052E A000       ldy #00
0530 B1EA       lda (EA),Y
0532 C920       cmp #20
0534 F005       beq 053B
0536 91F6       sta (F6),Y
0538 C8         iny 
0539 D0F5       bne 0530
053B 98         tya 
053C 20D003     jsr 03D0
053F A901       lda #01
0541 85F0       sta F0
0543 4CFF04 L   jmp 04FF
0546 1205       ora (05)
0548 813B    ;  sta (3B,X)
054A 68     h   pla 
054B 85F5       sta F5
054D 68     h   pla 
054E 85F4       sta F4
0550 A900       lda #00
0552 85F0       sta F0
0554 A9EA       lda #EA
0556 85E8       sta E8
0558 A904       lda #04
055A 85E9       sta E9
055C A216       ldx #16
055E 200704     jsr 0407
0561 4CFF04 L   jmp 04FF
0564 00         brk 
0565 00         brk 
0566 00         brk 
0567 00         brk 
0568 00         brk 
0569 00         brk 
056A 00         brk 
056B 00         brk 
056C 00         brk 
056D 00         brk 
056E 00         brk 
056F 00         brk 
0570 00         brk 
0571 00         brk 
0572 00         brk 
0573 00         brk 
0574 00         brk 
0575 00         brk 
0576 00         brk 
0577 00         brk 
0578 00         brk 
0579 00         brk 
057A 00         brk 
057B 00         brk 
057C 00         brk 
057D 00         brk 
057E 00         brk 
057F 00         brk 
0580 00         brk 
0581 00         brk 
0582 00         brk 
0583 00         brk 
0584 00         brk 
0585 00         brk 
0586 00         brk 
0587 00         brk 
0588 00         brk 
0589 00         brk 
058A 00         brk 
058B 00         brk 
058C 00         brk 
058D 00         brk 
058E 00         brk 
058F 00         brk 
0590 00         brk 
0591 00         brk 
0592 00         brk 
0593 00         brk 
0594 00         brk 
0595 00         brk 
0596 00         brk 
0597 00         brk 
0598 00         brk 
0599 00         brk 
059A 00         brk 
059B 00         brk 
059C 00         brk 
059D 00         brk 
059E 00         brk 
059F 00         brk 
05A0 00         brk 
05A1 00         brk 
05A2 00         brk 
05A3 00         brk 
05A4 00         brk 
05A5 00         brk 
05A6 00         brk 
05A7 00         brk 
05A8 00         brk 
05A9 00         brk 
05AA 00         brk 
05AB 00         brk 
05AC 00         brk 
05AD 00         brk 
05AE 00         brk 
05AF 00         brk 
05B0 00         brk 
05B1 00         brk 
05B2 00         brk 
05B3 00         brk 
05B4 00         brk 
05B5 00         brk 
05B6 00         brk 
05B7 00         brk 
05B8 00         brk 
05B9 00         brk 
05BA 00         brk 
05BB 00         brk 
05BC 00         brk 
05BD 00         brk 
05BE 00         brk 
05BF 00         brk 
05C0 00         brk 
05C1 00         brk 
05C2 00         brk 
05C3 00         brk 
05C4 00         brk 
05C5 00         brk 
05C6 00         brk 
05C7 00         brk 
05C8 00         brk 
05C9 00         brk 
05CA 00         brk 
05CB 00         brk 
05CC 00         brk 
05CD 00         brk 
05CE 00         brk 
05CF 00         brk 
05D0 00         brk 
05D1 00         brk 
05D2 00         brk 
05D3 00         brk 
05D4 00         brk 
05D5 00         brk 
05D6 00         brk 
05D7 00         brk 
05D8 00         brk 
05D9 00         brk 
05DA 00         brk 
05DB 00         brk 
05DC 00         brk 
05DD 00         brk 
05DE 00         brk 
05DF 00         brk 
05E0 00         brk 
05E1 00         brk 
05E2 00         brk 
05E3 00         brk 
05E4 00         brk 
05E5 00         brk 
05E6 00         brk 
05E7 00         brk 
05E8 00         brk 
05E9 00         brk 
05EA 00         brk 
05EB 00         brk 
05EC 00         brk 
05ED 00         brk 
05EE 00         brk 
05EF 00         brk 
05F0 00         brk 
05F1 00         brk 
05F2 00         brk 
05F3 00         brk 
05F4 00         brk 
05F5 00         brk 
05F6 00         brk 
05F7 00         brk 
05F8 00         brk 
05F9 00         brk 
05FA 00         brk 
05FB 00         brk 
05FC 00         brk 
05FD 00         brk 
05FE 00         brk 
05FF 00         brk 
: dup sp@ @ ;
