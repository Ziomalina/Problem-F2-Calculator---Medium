# Problem F2: Calculator - Medium
## Facebook Virtual Hackathon 2020
15 points

Request Clarification

Download Input & Submit
Now let's hook up multiplication to your old calculator. Only now you notice your calculator has no parenthesis buttons!
How will you input a calculation like (1 + 2) * (3 + 4) * (5 + 6)? You decide to use prefix notation, where the operator is input before its operands. For example, our expression is equivalent to both:
* + 1 2 * + 3 4 + 5 6
and
* * + 1 2 + 3 4 + 5 6
Write a calculator supporting addition, subtraction and multiplication of integers. The integers can be positive or negative (starting with a -). The formula will be given in prefix notation with a space between each term (operator or operand).
Like before, your input is a list of n expressions to evaluate, each on their own line, although this time they are in prefix notation and may include multiplications. Each expression is at most 100 characters long. Output the value each expression evaluates to, in order, separated by spaces.

Constraints

1 ≤ n ≤ 100

Sample Input

* + 1 2 * + 3 4 + 5 6

- * 4 3 - - 9 * 0 8 4

- * 7 + 4 + + 4 5 7 3

* - - 2 8 0 + + 2 0 0

* - + 0 * 2 1 - 3 3 0

- + 2 - * 8 2 8 - 9 7

- * - - 4 - 8 0 1 1 6

* + 2 1 + 0 - + 2 1 1

+ + - 6 2 1 + * 3 7 2

- + + 4 9 + 7 7 + 6 4

Sample Output

231 7 137 -12 0 8 -11 6 28 17
