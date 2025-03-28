/*Write a Java program to create an interface Playable with methods play(), pause(), and 
stop(). Implement this interface in a class MusicPlayer that overrides these methods to print 
appropriate messages (e.g., "Music is playing," "Music is paused," "Music is stopped"). 
Create another class TestPlayer with a main() method to test the functionality by calling 
the play(), pause(), and stop() methods. */
public class question4 {
    public static void main(String[] args) {
        musicPlayer mp = new musicPlayer();
        mp.play();
        mp.pause();
        mp.stop();
    }
}
interface Playable {
    void play();void pause(); void stop();
}
class musicPlayer implements Playable{
    @Override
    public void play(){
        System.out.println("Music is playing");
    }
    public void pause(){
        System.out.println("Music is paused");
    }
    public void stop(){
        System.out.println("Music is stopped");
    }
}
