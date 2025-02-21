/*
 1.	A vehicle manufacturing company produces different types of vehicles,
  such as cars and motorcycles. The base class Vehicle contains common properties
   like brand, model, and price. The class Car extends Vehicle by adding
    attributes like seatingCapacity and fuelType. Further, 
    a subclass ElectricCar extends Car, introducing additional attributes 
    like batteryCapacity and chargingTime. The Motorcycle class extends 
    Vehicle and adds engineCapacity and type (e.g., "Sport", "Cruiser").
     Implement this vehicle hierarchy system using multilevel inheritance
      in Java. Use constructor chaining to initialize attributes efficiently 
      and demonstrate polymorphism by overriding a method displayDetails() 
      in each subclass. 


 */
public class question6 {
    public static void main(String[] args) {
        Car c = new Car();
        c.brand = "maruti";
        c.model = "swift";
        c.price = 100000;
        c.seatingCapacity = 4;
        c.fuelType = "petrol";
        c.displayDetails();

        ElectricCar e = new ElectricCar();
        e.brand = "tsla";
        e.model ="cybertruck";
        e.price =900000;
        e.batteryCapacity = 90;
        e.chargingTime =10;
        e.fuelType = "electric";
        e.displayDetails();
    }
}
class Vehicle{
    String brand;
    String model;
    int price;
}

class Car extends Vehicle{
    int seatingCapacity;
    String fuelType;

    void displayDetails(){
        System.out.println("Brand: "+brand);
        System.out.println("Model: "+model);
        System.out.println("price: "+price);
        System.out.println("seating capacity: "+seatingCapacity);
        System.out.println("fuel type: "+fuelType);
    }
}

class ElectricCar extends Car{
    int batteryCapacity;
    int chargingTime;

    void displayDetials(){
        System.out.println("Brand: "+brand);
        System.out.println("Model: "+model);
        System.out.println("price: "+price);
        System.out.println("battery capacity: "+batteryCapacity);
        System.out.println("charging time: "+chargingTime);
    }
    
}

class motorcycle extends Vehicle{
    int engineCapacity;
    String type;

    void displayDetails(){
        System.out.println("Brand: "+brand);
        System.out.println("Model: "+model);
        System.out.println("price: "+price);
        System.out.println("engine capacity: "+engineCapacity);
        System.out.println("type: "+type);
    }
}
