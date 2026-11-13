# C Notes: What I Learnt Building the Birth Tarot Card Finder

## 1. Taking a number apart
- `n % 10` gives the last digit.
- `n / 10` drops the last digit (integer division).
- Loop until the **quotient** `n` is 0, not the remainder.

```c
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
```

## 2. Functions
- Write a function once, call it many times. Same job, different input means one function.
- The parameter (`n`) is a placeholder that receives a **copy** of the value passed in.
- `return` hands the answer back. Without it, the result is lost.
- Define a function above `main`, or declare a prototype first.

## 3. Loops
- A loop must change the thing its condition checks, or it never ends.
- Braces `{ }` decide what repeats. Close the loop right after the last repeated line.
- `while (total > 22)` keeps reducing until the value fits.

## 4. Input with scanf
- `scanf` returns how many values it read. Reading three values should return 3.
- Use `==` to compare and `=` to store. Mixing them up is the classic bug.
- A bare `total == 0;` does nothing.

```c
if (scanf("%d %d %d", &d, &m, &y) == 3 && d >= 1 && d <= 31) {
    // good input
}
```

## 5. Validation logic
- Check for bad input with `||` (any one problem is enough).
- Check for good input with `&&` (everything must pass).
- `64 < a < 91` does not work in C. Write `a > 64 && a < 91`.

## 6. Arrays of text
- `const char *cards[22]` is an array of 22 pieces of text.
- Counting starts at 0, so valid indexes are 0 to size minus 1.
- The index picks the item: `cards[total]`.
- Reading past the end of an array is a bug the compiler will not catch.

## 7. Variables
- Every variable needs a type: `int sum = 0;`
- C is case-sensitive: `sum` and `Sum` are different names.
- `n` inside a function and `d` in `main` are separate variables.

## 8. Cleaning bad input
- After a failed `scanf`, leftover characters stay in the input buffer.
- `while (getchar() != '\n');` removes them up to the Enter key.

## Bugs I hit and fixed
| Bug | Fix |
|---|---|
| Missing `return` | Add `return sum;` |
| `=` instead of `==` | Use `==` to compare |
| Array and `printf` inside the loop | Close the loop earlier |
| Index 22 in a 22-slot array | Convert 22 to 0 before indexing |
| `scanf` checked against 1 for 3 values | Check against 3 |
| Mismatched `{ }` | Indent and match every brace |

## Golden rules
1. Trace code by hand before running it.
2. Test with both good and bad input.
3. Build in small stages and run each one.
4. Array size and the valid range must always agree.
