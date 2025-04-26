public class javaref{
    public static void main(String args[]){
        System.out.println("print factorial numbersfrom 1 to 10");
        vish1 v1=new vish1();
       v1.factorial(10);
    }
}
 class vish1{
    public void factorial(int n){
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
    System.out.println("factorial of "+n+" is "+fact);
    }

}