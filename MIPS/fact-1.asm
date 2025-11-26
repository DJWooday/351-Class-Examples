.text 
.globl main

main:
li $s0 4

move $a0 $s0
jal fact
move $s1 $v0

# print s1
li $v0 1
move $a0 $s1
syscall

li $v0 10
syscall





fact:
addi $sp $sp -8
sw $ra 4($sp)
sw $a0 0($sp)
ble $a0 1 fact_base # if arg is 1, branch to return 1

# Return fact(n-1) * n
addi $a0 $a0 -1 #(n-1)
jal fact # calling fact(n-1)
move $t0 $v0 # retrieving the returned number
mul $v0 $t0 $a0 # performing <returned> * n
j fact_return

fact_base: # returns 1
li $v0 1 # number I'm returning is 1

fact_return:
lw $ra 4($sp) # Getting my return address back
lw $a0 8($sp) # Getting my old argument back
addi $sp $sp 8 # pushing the stack back up
jr $ra # jump back to where I called from
