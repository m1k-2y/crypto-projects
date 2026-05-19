# Jefferson-Disk

## Overview

This projects implements Jefferson Disk in C.

Jefferson disk was made by Thomas Jefferson and it was used in 1923 to 1942 by Usa Army name "M-94".

It is made of 20 to 30 cylinder and key - array of cylinder - and cylinder's alphabet array is prearranged.

We preset our key number and cylinder's alphabet in Wikipedia.

First of, Jefferson-Disk encrypted message by read preset key and cylinder array.

Second, Jefferson-decrypto reads encrypted message by users and decrypted message by read preset key and cylinder.

## How it works

### Jefferson-Disk

First, key and cylinder's alphabet is already set.

Second, users input message. We follow Wikipedia's rule so message is consists of only uppercase alphabet.

Third, program read message word by word and encrypt each word by reading the key in the order corresponding to the word’s position, and replacing it with the word six positions after it in the cylinder.

Last, print encrypted message.

### Jefferson-decrypto

First, key and cylinder's alphabet is already seted.

Second, users input encrypted message. 

Third, program read message word by word and decrypt each word by reading the key in the order corresponding to the word's position, and replacing it with the word six position before it in cylinder.

Last, print decrypted message.

## Features

### Jefferson-Disk

- Put message
- Read message
- Read key 
- Encrypted message
- Print encreypted message

### Jefferson-decrypto

- Put encrypted message
- Read encrypted message
- Read key
- Decrypted message
- Print decrypted message

## Build and Run

### Jefferson-Disk

Compile program with 'gcc':

```bash
gcc Jefferson-Disk.c -o Jefferson-Disk
```

Run the program:

```bash
./Jefferson-Disk
```

### Jefferson-decrypto

Compile program with 'gcc':

```bash
gcc Jefferson-decrypto.c -o Jefferson-decrypto
```

Run the program:

```bash
./Jefferson-decrypto
```

## Example

### Jefferson-Disk

Input message : RETREATNOW
OMKEGWPDFN

### Jefferson-decrypto

Input message : OMKEGWPDFN
RETREATNOW

## Project structure

```text
Jefferson-Disk
├── Jefferson-decrypto.c
├── Jefferson-Disk.c
└── README.md
```

## What I learned

About two-dimensional array and it's pointer