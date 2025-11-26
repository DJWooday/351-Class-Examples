.text
.globl main

main:

li $s0 22
move $a0 $s0
jal triplePlus1
move $s0 $v0

li $s1 45
move $a0 $s1
jal triplePlus1
move $s1 $v0

li $s2 75
move $a0 $s2
jal triplePlus1
move $s2 $v0

# Now do the average func call
move $a0 $s0
move $a1 $s1
move $a2 $s2
jal avgof3
move $s3 $v0

move $a0 $s3
li $v0 1
syscall

li $v0 10
syscall

triplePlus1:
li $t1 3
mul $t0 $a0 $t1
addi $v0 $t0 1
jr $ra

avgof3:
addi $sp $sp -16
sw $ra 0($sp)
sw $s0 4($sp)
sw $s1 8($sp)
sw $s2 12($sp)

move $s0 $a0
move $s1 $a1
move $s2 $a2

add $t0 $s0 $s2
add $t0 $t0 $s1
li $t1 3
div $t0 $t1
mflo $v0 

lw $s2 12($sp)
lw $s1 8($sp)
lw $s0 4($sp)
lw $ra 0($sp)
addi $sp $sp 16
jr $ra
