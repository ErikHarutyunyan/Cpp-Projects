// Task 16 Number of prime numbers.cpp

/* You need to write a program that will get n (n ≤ 100) natural numbers at the input, then the sequence of integers a0, a1, a2, ... an-1 will b0, b1, b2, ... bn-1. Where bi is the number of prime numbers less than ai. The numbers displayed must be separated by a space. Use array to solve the problem. */

/*
    Examples
    ====== Test #1 =======
    Input
    5 1 2 3 4 5

    Output
    0 0 1 2 2
    ====== Test #2 =======
    Input
    11 2 3 5 7 11 13 17 19 23 29 31

    Output
    0 1 2 3 4 5 6 7 8 9 10
    ====== Test #3 =======
    Input: размер 378 ---
    100 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 211 223 227 229 233 239 241 251 257 263 269 271 277 281 283 293 307 311 313 317 331 337 347 349 353 359 367 373 379 383 389 397 401 409 419 421 431 433 439 443 449 457 461 463 467 479 487 491 499 503 509 521 523 541 547

    Output
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
*/

#include <iostream>

int main()
{
    int a;
    int count = 0;
    int n;
    std::cin >> n;
    int arr[100]{};
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }
    for (int k = 0; k < n; k++)
    {
        if (arr[k] != 2 && arr[k] != 1 && arr[k] != 0)
        {
            for (int i = 2; i < arr[k]; ++i)
            {
                int prime = i;
                bool is_prime = true;
                for (int j = 2; j < prime; ++j)
                {
                    if (prime % j == 0)
                    {
                        is_prime = false;
                        break;
                    }
                }
                if (is_prime)
                {
                    count++;
                }
            }
        }
        std::cout << count << " ";
        count = 0;
    }
}