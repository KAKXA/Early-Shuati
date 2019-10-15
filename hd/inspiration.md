# INSPIRATION

## 2049.cpp

1. Guess the possible range of the result, choose the right int type.

2. There are no unified standard in different compiler for long long, Maybe `__int64`, maybe` __int64_t`, but use long long.

## 2032.cpp

1. **No unnecessary spaces and lines**, especially in the output of a stream of number split by spaces and changed line by `\n`.

## 2099.cpp

1. use `"%02d"` to output like a number with pre-zeros.

## 2007.cpp

1. Do not posture that the former input is larger input, because the description doesn't say that.

## 2023.cpp

1. Don't use float in any program.
2. Read the format standard carefully like:
   1. If it let you leave a space under one instance.
   2. The number format.(double format)

## 2022.cpp

1. The permutation in the reality is different from that in C++. If you use remainder as a result, you should pay attention to remainder zero, this time you have to output the divider itself, and the quotient have to minus one.

## 2024.cpp

1. You have to use getline() to get a whole line including spaces, and be careful the lines left before maybe be read. An stable way is to use getline in whole program.
2. Use `stringstream` in`sstream` to change any to any;
3. `lsalpha` etc is in `ctype.h`.
4. Be careful to use temporary variables like `i,j`, do not use them repeatedly.

## 2090.cpp

1. Be habitual to write a `\n` after all output.

## 2025.cpp

1. If you use `!cin.eof()` and it throw segmentation fault, just check if `getline()` return true, if not, return 0;