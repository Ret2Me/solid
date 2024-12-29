#include <iostream>
#include <string>

// Klasa User odpowiedzialna tylko za dane użytkownika
class User {
private:
    std::string name;
    std::string surname;
    std::string email;

public:

	// skrocony zapis konstruktora klasy wykorzystujacy liste inicjalizacyjna
    User(const std::string& name, const std::string& surname, const std::string& email) : name(name), surname(surname), email(email) {}

    std::string getName() const { return this->name; }
    std::string getSurname() const { return this->surname; }
    std::string getEmail() const { return this->email; }
};

// Klasa UserSaver odpowiedzialna tylko za zapis użytkownika
class UserSaver {
public:
    void saveUser(const User& user) {
        std::cout << "Zapisano: " << user.getName() << " " << user.getSurname() << " (" << user.getEmail() << ")" << std::endl;
    }
};

int main() {
    User user("Filip", "Poplewski", "filip.poplewski@student.put.poznan.pl");
    UserSaver saver;
    saver.saveUser(user);

    return 0;
}

