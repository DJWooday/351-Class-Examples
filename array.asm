.data #We explicitly state what goes in the data segment. These are our globals.
arr: .word 10, 20, 30, 40, 50 # I create an array of words (ints) and give a label to address them later.
# I can now use "arr" to get the address of these numbers in the data segment.     

.text # begin text/code segment
.globl main 

main:

# Access global array
la $t0 arr #Create our pointer to the array, int* ptr = arr;
li $t2 100 #x = 100
sw $t2 16($t0) #ptr[4] = x
lw $t1 16($t0) #y = ptr[4]

# Access stack array
# When using the stack, I must first reserve some space
addi $sp $sp -12 #int arr[] = int[3]
move $t0 $sp #create a new pointer to where the stack is now.
li $t1 14 #int x = 14
li $t2 22 #int y = 22
li $t3 31 #int z = 31
sw $t1 0($t0) #arr[0] = x
sw $t2 4($t0) #arr[1] = y
sw $t3 8($t0) #arr[2] = z

# Now I want to replace the arr[1] with the sum of its neighbors
#arr[1] = arr[0] + arr[1] + arr[2]
lw $s0 0($t0) #x = arr[0]
lw $s1 4($t0)
lw $s2 8($t0)
add $t1 $s0 $s1 #int temp = x + y
add $t1 $t1 $s2 #temp += z
sw $t1 4($t0) #arr[1] = temp

lw $a0 4($t0) #Load from the array directly into the argument register (inefficient, done for demonstration)
li $v0 1
syscall
