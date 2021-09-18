.text
main:
	addi a0, zero, 20
    addi a1, zero, 30
    jal lcm
    addi t0, t0, 0

lcm:        addi sp sp -12
            sw s1 0(sp)
            sw s0 4(sp)
            sw ra 8(sp)
            rem s1 a0 a1 # s1 = a0 % a1
            beq s1 x0 exit
            mv s0 a0
            mv a0 a1
            mv a1 s1
            jal ra lcm
            mul a0 s0 a0
            div a0 a0 s1
exit:       lw ra 8(sp)
            lw s0 4(sp)
            lw s1 0(sp)
            addi sp sp 12
            jr ra
