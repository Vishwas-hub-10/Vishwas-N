public class inheritence {
    public static void main(String args[]){
        Fish f=new Fish();
        f.Swim(" Fast");
        f.eat(" Non vegitarian food");
    }}
class Animal{
    void eat(String s){
        System.out.println("The Animals eat a food:"+ s);

    }
}
class Fish extends Animal{
    void Swim(String s){
        System.out.println("Fish like to swim in water:"+s);
    }
}