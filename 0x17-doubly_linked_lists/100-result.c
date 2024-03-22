#include <stdio.h>

int is_palindrome(int num) {
  int reversed = 0, remainder, original;
  original = num;

  // Extract digits and reverse the number
  while (num != 0) {
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
  }

  // Check if original and reversed are equal
  return (original == reversed);
}

int main() {
  int largest_palindrome = 0, a, b, product;

  // Iterate through all products of two 3-digit numbers (descending order for efficiency)
  for (a = 999; a >= 100; a--) {
    for (b = a; b >= 100; b--) {
      product = a * b;
      if (is_palindrome(product) && product > largest_palindrome) {
        largest_palindrome = product;
      }
    }
  }

  printf("%d\n", largest_palindrome);  // Print the largest palindrome

  return 0;
}

