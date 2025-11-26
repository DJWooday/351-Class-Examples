.text
.globl main

main:
# v0
li $s0 2
li $s1 3
li $s2 2

#v1
li $s3 1
li $s4 1
li $s5 9

li $t0 4

mul $t1 $s3 $t0
mul $t2 $s4 $t0
mul $t3 $s5 $t0

# v2
add $s6 $t1 $s0
add $s7 $t2 $s1
add $t4 $t3 $s2

li $v0 1
move $a0 $s6
syscall
move $a0 $s7
syscall
move $a0 $t4
syscall

li $v0 10
syscall