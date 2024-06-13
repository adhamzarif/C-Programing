Loops are a fundamental concept in C programming that allow you to execute a block of code repeatedly until a certain condition is met. This can be extremely useful for tasks like iterating through data structures (arrays, lists, etc.), automating repetitive processes, and performing calculations multiple times.

C offers three main types of loops:

for loop:

This loop is ideal when you know beforehand how many times you want the code to iterate. It uses a concise syntax to combine initialization, condition checking, and increment/decrement in one line.
C
for (initialization; condition; increment/decrement) {
    // code to be executed
}
Use code with caution.
content_copy
Example: Printing numbers from 1 to 5

C
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
Use code with caution.
content_copy
while loop:

This loop is more flexible and can be used when the number of iterations is unknown beforehand. It continues executing the code block as long as a certain condition remains true.
C
while (condition) {
    // code to be executed
}
Use code with caution.
content_copy
Example: Reading positive integers until the user enters 0

C
int num;
while (num > 0) {
    printf("Enter a positive number (0 to quit): ");
    scanf("%d", &num);
    if (num > 0) {
        printf("You entered: %d\n", num);
    }
}
Use code with caution.
content_copy
do-while loop:

This loop is similar to the while loop but guarantees that the code block is executed at least once, even if the condition initially evaluates to false.
C
do {
    // code to be executed
} while (condition);
Use code with caution.
content_copy
Choosing the right loop depends on your specific needs. If you know the number of iterations in advance, a for loop is generally more efficient. While and do-while loops are better suited for situations where the loop's continuation depends on a dynamic condition.
