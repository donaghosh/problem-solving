// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.

let input = "MCMXCIV";
let output = 0;

function figureOutput(input) {
  switch (input) {
  case "I":
    output = 1;
    break;
  case "V":
    output = 5;
    break;
  case "X":
     output = 10;
    break;
  case "L":
    output = 50;
    break;
  case "C":
    output = 100;
    break;
  case "D":
    output = 500;
    break;
  case "M":
    output = 1000;
    break;
  }
  return output;
}
let firstLetter = input[0];
for (let i = 0; i < input.length; ++i) {

  if (i == 0) {
    figureOutput(input[0])
  } else {
    switch (input[i]) {
    case "I":
      output += 1;
      break;
    case "V":
      if (input[i - 1] == 'I') {
        if (input[i - 2] != null) {
          output = output - figureOutput(input[i - 1]) + (5 - figureOutput(input[i - 1]))
        } else {
          output = 5 - figureOutput(input[i - 1])
        }
      } else {
        output += 5;
      }
      break;
    case "X":
       
      if (input[i - 1] == 'I') {
        if (input[i - 2] != null) {
          output = output - figureOutput(input[i - 1]) + (10 - figureOutput(input[i - 1]))
        } else {
          output = 10 - figureOutput(input[i - 1])
        }
      } else {
        output += 10;
      }
      break;
    case "L":
      if (input[i - 1] == 'X') {
        if (input[i - 2] != null) {
          output = output - figureOutput(input[i - 1]) + (50 - figureOutput(input[i - 1]))
        } else {
          output = 50 - figureOutput(input[i - 1])
        }
      } else {
        output += 50;
      }
      break;
    case "C":
      if (input[i - 1] == 'X') {
        if (input[i - 2] != null) {
          output = output - figureOutput(input[i - 1]) + (100 - figureOutput(input[i - 1]))
        } else {
          output = 100 - figureOutput(input[i - 1])
        }
      } else {
        output += 100;
      }
      break;
    case "D":
      if (input[i - 1] == 'C') {
        if (input[i - 2] != null) {
          output = output - figureOutput(input[i - 1]) + (500 - figureOutput(input[i - 1]))
        } else {
          output = 500 - figureOutput(input[i - 1])
        }
      } else {
        output += 500;
      }
      break;
    case "M":
      if (input[i - 1] == 'C') {
        if (input[i - 2] != null) {
          output = output - figureOutput(input[i - 1]) + (1000 - figureOutput(input[i - 1]))
        } else {
          output = 1000 - figureOutput(input[i - 1])
        }
      } else {
        output += 1000;
      }
      break;
    }
  }
}
console.log(output);
