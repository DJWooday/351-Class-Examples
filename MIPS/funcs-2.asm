.text
.globl main

main:
li $s0 22
move $a0 $s0
jal tripPlus1
move $s0 $v0

li $a0 13
jal tripPlus1
move $s1 $v0

li $a0 51
jal tripPlus1
move $s2 $v0

#call avg
move $a0 $s0
move $a1 $s1
move $a2 $s2
jal avg
move $s3 $v0



# Print result
li $v0 1
move $a0 $s3
syscall

li $v0 10
syscall

tripPlus1:
move $t0 $a0
mul $t0 $t0 3
addi $t0 $t0 1
move $v0 $t0
jr $ra


avg:
add $sp $sp -16
sw $s0 0($sp)
sw $s1 4($sp)
sw $s2 8($sp)
sw $ra 12($sp)

move $s0 $a0
move $s1 $a1
move $s2 $a2

add $t3 $s0 $s1
add $t3 $t3 $s2
li $t9 3
div $t3 $t9
mflo $v0



lw $s0 0($sp)
lw $s1 4($sp)
lw $s2 8($sp)
lw $ra 12($sp)
addi $sp $sp 16
jr $ra