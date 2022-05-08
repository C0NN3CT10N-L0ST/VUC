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
* The code must compile without any *errors* or *warnings* using the following ***gcc*** flags:
`-g -Wvla -Wall -Wpedantic -Wextra -Wdeclaration-after-statement`
* Variables names' should be indicative what they'll contain

## Problem Description
The goal of this exercise is the implementation of a program that is able to codify and encode and decode text by using
VUC (Very Useful Cipher).

## VUC - Very Useful Cipher
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