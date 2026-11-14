# Birth Tarot Card Calculator

Find your birth tarot card by adding up the digits of your birth date.

## How it works

Add up every digit of your birth date. If the total is above 22, add its digits again until it is 22 or less. That number is your card in the Major Arcana (22 is The Fool).

Example: 15/08/2006 → 1+5+0+8+2+0+0+6 = 22 → The Fool

## Status

- **C version:** working. Enter day, month and year, and it prints your card with a short description. All 22 cards are included.
- **Web version:** in progress. The page has a date picker and a button, and I've yet to connect the calculation.

## Built with

- C (command-line version)
- HTML, CSS and JavaScript (web version)

## Run the C version

```
gcc birthTarotCard.c -o birthTarotCard
./birthTarotCard
```

Enter the date as day, month, year with spaces, e.g. `15 8 2006`.

## Files

- `birthTarotCard.c`: C version
- `index.html`: page structure
- `style.css`: colors, fonts and layout
- `script.js`: reads the date (card calculation coming next)
- `Notes.md` `CProgramNotes.md` : my notes while building

## What I learned

- Adding up digits with `% 10` and `/ 10` in a loop
- Repeating the sum until the total is 22 or less
- Treating 22 as 0 so The Fool lands at the start of the card list

## About

A first-year CSE (AI/ML) student project to learn C and web development.