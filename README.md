# Secret-language

This is a simple C++ program that implements a Caesar cipher for encoding and decoding text.

## Class Structure

The `SecretLang` class has two public methods: `encode` and `decode`. Both methods use a private method called `cipher`.

- The `encode` method is used to encrypt the message.
- The `decode` method is used to decrypt the message.

## How to Use

1. Compile the program using a C++ compiler.
2. Run the program. You will be prompted to choose between encoding and decoding.
3. Type 'encode' to encrypt or 'decode' to decrypt.
4. Input your message.
5. Provide a shift value (0-25). The same shift value must be used for encryption and decryption.

Please note that this is a very basic form of encryption and is not suitable for securing sensitive information. It's mostly used for educational purposes and puzzles. For real-world applications, more sophisticated encryption algorithms are necessary.

## Example

Here's an example of how to use the program:

```bash
$ ./SecretLang
Type 'encode' to encrypt, 'decode' to decrypt: encode
Type your message: Hello, World!
Type your number: 3
Encrypted: 'Khoor, Zruog!'
