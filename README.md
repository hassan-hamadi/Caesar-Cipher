# Caesar Cipher Project

## Description

This project demonstrates the Caesar Cipher encryption and decryption technique. The Caesar Cipher moves each character in plaintext down the alphabet by a predetermined number of places. This program can be used to encrypt and decrypt a message.

## Features

- Encrypt a message by shifting each letter by a user-specified amount.
- Decrypt a message by shifting each letter back by the same amount.
- Handles both uppercase and lowercase letters while leaving non-alphabetic characters unchanged.

## How to Use

1. **Clone the Repository**

   ```sh
   git clone https://github.com/hassan-hamadi/Caesar-Cipher.git
   ```

2. **Build the Project**

   - Compile the project using GCC to create a `.exe` file:
     ```sh
     gcc main.c -o Caesar_Cipher.exe
     ```

3. **Run the Executable**

   - Run the `.exe` file:
     ```sh
     .\Caesar_Cipher.exe
     ```

4. **Select an Option**

   - Choose to either encrypt or decrypt a message by selecting the corresponding option.
   - Provide the message and shift amount as prompted.

## Example Usage

```
What would you like to do?
 1. Encrypt a message
 2. Decrypt a message
> 1
Enter a message to encrypt: Hello World!
Enter shift amount: 3

Encrypted message: Khoor Zruog!
```

## Files

- **`main.c`**: Contains the main logic for getting user input and calling the appropriate functions.

## Build Requirements

- **GCC** or any compatible C compiler

### Troubleshooting Build Errors

- If GCC is not recognized, install GCC and make sure it is added to your PATH environment variable.

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests to improve the functionality or add features.

## Author

Hassan Hamadi

