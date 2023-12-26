#include <cctype>
#include <iostream>
#include <string>

class SecretLang {
public:
  static std::string encode(const std::string &text, int shift) {
    return cipher(text, shift, true);
  }

  static std::string decode(const std::string &text, int shift) {
    return cipher(text, shift, false);
  }

private:
  static std::string cipher(const std::string &text, int shift, bool encode) {
    std::string result;
    shift = encode ? shift
                   : 26 - (shift % 26); // Adjust shift for encoding or decoding

    for (char c : text) {
      if (std::isalpha(c)) {
        char base = std::isupper(c) ? 'A' : 'a';
        result += (c - base + shift) % 26 + base;
      } else {
        result += c;
      }
    }
    return result;
  }
};

int main() {
  std::string direction, text;
  int shift;

  std::cout << "\nType 'encode' to encrypt, 'decode' to decrypt: ";
  std::cin >> direction;
  std::cin.ignore(); // Ignore newline left in the input stream
  std::cout << "Type your message: ";
  std::getline(std::cin, text);
  std::cout << "Type your number: ";
  std::cin >> shift;
  shift %= 26;

  std::string result;
  if (direction == "encode") {
    result = SecretLang::encode(text, shift);
  } else if (direction == "decode") {
    result = SecretLang::decode(text, shift);
  }
  std::cout << (direction == "encode" ? "Encrypted: '" : "Decrypted: '")
            << result << "'\n";

  return 0;
}
