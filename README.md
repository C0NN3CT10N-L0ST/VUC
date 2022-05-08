# VUC - Very Useful Cipher *(\*COUGH\** *\*COUGH\*)*
### The purpose of this exercise is to practice the following topics:
* Variables
* Operators
* Conditions
* Loops
* Vectors and/or strings
* Read and write to the console
* Algorithmic thinking

### The program must be implemented using the C programming language and should take into account the following aspects:
* The code must be well indented
* The code must compile without any *errors* or *warnings* using the following ***gcc*** flags:</br>
`-g -Wvla -Wall -Wpedantic -Wextra -Wdeclaration-after-statement`
* Variables names' should be indicative what they'll contain

## Problem Description
---
The goal of this exercise is the implementation of a program that is able to codify and encode and decode text by using
VUC (Very Useful Cipher).

## VUC - Very Useful Cipher
---
The VUC or Very Useful Cipher is a substitution cipher capable of encoding text.</br>The **Encoding Process** is done by
replacing ***just the latin alphabet letters*** present in the text by its corresponding key (in this case another
alphabet letter). Every other character that is not a latin alphabet letter won't be replaced.</br>The **Decoding
Process** is the reverse of the encoding process, which means, the keys (alphabet letters obtained from encoding the
original ones) present in the text are replaced by the corresponding letters.</br>The cipher key is given in the
table below.

## Cipher Key
![alt](https://github.com/C0NN3CT10N-L0ST/VUC/blob/main/vuc-table.png "VUC Table")
</br>
##### Caption: VUC keys for capital letters.

### Note:
This table only represents the keys for capital letters. For lower case letter the key is the same but in lower case.

## Encoding and Decoding Examples using VUC
---
### **Encoding**
#### **Example 1**
```
Original text: LPI is cool
Encoded text: SFX xj occs
```
#### **Example 2**
```
Original text: C is the best language!
Encoded text: O xj mnr urjm spizkpzr!
```

### **Decoding**
#### **Example 1**
```
Encoded text: Fp$$a0ly123#
Decoded text: Pa$$w0rd123#
```
#### **Example 2**
```
Encoded text: Mn1j 1j p d3le o00s m3hm
Decoded text: Th1s 1s a v3ry c00l t3xt
```

## Implementation Details
---
The program must start by printing the following menu:
```
puts(" ____________________________ ");
puts("|  __      ___    _  _____   |");
puts("|  \\ \\    / / |  | |/ ____|  |");
puts("|   \\ \\  / /| |  | | |       |");
puts("|    \\ \\/ / | |  | | |       |");
puts("|     \\  /  | |__| | |____   |");
puts("|      \\/    \\____/ \\_____|  |");
puts("|                            |");
puts("|       Encoder/Decoder      |");
puts("|  ------------------------  |");
puts("|         |Options|          |");
puts("|         e - encode         |");
puts("|         d - decode         |");
puts("|          q - quit          |");
puts("|____________________________|");
```
Right after that it must show the following output:
```
Choose option:
> |
```
* The option will be entered after the '**>**' character.
### Menu Options:
* ***e (encode)*** - This option must read a text (with a maximum length of 300 characters) and encode it using
  VUC.</br>**Output format**:
```
Choose option:
> (option input)
Enter text to encode (MAX length is 300 characters):
(text input)

Encoded text:
------------------------------
(encoded text)
------------------------------
```
* ***d (decode)*** - This option must read a text (with a maximum length of 300 characters) and decode it using VUC.
```
Choose option:
> (option input)
Enter text to decode (MAX length is 300 characters):
(text input)

Decoded text:
------------------------------
(decoded text)
------------------------------
```
* ***q (quit)*** - This option is used to exit the program. The program should run until the user enters this option.
  Before exiting the program must print the message `Exiting program...`.</br>**Example:**
  ```
  Choose option:
  > q
  Exiting program...
  ```

If the user enters an **invalid option**, the program must print the message `Invalid option!`.</br>**Example:**
```
Choose option:
> t
Invalid option!
```

**NOTE:** The program must always show the menu again whenever the user executes any option (including invalid options).

### **Program execution example (video):**
https://user-images.githubusercontent.com/35537988/167313167-d6d4bd35-880e-49fb-b961-f419079ad186.mp4
