### **Laboratorium 7: Zasady SOLID w programowaniu obiektowym**

---

#### **Cel laboratorium**  
Zapoznanie studentów z zasadami SOLID, które są podstawą projektowania zorientowanego obiektowo. Studenci nauczą się implementować i rozpoznawać każdą z zasad na przykładach w językach **Java** i **C++**.

Studenci nauczą się:
  - Jak zasady SOLID poprawiają czytelność, modularność i utrzymywalność kodu.
  - W jaki sposób unikać typowych błędów projektowych dzięki stosowaniu tych zasad.
  - Praktycznego zastosowania zasad SOLID w językach Java i C++.

---

### **Przegląd zasad SOLID**

- **S (Single Responsibility Principle)**: Klasa powinna mieć tylko jedną odpowiedzialność.  
- **O (Open/Closed Principle)**: Klasy powinny być otwarte na rozszerzenie, ale zamknięte na modyfikację.  
- **L (Liskov Substitution Principle)**: Obiekty klasy bazowej powinny być wymienialne z obiektami klasy pochodnej.  
- **I (Interface Segregation Principle)**: Klasy nie powinny być zmuszane do implementowania interfejsów, których nie używają.  
- **D (Dependency Inversion Principle)**: Moduły wyższego poziomu nie powinny zależeć od modułów niższego poziomu – obie grupy powinny zależeć od abstrakcji.
### **Zakres tematyczny**
1. **Single Responsibility Principle (SRP)**:
  - Każda klasa powinna mieć tylko jedną odpowiedzialność.
  - W praktyce: rozdzielenie logiki zarządzania danymi i ich zapisywania.
2. **Open/Closed Principle (OCP)**:
  - Klasy powinny być otwarte na rozszerzenia, ale zamknięte na modyfikacje.
  - W praktyce: dodawanie nowych funkcjonalności bez modyfikowania istniejącego kodu.
3. **Liskov Substitution Principle (LSP)**:
  - Obiekty klasy bazowej powinny być wymienialne z obiektami klasy pochodnej.
  - W praktyce: zaprojektowanie hierarchii klas w taki sposób, aby ich zachowanie było zgodne.
4. **Interface Segregation Principle (ISP)**:
  - Klasy nie powinny być zmuszane do implementowania interfejsów, których nie używają.
  - W praktyce: rozdzielanie dużych interfejsów na mniejsze, bardziej precyzyjne.
5. **Dependency Inversion Principle (DIP)**:
  - Moduły wyższego poziomu nie powinny zależeć od modułów niższego poziomu. Obie grupy powinny zależeć od abstrakcji.
  - W praktyce: zależność od interfejsów zamiast implementacji.

---

### **Zadania**

#### **Zadanie 1: Implementacja zasady SRP (Single Responsibility Principle)**  

**Opis:**  
Stwórz system zarządzania użytkownikami, który oddziela logikę zarządzania danymi od logiki ich zapisywania.

##### **Java**
```java
class User {

    public User() {
        
    }

    public String getName() {
        
    }

    public String getEmail() {
       
    }
}

// Klasa odpowiedzialna za zapis użytkownika
class UserSaver {
    public void saveUser() {
        
    }
}

public class Main {
    public static void main(String[] args) {
       
    }
}
```

##### **C++**
```cpp
#include 

// Klasa użytkownika
class User {
private:
   
public:
    User() : {}

};

// Klasa odpowiedzialna za zapis użytkownika
class UserSaver {
public:
    void saveUser() {
        
    }
};

int main() {
   
    return 0;
}
```

---

#### **Zadanie 2: Implementacja zasady OCP (Open/Closed Principle)**  

**Opis:**  
Dodaj nowy sposób obliczania rabatów w sklepie bez modyfikowania istniejącego kodu.

##### **Java**
```java
interface Discount {
   
}

class RegularDiscount implements Discount {
                               // 10% rabatu
    }
}

class SeasonalDiscount implements Discount {
                               // 20% rabatu
    }
}

public class Main {
    public static void main(String[] args) {
       
    }
}
```

##### **C++**
```cpp
#include 

// Interfejs rabatu
class Discount {

};

// Regularny rabat
class RegularDiscount : public Discount {
                            // 10% rabatu
};

// Sezonowy rabat
class SeasonalDiscount : public Discount {
                           // 20% rabatu
};

int main() {
    
    return 0;
}
```

---

#### **Zadanie 3: Zasada LSP (Liskov Substitution Principle)**  

**Opis:**  
Zaimplementuj hierarchię klas dla prostokąta i kwadratu. Upewnij się, że przestrzegasz zasady LSP.

##### **Java**
```java
class Rectangle {
    

    public void setWidth() {
        
    }

    public void setHeight() {
       
    }

    public double getArea() {
        
    }
}

class Square extends Rectangle {
    

    public void setHeight() {
       
    }
}

public class Main {
    public static void main(String[] args) {

                                          // Błędne zachowanie - naruszenie LSP
    }
}
```

---

#### **Zadanie 4: Zasada ISP (Interface Segregation Principle)**  

**Opis:**  
Podziel interfejs dużej maszyny na mniejsze, bardziej precyzyjne interfejsy.

##### **Java**
```java
interface Printer {
    
}

interface Scanner {
    
}

class MultiFunctionMachine implements Printer, Scanner {
    
}
```

---

#### **Zadanie 5: Zasada DIP (Dependency Inversion Principle)**  

**Opis:**  
Zaprojektuj system, który zależy od abstrakcji, a nie od konkretnych klas.

##### **Java**
```java
interface MessageService {
   
}

class EmailService implements MessageService {
    
}

class Notification {
   
    public Notification() {
       
    }

    public void notify() {
       
    }
}

public class Main {
    public static void main(String[] args) {
       
        notification.notify("Witaj w SOLID!");
    }
}
```

---

### **Praktyczne zastosowanie**

- **SRP**: Ułatwia debugowanie i zmniejsza ryzyko wprowadzania błędów przy zmianach w kodzie.
- **OCP**: Pozwala na dodawanie nowych funkcjonalności bez modyfikowania istniejącego kodu, co zwiększa jego stabilność.
- **LSP**: Zapobiega błędom wynikającym z niespójności w zachowaniu klas pochodnych.
- **ISP**: Upraszcza klasy i zmniejsza ich zależności od niepotrzebnych funkcjonalności.
- **DIP**: Zwiększa elastyczność systemu i umożliwia łatwiejsze testowanie oraz wymianę komponentów.

---

### **Wnioski**

Stosowanie zasad SOLID w codziennym programowaniu:
- Zmniejsza złożoność kodu.
- Ułatwia jego utrzymanie i rozwój.
- Pozwala uniknąć typowych problemów projektowych, takich jak zależności między modułami, trudności w testowaniu czy problematyczne rozszerzanie kodu.

---

### **Podsumowanie**

Studenci powinni:
1. Zrozumieć każdą zasadę SOLID i jej zastosowanie.
2. Zaimplementować przykłady w Java i C++.
3. Zrozumieć, jak te zasady wpływają na jakość i skalowalność kodu.
