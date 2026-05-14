# Caesar-cipher

## Overview

This project implements Caesar cipher and brute force in C.

First of all Caesar-cipher reads key and message from users and encrypted message.

Second, bruteForce reads encrypted message from users and input key 0 to 26 then print all decrypted message.

## How it works

### Caesar-cipher

Caesar-cipher encrypted each letter by shifting it according to the key number.

Each alphabet character is mapped with 0 to 25.

```text
a = 0, b= 1, ... z = 25
```

The encryption rule:

```
C = (message + key) mod 26
```

For exaample :

```text
b = 1
key = 3
C = (1 + 3) mod 26 = 4
```

So the encrypted word become 'e'

### bruteForce

bruteForce decrypted message by input key 1 to 25.

Each alphabet character is mapped with 1 to 25.

The decryption rule:

```text
M = (C - key) mod 26
```

For example:

```text
e = 4
key = 3
M = (4 - 3) mod 26 = 1
```

So the decrypted word become 'b'.

## Features

### Caesar-cipher

- Put key
- Put message
- Read key
- Read message
- Encrypted message
- Print encreypted message

### bruteForce

- Put encrypted message
- Copy message 
- Put key 1 to 25
- Print decrypted message

## Build and Run

### Caesar-Cipehr

Compile the program wit 'gcc':

```bash
gcc Caesar-Cipher.c -o Caesar-Cipher
```

Run the program:

```bash
./Caesar-Cipher
```

### bruteForce

Compile the program with 'gcc':

```bash
gcc bruteForce.c -o bruteForce
```

Run the program:

```bash
./bruteForce
```

## Example

### Caesar-Cipher

k : 3
Input message: Attack tonight!
Dwwdfn wrqljkw!

### bruteForce

Input message : Dwwdfn wrqljkw!
k = 1 : Cvvcem vqpkijv!
k = 2 : Buubdl upojhiu!
k = 3 : Attack tonight!
k = 4 : Zsszbj snmhfgs!
k = 5 : Yrryai rmlgefr!
k = 6 : Xqqxzh qlkfdeq!
k = 7 : Wppwyg pkjecdp!
k = 8 : Voovxf ojidbco!
k = 9 : Unnuwe nihcabn!
k = 10 : Tmmtvd mhgbzam!
k = 11 : Sllsuc lgfayzl!
k = 12 : Rkkrtb kfezxyk!
k = 13 : Qjjqsa jedywxj!
k = 14 : Piiprz idcxvwi!
k = 15 : Ohhoqy hcbwuvh!
k = 16 : Nggnpx gbavtug!
k = 17 : Mffmow fazustf!
k = 18 : Leelnv ezytrse!
k = 19 : Kddkmu dyxsqrd!
k = 20 : Jccjlt cxwrpqc!
k = 21 : Ibbiks bwvqopb!
k = 22 : Haahjr avupnoa!
k = 23 : Gzzgiq zutomnz!
k = 24 : Fyyfhp ytsnlmy!
k = 25 : Exxego xsrmklx!

## project structure

```text
Caesar-Cipher/
├── bruteForce
├── Caesar-Cipher
└── README.md

## what i learned

- About C pointer