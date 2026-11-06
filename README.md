# C Exercises

A collection of small C programming exercises. Each program is a single, self-contained `.c` file that can be compiled and run on its own.

## Programs

### `piggy-bank.c` — Piggy Bank

A menu-driven piggy bank. Each choice adds a coin to the running total, and the program keeps prompting for options until you choose `0`.

| Option | Action                        |
|--------|-------------------------------|
| `1`    | Adds R$ 0.50                  |
| `2`    | Adds R$ 1.00                  |
| `3`    | Adds R$ 2.00                  |
| `0`    | Exits and shows the total     |

Any other input prints "Invalid option" and displays the menu again.

**Concepts:** `do...while` loop, `if / else if`, accumulators, reading input with `scanf`.

### `water-consumption.c` — Water Consumption

Asks for the water consumption (in m³) of 5 households. For each one, it reports whether consumption is **within average** (≤ 20 m³) or **above average** (> 20 m³). At the end, it shows the overall average across all 5 households.

**Concepts:** `for` loop, conditionals, sum and average calculation.

### `store-rating.c` — Store Rating

Asks for the rating (0 to 10) given by each of 10 customers and then shows the **average rating**. If the average is **below 7**, it displays a warning; otherwise, it reports that the average is good (7 or higher).

**Concepts:** `for` loop, `float` variables, sum and average calculation, `if / else`.

### `step-counter.c` — Step Counter

Simulates a step-tracking app with a daily goal of **10,000 steps**. Every hour, the program asks how many steps you took and keeps adding them up until the goal is reached. At the end, it shows the total number of steps and how many hours it took.

**Concepts:** `while` loop, counters, accumulators, reading input with `scanf`.

## Build and Run

You need a C compiler such as [GCC](https://gcc.gnu.org/) (on Windows, you can use [MinGW-w64](https://www.mingw-w64.org/) or MSYS2).

```bash
# Piggy bank
gcc piggy-bank.c -o piggy-bank
./piggy-bank

# Water consumption
gcc water-consumption.c -o water-consumption
./water-consumption

# Store rating
gcc store-rating.c -o store-rating
./store-rating

# Step counter
gcc step-counter.c -o step-counter
./step-counter
```

On Windows, run the programs as `piggy-bank.exe`, `water-consumption.exe`, `store-rating.exe`, and `step-counter.exe`.

## Example

```
--- Piggy Bank ---
1 - Add R$ 0.50
2 - Add R$ 1.00
3 - Add R$ 2.00
0 - Exit
Choose an option: 2
...
Choose an option: 0

Total saved: R$ 1.00
```

> Program output uses ASCII characters only, so it displays correctly in any terminal (including Windows `cmd`).

## Author

**Marllon Lorran** — [LinkedIn](https://www.linkedin.com/in/eumarllonlrn/) · [GitHub](https://github.com/eumarllonlrn)
