// Abstrakcja usługi powiadamiania
interface MessageService {
    void sendMessage(String message);
}

// Konkretną implementacja usługi - Email
class EmailService implements MessageService {
    @Override
    public void sendMessage(String message) {
        System.out.println("Sending email: " + message);
    }
}

// Klasa powiadomień
class Notification {

    private MessageService messageService;

    // Konstruktor zależny od abstrakcji
    public Notification(MessageService messageService) {
        this.messageService = messageService;
    }

    public void notify(String message) {
        messageService.sendMessage(message);
    }
}

public class Zad5 {
    public static void main(String[] args) {
        // Używamy abstrakcji do tworzenia obiektów powiadomień
        MessageService emailService = new EmailService();
        Notification notification = new Notification(emailService);
        
        // Testowanie systemu powiadomień
        notification.notify("Powiadomienie z Politechniki Poznanskiej");
    }
}

