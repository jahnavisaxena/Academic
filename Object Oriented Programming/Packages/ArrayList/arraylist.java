import java.util.ArrayList;
public class arraydynamic {
    public static void main(String[] args) {
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("Volvo");
        cars.add("BMW");
        cars.add("Ford");

        cars.add(1,"maruti");
        System.out.println(cars);
        System.out.println(cars.get(0));
        cars.remove(2);
        System.out.println(cars);

    }
}
