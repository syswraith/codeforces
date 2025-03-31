# codeforces
A repository for all things Codeforces

## 1A: solution2.cpp
| **Change**                         | **Why?**                                          | **Improvement**                             |
|-------------------------------------|-------------------------------------------------|--------------------------------------------|
| `double → long long`               | Avoids floating-point overhead & precision issues | Faster, correct for large numbers        |
| `ceil(n/a) → (n + a - 1) / a`      | Removes floating-point division & function call  | Integer-only, no overhead                 |
| Removed `fixed << setprecision(0)` | Unnecessary since output is always integer       | Eliminates redundant formatting           |
- In integer division, things are always rounded down. So we have to force it to round up.
- If n is perfectly divisible by a, adding a - 1 does nothing.
- If n is not divisible by a, adding a - 1 pushes n up to the next multiple of a, ensuring proper rounding.
