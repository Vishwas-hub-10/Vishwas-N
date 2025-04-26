public class polymarpismoverloading {
    public static void main(String args[]){
        Math m=new Math();
        int f=m.add(10,20);
        int d=m.add(10,20,40);
        System.out.println(f);
        System.out.println(d);

    }
    
}
class Math{
    int add (int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
}
