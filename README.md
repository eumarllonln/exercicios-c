# C Exercises

A collection of small C programming exercises. Each program is a single, self-contained `.c` file that can be compiled and run on its own.

## Programs

### `piggy-bank.c` — Piggy Bank

A menu-driven piggy bank. Each selection adds a coin to the running total, and the program keeps prompting until you choose `0`.

| Option | Action                     |
|--------|----------------------------|
| `1`    | Adds $0.50                 |
| `2`    | Adds $1.00                 |
| `3`    | Adds $2.00                 |
| `0`    | Stops and prints the total |

Any other input prints "Invalid option" and displays the menu again.

**Concepts:** `do...while` loop, `if / else if`, accumulators, reading input with `scanf`.

### `water-usage.c` — Water Usage

Prompts for the water usage (in m³) of 5 households. For each one, it reports whether usage is **within average** (≤ 20 m³) or **above average** (> 20 m³). At the end, it prints the overall average across all 5 households.

**Concepts:** `for` loop, conditionals, sum and average calculation.

### `store-rating.c` — Store Rating

Prompts for the rating (0 to 10) given by each of 10 customers, then prints the **average rating**. If the average is **below 7**, it displays a warning; otherwise, it reports that the average is good (7 or higher).

**Concepts:** `for` loop, `float` variables, sum and average calculation, `if / else`.

### `step-counter.c` — Step Counter

Simulates a step-tracking app with a daily goal of **10,000 steps**. Every hour, the program asks how many steps you took and adds them up until the goal is reached. At the end, it prints the total number of steps and how many hours it took.

**Concepts:** `while` loop, counters, accumulators, reading input with `scanf`.

## Build and Run

You need a C compiler such as [GCC](https://gcc.gnu.org/) (on Windows, you can use [MinGW-w64](https://www.mingw-w64.org/) or MSYS2).

```bash
# Piggy bank
gcc piggy-bank.c -o piggy-bank
./piggy-bank

# Water usage
gcc water-usage.c -o water-usage
./water-usage

# Store rating
gcc store-rating.c -o store-rating
./store-rating

# Step counter
gcc step-counter.c -o step-counter
./step-counter
```

On Windows, run the programs as `piggy-bank.exe`, `water-usage.exe`, `store-rating.exe`, and `step-counter.exe`.

## Example

```
--- Piggy Bank ---
1 - Add $0.50
2 - Add $1.00
3 - Add $2.00
0 - Stop
Choose an option: 2
...
Choose an option: 0

Total saved: $1.00
```

> Program output uses plain ASCII only, so it renders correctly in any terminal (including Windows `cmd`).

## Author

**Marllon Lorran** — [LinkedIn](https://www.linkedin.com/in/eumarllonlrn/) · [GitHub](https://github.com/eumarllonlrn)
