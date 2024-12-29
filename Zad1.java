// Klasa User odpowiedzialna tylko za dane użytkownika
class User {
    private String name;
    private String surname;
    private String email;

    public User(String name, String surname, String email) {
        this.name = name;
    	this.surname = surname;
		this.email = email;
    }

	public String getSurname() {
		return this.surname;
	}

    public String getName() {
        return this.name;
    }

    public String getEmail() {
        return this.email;
    }
}

// Klasa UserSaver odpowiedzialna tylko za zapis użytkownika
class UserSaver {
    public void saveUser(User user) {
        System.out.println("Zapisano: " + user.getName() + " " + user.getSurname() + " (" + user.getEmail() + ")");
    }
}

public class Zad1{
    public static void main(String[] args) {
        User user = new User("Filip", "Poplewski", "filip.popelewski@student.put.poznan.pl");
        UserSaver saver = new UserSaver();
        saver.saveUser(user);
    }
}

