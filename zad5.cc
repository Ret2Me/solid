#include <iostream>
#include <string>

// Abstrakcja usługi powiadomień
class MessageService {
public:
    virtual void sendMessage(const std::string& message) = 0;
};

// Konkretną implementacja usługi - Email
class EmailService : public MessageService {
public:
    void sendMessage(const std::string& message) override {
        std::cout << "Sending email: " << message << std::endl;
    }
};

// Klasa powiadomień
class Notification {
private:
    MessageService* messageService;

public:
    // Konstruktor zależny od abstrakcji (MessageService)
    Notification(MessageService* service) : messageService(service) {}

    void notify(const std::string& message) {
        messageService->sendMessage(message);
    }
};

int main() {
    // Tworzymy konkretną implementację usługi
    EmailService emailService;
    
    // Tworzymy obiekt powiadomień, który zależy od abstrakcji
    Notification notification(&emailService);
    
    // Testowanie systemu powiadomień
    notification.notify("Witamy Na Politechnice Poznańskiej");

    return 0;
}

