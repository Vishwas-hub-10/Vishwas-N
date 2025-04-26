public class polymarpismoverriding {
    public static void main(String args[]){
        Father f=new Father();
        f.show("Raj");
        Son s=new Son();
        s.show("vishal");
        
    }
    
}
class Father{
    void show(String s){
        System.out.println("Father name is "+s);
    }
}
class Son extends Father{
    void show(String s){
        System.out.println("son name is "+s);
    }
}