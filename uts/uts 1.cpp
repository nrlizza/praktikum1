  #include <iostream>
  #include <string>

  bool isPasswordValid(const std::string& password) {
     
      if (password.length() != 8) {
          return false;
      }
      for (int i = 0; i < 8; i++) {
          for (int j = i + 1; j < 8; j++) {
              if (password[i] == password[j]) {
                  return false;
              }
          }
      }

      std::string encryptedPassword = password;
      for (int i = 0; i < 8; i++) {
          if (isalpha(password[i])) { 
              encryptedPassword[i] = password[i] + 2;
          } else if (isdigit(password[i])) { 
              encryptedPassword[i] = (password[i] - '0') * 2 + '0';
          }
      }

      std::cout << "Password yang dimasukkan: " << password << std::endl;
      std::cout << "Password yang tersimpan (setelah enkripsi): " << encryptedPassword << std::endl;

      return true;
  }

  int main() {
      std::string password;
      std::cout << "Masukkan password (8 karakter, huruf dan angka tidak berulang): ";
      std::cin >> password;

      if (isPasswordValid(password)) {
          std::cout << "Password valid." << std::endl;
      } else {
          std::cout << "Password tidak valid." << std::endl;
      }

      return 0;
  }