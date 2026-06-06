interface LibraryUser {
    void registerAccount();
    void requestBook();
}

// KidUsers Class
class KidUsers implements LibraryUser {

    int age;
    String bookType;

    @Override
    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

// AdultUser Class
class AdultUser implements LibraryUser {

    int age;
    String bookType;

    @Override
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Fiction")) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}

// Main Class
public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        // Test Case #1

        KidUsers kidUser = new KidUsers();

        kidUser.age = 10;
        kidUser.bookType = "Kids";
        kidUser.registerAccount();
        kidUser.requestBook();

        System.out.println();

        kidUser.age = 18;
        kidUser.bookType = "Fiction";
        kidUser.registerAccount();
        kidUser.requestBook();

        System.out.println();

        // Test Case #2

        AdultUser adultUser = new AdultUser();

        adultUser.age = 5;
        adultUser.bookType = "Kids";
        adultUser.registerAccount();
        adultUser.requestBook();

        System.out.println();

        adultUser.age = 23;
        adultUser.bookType = "Fiction";
        adultUser.registerAccount();
        adultUser.requestBook();
    }
}
