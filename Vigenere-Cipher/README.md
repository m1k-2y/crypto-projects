# Vignere-cipher

## Overview

This project implements vignere cipher in C.

This program reads key and message from the users, then encrypted message.

## How it works
Vigenere cipher is polyalphabetic substitution cipher. It encrypts each alphabet character by shifting it according to the corresponding key character.

Each letter is mapped to a number 0 to 25

```text
a = 0, b = 1, ... z = 25
```

The encryption rule : 

```text
C = (message + key) mod 26
```

For exaample :

```text
b = 1
d = 3
C = (1 + 3) mod 26 = 4
```

So the encrypted word become 'E'

## Features

- Put key with lowercase
- Put message with lowercase
- Read key
- Read message
- Repeats key over plain message
- Preserve spaces in the message
- Does not consume key at space
- Prints encrypted alphabetic characters in uppercase
- Output the encrypted message

## Build and Run

Compile the program wit `gcc`:

```bash
gcc vigenere-cipher.c -o vigenre-cipher
```

Run the program:

```bash
./vigenere-cipher
```

## Example
key : dog
message : brutus is betrayer
EFAWIY LG HHHXDMKU

## project structure

```text
Vigenere-cipehr/
├── vigenere-cipher.c
└── README.md
```

## What i learned

- How to handle string in C
- How to preserve space without using key