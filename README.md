# codeforces
A repository for all things Codeforces

## 1A: solution2.cpp
| **Change**                         | **Why?**                                          | **Improvement**                             |
|-------------------------------------|-------------------------------------------------|--------------------------------------------|
| `double → long long`               | Avoids floating-point overhead & precision issues | Faster, correct for large numbers        |
| `ceil(n/a) → (n + a - 1) / a`      | Removes floating-point division & function call  | Integer-only, no overhead                 |
| Removed `fixed << setprecision(0)` | Unnecessary since output is always integer       | Eliminates redundant formatting           |

