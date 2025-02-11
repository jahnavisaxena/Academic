/*
 2.	Create a Java program with a Player class and derive three subclasses: 
 Cricket_Player, Football_Player, and Hockey_Player. Implement attributes such as name,
  age, and position, and methods like play() and train() to represent these players
 */
public class question2 {
    public static void main(String[] args) {
        Cricket_player cp = new Cricket_player();
        cp.play();
        cp.train();
        cp.name ="jahnavi";
        cp.age = 20;
        cp.position ="batsman";
        System.out.println("Name of the player "+cp.name + " Age of the player "+cp.age + " Position of the player "+cp.position);
        Football_player fp = new Football_player();
        fp.play();
        fp.train();
        fp.name ="tanay";
        fp.age = 22;
        fp.position ="goalkeeper";
        System.out.println("Name of the player "+fp.name + " Age of the player "+fp.age + " Position of the player "+fp.position);

        Hockey_player hp = new Hockey_player();
        hp.play();
        hp.train();
        hp.name = "sai";
        hp.age = 21;
        hp.position = "defender";
        System.out.println("Name of the player "+hp.name + " Age of the player "+hp.age + " Position of the player "+hp.position);

    }
}
abstract class Player{
    String name;
    int age;
    String position;
abstract void play();
abstract void train();
}

class Cricket_player extends Player{
    void play(){
        System.out.println("Cricket player is playing");
    }
    void train(){
        System.out.println("Cricket player is training");
    }
}

class Football_player extends Player{
    void play(){
        System.out.println("Football player is playing");
    }
    void train(){
        System.out.println("Football player is training");
    }
}

class Hockey_player extends Player{
    void play(){
        System.out.println("Hockey player is playing");
    }
    void train(){
        System.out.println("Hockey player is training");
    }
}

