interface LibraryUser{
  void registerAccount();
  void requestBook();
}

// created kidUser class 
class KidUser implements LibraryUser{
  int age;
  String bookType;

   // setter method
  public void setAge(int age){
    this.age = age;
  }
  public void setBookType(String bookType){
    this.bookType = bookType;
  }
  //Logic implementation
  @Override
  public void registerAccount(){
    if(age <= 12){
      System.out.println("You have succesfully regestered under a Kids Account");
    }
    else{
      System.out.println("Sorry, Age must be less 12 to regester as a kid");
    }
  }
  @Override
  public void requestBook(){
    if("Kids".equals(bookType)){
      System.out.println("Book issued succesfully,please return the book within 10 days");
    }
    else{
      System.out.println("Oops, you are allowed to take only kids books");
    }
  }
}
//Created AdultUser class
class  AdultUser implements LibraryUser{
  int age;
  String bookType;

  // Setter method
  public void setAge(int age){
    this.age = age;
  }
  public void setBookType(String bookType){
    this.bookType = bookType;
  }
  //Logic implementation
  @Override
  public void registerAccount(){
    if(age>12){
      System.out.println("You have successfully regestered under an Adult Account");
    }
    else{
      System.out.println("Sorry,age must be greater than 12 to regester as an adult");
    }
  }
  @Override
  public void requestBook(){
    if("Fiction".equals(bookType)){
      System.out.println("Book Issue sucessfully, please return the book within 7 days");
    }
    else{
      System.out.println("Oops, you are allowed to take only adult fiction books");
    }
  }
}

// Created main Demo class
public class LibraryInterfaceDemo {

  public static void main(String[] args){
    System.out.println("TEST CASE 1: KidUser");
    KidUser KidUser = new KidUser();
    //Testing Age
    KidUser.setAge(10);
    KidUser.registerAccount();

    KidUser.setAge(10);
    KidUser.registerAccount();

    //Testing bookType
    KidUser.setBookType("Kids");
    KidUser.requestBook();

    KidUser.setBookType("Fiction");
    KidUser.requestBook();
  
   System.out.println("\n TEST CASE 2: AdultUser");
   AdultUser AdultUser = new AdultUser(); 
    //Testing Age
    AdultUser.setAge(10);
    AdultUser.registerAccount();

    AdultUser.setAge(10);
    AdultUser.registerAccount();

    //Testing bookType
    AdultUser.setBookType("Kids");
    AdultUser.requestBook();

    AdultUser.setBookType("Fiction");
    AdultUser.requestBook();
  }
}